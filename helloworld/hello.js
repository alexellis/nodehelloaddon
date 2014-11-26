var addon = require('./build/Release/hello');

console.log(addon.hello()); // 'world'
console.log(addon.ping()); // 'pong'

