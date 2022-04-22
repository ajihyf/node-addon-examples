const addon = require('../build/Release/binding');

function ObjectWrapDemo(name) {
    this.greet = function(str) {
        return _addonInstance.greet(str);
    }

    var _addonInstance = new addon.ObjectWrapDemo(name);
}

module.exports = ObjectWrapDemo;
