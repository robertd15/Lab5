#pragma once
#include <string>

class Person {
private:
	std::string fname;	// First Name
	std::string lname;	// Last Name
	std::string birthday;		// Birthday

public:
	/*Default Constructor*/
	Person():fname{ "" }, lname{ "" }, birthday{ -1 } { 
		// Insert any extra default conditions here
	}

	/*Constructor 1*/
	Person(std::string fname, std::string lname)
		:fname{fname}, lname{lname}, birthday{-1}
	{
		// Insert any extra conditions here
	}

	/*Constructor 2*/
	Person(std::string fname, std::string lname, std::string birthday)
		:fname{fname}, lname{lname}, birthday{birthday}
	{
		// Insert any extra conditions here
	}

	std::string getFName() {
		return fname;
	}

	void setFName(std::string fname) {
		this->fname = fname;
	}

	std::string getLName() {
		return lname;
	}

	void setLName(std::string lname) {
		this->lname = lname;
	}

	std::string getBirthday() {
		return birthday;
	}

	void setBirthday(std::string birthday) {
		this->birthday = birthday;
	}

	bool operator>(const Person& other) {
		if (this->fname >= other.fname)
			return true;
		return false;
	}

	friend ostream& operator<<(ostream& os, const Person& person) {
		os << person.fname << ' ' << person.lname << ',' << person.birthday;
		return os;
	}
};
