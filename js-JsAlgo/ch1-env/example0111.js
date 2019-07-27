// example 1-11. the ramification of overusing global variables
function showScope() {
	scope = "local";
	return scope;
}

scope = "global";
console.log(scope);			// display global
console.log(showScope());	// display local
console.log(scope);			// display local
