// Ref: Data Structures and Algorithms with JavaScript
// obj-arr2.js
// A useable demo

function weekTemps() {
	this.dataStore = [];
	this.add = add;
	this.average = average;
}

function add(temp) {
	this.dataStore.push(temp);
}

function average() {
	var total = 0;
	for (var i=0; i<this.dataStore.length; ++i)
		total += this.dataStore[i];
	return total/this.dataStore.length;
}

var thisweek = new weekTemps();
thisweek.add(52);
thisweek.add(55);
thisweek.add(61);
thisweek.add(65);
thisweek.add(55);
thisweek.add(50);
thisweek.add(52);
thisweek.add(49);

console.log(thisweek.average());
