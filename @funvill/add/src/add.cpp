#include <napi.h>
#include <iostream>

int GetNumber()
{
    return 5;
}

// Wrappers for the C++ functions
Napi::Value GetNumberWrapped(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    int result = GetNumber();
    return Napi::Number::New(env, result);
}

// Initialization of the addon
Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    // Example
    exports.Set(Napi::String::New(env, "GetNumber"), Napi::Function::New(env, GetNumberWrapped));
    return exports;
}

NODE_API_MODULE(myaddon, Init)
