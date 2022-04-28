var binding = require('bindings')('addon.node')

const a = new binding.SubA(42)
const b = new binding.SubB(233)

console.log(a instanceof binding.Base)
console.log(a instanceof binding.SubA)
console.log(b instanceof binding.Base)
console.log(b instanceof binding.SubB)

console.log(a.num)
console.log(b.num)
a.add(1)
b.add(1)
console.log(a.num)
console.log(b.num)

a.sub(1)
b.mul(2)
console.log(a.num)
console.log(b.num)

console.log(a.getReal())
console.log(b.getReal())
console.log(binding.Base.getReal(a))
console.log(binding.Base.getReal(b))
console.log(binding.SubA.acceptA(a))
console.log(binding.SubB.acceptB(b))