let bipf = require('node-gyp-build')(__dirname);
let bipfReference = require("bipf");


let obj = require('./package.json');

let buf = Buffer.allocUnsafe(bipfReference.encodingLength(obj));
bipfReference.encode(obj, buf, 0);
console.log(bipf.decode(buf));