#include <iostream>
using std::cout;
using std::endl;
class Human
{
public:
	void walk() { cout << "I'm a man. I can walk" << endl; }
	void speak() { cout << "I'm a man. I can talk." << endl; }
	void run() { cout << "I'm a man. I can running!" << endl; }
	void eat() { cout << "I'm a man. I can eating!" << endl; }
};

int main()
{
	Human Tom;
	Tom.walk();
	Tom.speak();
	Tom.run();
	Tom.eat();
}