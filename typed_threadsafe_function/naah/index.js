const { start } = require('bindings')('clock');

start(function (clock) {
    console.log(clock);
}, 5);
