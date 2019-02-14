#include"UProgram.h"
#include<iostream>
using namespace std;

int main()
{
	Student st1,st2,st3;
	st1.getfirstname("Ashish");
	st2.getfirstname("Rahul");
	st3.getfirstname("Shubham");

	Course intermediatecpp;
	intermediatecpp.s[1]=st1;
	intermediatecpp.s[2]=st2;
	intermediatecpp.s[3]=st3;

	Teacher t;
	t.getfirstname("KABIR");

	intermediatec++.t1=t;

	GradeStudent();

	return 0;
}
