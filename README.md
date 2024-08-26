# Question Typescript Node Native Addon

A working example project, for a Stack Overflow question about Typescript with Node Native Addons

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
