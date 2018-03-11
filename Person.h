#pragma once
#include <string>

class Person {
private:
	std::string fname;	// First Name
	std::string lname;	// Last Name
	int birthday;		// Birthday

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
	Person(std::string fname, std::string lname, int birthday)
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

	int getBirthday() {
		return birthday;
	}

	void setBirthday(int birthday) {
		this->birthday = birthday;
	}
};