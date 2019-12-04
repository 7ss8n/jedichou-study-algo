// str2arr.js, use split() func to create a word string
var sentence = 'the quick brown fox jumped over the lazy dog';
var words = sentence.split(' ');

// use forEach, OOP thinking
words.forEach(function(val){
	console.log(val + ', ' + words.indexOf(val));
});
