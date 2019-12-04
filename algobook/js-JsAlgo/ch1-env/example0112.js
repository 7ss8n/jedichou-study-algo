// exmaple 1-12. defining and using the checking object

//////////////////////////////////////////////////
// object interface
function Checking(amount) {
	this.balance = amount;
	this.deposit = deposit;
	this.withdraw = withdraw;
	this.toString = toString;
}

// deposit method
function deposit(amount) {
	this.balance += amount;
}

// withdraw method
function withdraw(amount) {
	if (amount <= this.balance) {
		this.balance -= amount;
	}
	if (amount > this.balance) {
		console.log("Insufficient funds");
	}
}

// toString method
function toString() {
	return "Balance: " + this.balance;
}
//////////////////////////////////////////////////

var account = new Checking(500);
account.deposit(1000);
console.log(account.toString());
account.withdraw(750);
console.log(account.toString());
account.withdraw(800);
console.log(account.toString());
