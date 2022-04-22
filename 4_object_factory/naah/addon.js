var {createObject} = require('bindings')('addon');

var obj1 = createObject('hello');
var obj2 = createObject('world');
console.log(obj1.msg+' '+obj2.msg); // 'hello world'