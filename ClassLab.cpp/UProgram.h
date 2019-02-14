#pragma once

#include<string>

class Course:public Student,public Teacher
{
	private:

	public:
		Course();
		~Course();
		Student s[3];
		Teacher t1;

}
class Student
{
	private:
		std::string firstname;
                std::string lastname;
                int age;
                std::string address;
                std::string city;
               	std::string phone;
	public:
		Student();
		~Student();

		 void setfirstname(std::string fname);
                std::string getfirstname();

                void setlastname(std::string lname);
                std::string getlastname();

                void setage(int age);
                int getage();

                void setaddress(std::string add);
                std::string getaddress();

                void setcity(std::string city);
                std::string getcity();

                void setphone(std::string ph);
		std::string getphone();

		void SitInClass();

}
class Teacher
{
	private:
		std::string firstname;
		std::string lastname;
		int age;
		std::string address;
		std::string city;
		std::sting phone;
	public:
		Teacher();
		~Teacher();

		void setfirstname(std::string fname);
		std::string getfirstname();

		void setlastname(std::string lname);
		std::string getlastname();

		void setage(int age);
		int getage();

		void setaddress(std::string add);
                std::string getaddress();

		void setcity(std::string city);
                std::string getcity();

		void setphone(std::string ph);
		std::string getphone();

		void GradeStudent();
		void SitInClass();

}
