// Ref: Data Structures and Algorithms with JavaScript
// iterator-arr2.js
// use every() to check all array elements.
var nums = [2,4,6,8,10];
var even = nums.every( function(val){return val % 2==0;} );
console.log(even ? 'all is even' : 'not at all');
