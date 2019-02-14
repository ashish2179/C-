#include"UProgram.h"
#include<iostream>
using namespace std;
Teacher::Teacher()
{

}
Teacher::~Teacher()
{

}

Teacher::setfirstname(string fname)
{
	firstname=fname;
}
Teacher::getfirstname()
{
	return this->firstname;
}

Teacher::setlastname(string lname)
{
        lastname=lname;
}
Teacher::getfirstname()
{
        return this->lastname;
}


Teacher::setage(int age)
{
        this->age=age;
}
Teacher::getage()
{
        return this->age;
}

Teacher::setaddress(string add)
{
        address=add;
}
Teacher::getaddress()
{
        return this->address;
}

Teacher::setcity(string city)
{
        this->city=city;
}
Teacher::getcity()
{
        return this->city;
}


Teacher::SitInClass()
{
	cout<<"Sitting at front of class"<<endl;
}

Teacher::GradeStudent()
{
	cout<<"Student graded"<<endl;
}

