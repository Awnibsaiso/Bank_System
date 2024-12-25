#pragma once
#include <iostream>
#include <string>
using namespace std;
class clsPerson {

	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsPerson(string FirstName, string LastName, string Email, string Phone) {
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	// property set 
	void setFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	// propety get
	string getFirstName() {
		return _FirstName;
	}
	__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;
	// property set 
	void setLastName(string LastName) {
		_LastName = LastName;
	}
	// propety get
	string getLastName() {
		return _LastName;
	}
	__declspec(property(get = getLastName, put = setLastName)) string LastName;
	//property set
	void setEmail(string Email) {
		_Email = Email;
	}
	//property get
	string getEmail() {
		return _Email;
	}
	__declspec(property(get = getEmail, put = setEmail)) string Email;
	//property set
	void setPhone(string Phone) {
		_Phone = Phone;
	}
	//property get
	string getPhone() {
		return _Phone;
	}
	__declspec(property(get = getPhone, put = setPhone)) string Phone;

	string FullName() {
		return _FirstName + " " + _LastName;
	}
	void Print() {
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName : " << _LastName;
		cout << "\nFull Name: " << FullName();
		cout << "\nEmail    : " << _Email;
		cout << "\nPhone    : " << _Phone;
		cout << "\n___________________\n";

	}

};