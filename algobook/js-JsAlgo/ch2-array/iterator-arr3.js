// Ref: Data Structures and Algorithms with JavaScript
// iterator-arr3.js
// a small filter() demo

function isEven(num) {return num%2==0;}
function isOdd(num)  {return num%2!=0;}

var nums = [];
for(var i=0; i<20; ++i) nums[i]=i+1;
var evens = nums.filter(isEven);
var odds  = nums.filter(isOdd);

console.log("Evens: ", evens);
console.log("Odds : ", odds);
