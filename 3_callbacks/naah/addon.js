var { runCallback } = require('bindings')('addon');

runCallback(function(msg){
  console.log(msg); // 'hello world'
});
