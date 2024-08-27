// src/index.ts
// import * as AddLib from "AddLib";
import * as AddLib from "../build/Release/AddLib";

export function GetNumber(): number {
    return AddLib.GetNumber();
}
