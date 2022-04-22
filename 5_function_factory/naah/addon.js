var {createFunction} = require('bindings')('addon');

var fn = createFunction();
console.log(fn()); // 'hello world'
