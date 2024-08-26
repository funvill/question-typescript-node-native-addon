# Question Typescript Node Native Addon

A working example project, for a Stack Overflow question about Typescript with Node Native Addons

[How to generate the Typescript declaration files .ts.d from a Node Native Addon (C++)](https://stackoverflow.com/questions/78916558/how-to-generate-the-typescript-declaration-files-ts-d-from-a-node-native-addon)

## How to build

```bash
cd @funvill/add
npm install
npm run build
cd ../../example-local-module
npm install
npm start
```

Should output the following

```txt
add:  {
  VersionTypeScriptAdapter: [Function: VersionTypeScriptAdapter],
  GetNumber: [Function: GetNumber]
}
GetNumber:  5
```
