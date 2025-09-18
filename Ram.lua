-- DOCUMENTATION: https://ic3w0lf22.gitbook.io/roblox-account-manager/

local Account = {} Account.__index = Account

local WebserverSettings = {
    Port = '7963',
    Password = ''
}

function WebserverSettings:SetPort(Port) self.Port = Port end
function WebserverSettings:SetPassword(Password) self.Password = Password end

local HttpService = game:GetService("HttpService")
local Request = (syn and syn.request) or request or (http and http.request) or http_request

-- Debug wrapper
local function debugPrint(tag, ...)
    print("[DEBUG][" .. tag .. "]", ...)
end

local function GET(Method, Account, ...)
    local Arguments = {...}
    local Url = 'http://localhost:' .. WebserverSettings.Port .. '/' .. Method .. '?Account=' .. Account
    print("[DEBUG][" .. "URL" .. "]", URL)
    for _, Parameter in pairs(Arguments) do
        if typeof(Parameter) ~= "boolean" then
            Url = Url .. "&" .. Parameter
        end
    end

    if WebserverSettings.Password and #WebserverSettings.Password >= 6 then
        Url = Url .. "&Password=" .. WebserverSettings.Password
    end

    debugPrint("GET", "Requesting:", Url)

    local success, Response = pcall(function()
        return Request {
            Method = "GET",
            Url = Url
        }
    end)

    if not success then
        warn("[DEBUG][GET] Request failed:", Response)
        return false
    end
    if not Response then
        warn("[DEBUG][GET] No response object!")
        return false
    end

    debugPrint("GET", "Status:", Response.StatusCode)
    debugPrint("GET", "Body:", Response.Body)

    if Response.StatusCode ~= 200 then
        return false
    end

    return Response.Body
end

local function POST(Method, Account, Body, ...)
    local Arguments = {...}
    local Url = 'http://localhost:' .. WebserverSettings.Port .. '/' .. Method .. '?Account=' .. Account

    for _, Parameter in pairs(Arguments) do
        if typeof(Parameter) ~= "boolean" then
            Url = Url .. "&" .. Parameter
        end
    end

    if WebserverSettings.Password and #WebserverSettings.Password >= 6 then
        Url = Url .. "&Password=" .. WebserverSettings.Password
    end

    debugPrint("POST", "Requesting:", Url, "| Body:", Body)

    local success, Response = pcall(function()
        return Request {
            Method = "POST",
            Url = Url,
            Body = Body
        }
    end)

    if not success then
        warn("[DEBUG][POST] Request failed:", Response)
        return false
    end
    if not Response then
        warn("[DEBUG][POST] No response object!")
        return false
    end

    debugPrint("POST", "Status:", Response.StatusCode)
    debugPrint("POST", "Body:", Response.Body)

    if Response.StatusCode ~= 200 then
        return false
    end

    return Response.Body
end

function Account.new(Username, SkipValidation)
    local self = {} setmetatable(self, Account)

    debugPrint("Account.new", "Creating account for:", Username)

    local IsValid = SkipValidation or GET("GetCSRFToken", Username)

    debugPrint("Account.new", "Validation result:", IsValid)

    if not IsValid or IsValid == "Invalid Account" then
        warn("[DEBUG][Account.new] Invalid account:", Username)
        return false
    end

    self.Username = Username
    debugPrint("Account.new", "Account created successfully:", Username)

    return self
end

function Account:GetCSRFToken() return GET("GetCSRFToken", self.Username) end

function Account:BlockUser(Argument)
    if typeof(Argument) == "string" then
        return GET("BlockUser", self.Username, "UserId=" .. Argument)
    elseif typeof(Argument) == "Instance" and Argument:IsA("Player") then
        return self:BlockUser(tostring(Argument.UserId))
    elseif typeof(Argument) == "number" then
        return self:BlockUser(tostring(Argument))
    end
end

function Account:UnblockUser(Argument)
    if typeof(Argument) == "string" then
        return GET("UnblockUser", self.Username, "UserId=" .. Argument)
    elseif typeof(Argument) == "Instance" and Argument:IsA("Player") then
        return self:UnblockUser(tostring(Argument.UserId))
    elseif typeof(Argument) == "number" then
        return self:UnblockUser(tostring(Argument))
    end
end

function Account:GetBlockedList() return GET("GetBlockedList", self.Username) end
function Account:UnblockEveryone() return GET("UnblockEveryone", self.Username) end

function Account:GetAlias() return GET("GetAlias", self.Username) end
function Account:GetDescription() return GET("GetDescription", self.Username) end
function Account:SetAlias(Alias) return POST("SetAlias", self.Username, Alias) end
function Account:SetDescription(Description) return POST("SetDescription", self.Username, Description) end
function Account:AppendDescription(Description) return POST("AppendDescription", self.Username, Description) end

function Account:GetField(Field) return GET("GetField", self.Username, "Field=" .. HttpService:UrlEncode(Field)) end
function Account:SetField(Field, Value) return GET("SetField", self.Username, "Field=" .. HttpService:UrlEncode(Field), "Value=" .. HttpService:UrlEncode(tostring(Value))) end
function Account:RemoveField(Field) return GET("RemoveField", self.Username, "Field=" .. HttpService:UrlEncode(Field)) end

function Account:SetServer(PlaceId, JobId) return GET("SetServer", self.Username, "PlaceId=" .. PlaceId, "JobId=" .. JobId) end
function Account:SetRecommendedServer(PlaceId) return GET("SetServer", self.Username, "PlaceId=" .. PlaceId) end

function Account:ImportCookie(Token) return GET("ImportCookie", "Cookie=" .. Token) end
function Account:GetCookie() return GET("GetCookie", self.Username) end
function Account:LaunchAccount(PlaceId, JobId, FollowUser, JoinVip)
    return GET("LaunchAccount", self.Username,
        "PlaceId=" .. PlaceId,
        JobId and ("JobId=" .. JobId),
        FollowUser and "FollowUser=true",
        JoinVip and "JoinVIP=true")
end

return Account, WebserverSettings
