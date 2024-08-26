import * as AddLib from "../build/Release/AddLib";

export function VersionTypeScriptAdapter() {
  return "1.0.0";
}

export function GetNumber():number {
  return AddLib.GetNumber();
}