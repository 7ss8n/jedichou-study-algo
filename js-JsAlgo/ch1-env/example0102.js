// Example 1-2. The simple if statement
var mid = 25;
var high = 50;
var low = 1;
var current = 13;
var found = -1;
if (current < mid) {
	mid = (current-low)/2;
}
console.log(mid);
