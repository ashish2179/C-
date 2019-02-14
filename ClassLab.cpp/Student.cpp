#include"UProgram.h"
#include<iostream>
using namespace std;
Student::Student()
{

}
Student::~Student()
{

}

Student::setfirstname(string fname)
{
	firstname=fname;
}
Student::getfirstname()
{
	return this->firstname;
}

Student::setlastname(string lname)
{
        lastname=lname;
}
Student::getfirstname()
{
        return this->lastname;
}


Student::setage(int age)
{
        this->age=age;
}
Student::getage()
{
        return this->age;
}

Student::setaddress(string add)
{
        address=add;
}
Student::getaddress()
{
        return this->address;
}

Student::setcity(string city)
{
        this->city=city;
}
Student::getcity()
{
        return this->city;
}


Student::SitInClass()
{
	cout<<"Sitting in main theater"<<endl;
}

