// ref: Data Structures and Algorithms with Javascript
// mutator-arr8.js
// Adding and removing elements from the middle of an array
// run: node mutator-arr8.js

var nums = [1,2,3,7,8,9];
var elts = [4,5,6];
nums.splice(3,0,elts);
console.log(nums);  // [1,2,3,[4,5,6],7,8,9]
console.log(nums.length);
