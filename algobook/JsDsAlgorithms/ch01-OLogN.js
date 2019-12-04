// file: ch01-OLogN.js
// example of O(logN)

function exampleLograithmic(n) {
	for (var i=2; i<=n; i=i*2) {
		console.log(i);
	}
}
exampleLograithmic(1000000);