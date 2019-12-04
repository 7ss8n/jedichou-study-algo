// aggregate-arr2.js
// shadow copy, this like csharp or java
var nums = [];
for(var i=0; i<100; ++i) nums[i] = i+1;
var samenums = nums
nums[0] = 400;
console.log('nums : ' + nums); 
console.log('samenums : ' + samenums);
