#include<iostream>
#include<cstring> //page 459 is a list of c functions.
#include<string> 
using namespace std;

int main() { //strings are really just an array of characters, and they aren't very flexible. They don't work like variables.
	char name[6] = "Bobby";
	char last[8] = "Rockers";
	char copy[8]; 

	strncpy_s(copy, last, 4); //page 459 is a list of c functions.

	cout << "Firstname: " << name << " Lastname: " << last << endl;
	cout << copy;

	//Output:

	//Firstname: Bobby Lastname : Rockers
	//Rock

	cout << endl << endl;

	string test = "Rockers";

	cout << test << endl;
	test = "Robert";
	cout << test << endl;
	cout << "The legnth of the test is " << test.length() << endl;
	cout << "The 3rd char of test is " << test[2] << endl;

	//Output:

	//Rockers
	//Robert
	//The legnth of the test is 6
	//The 3rd char of test is b

	cin >> test;
	cout << "Test is now equal to " << test << endl;

	char end = 'y';
	cin >> end;
	return 0;
}

//Homework is: Create an encryption program. Take in a text message, use it to creat a "one-time pad" to encrypt and decrypt a message.
