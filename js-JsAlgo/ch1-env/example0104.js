// Example 1-4. The if-else if statement
var mid = 25;
var high = 50;
var low = 1;
var current = 13;
var found = -1;

if (current < mid) {
	mid = (current-mid) / 2;
}
else if (current > mid) {
	mid = (current+mid) / 2 ;
}
else {
	found = current;
}

console.log(mid);
console.log(found == -1);
