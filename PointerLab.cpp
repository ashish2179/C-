#include<iostream>
using namespace std;

void passbyvalue(int x)
{
	cout<<"in passbyvalue()"<<endl;
	x++;
	cout<<"x value"<<x<<endl;

}
void passbyref(int &x)
{
	cout<<"in passbyref()"<<endl;
	x=50;
	cout<<"x value"<<x<<endl;
}
class Person
{
	public:
		string name;
		int age;
		int height;
		int weight;
		
};
void ModifyPerson(Person *a)
{
	a->name="singh";
}

int main()
{
	int num1,*pNum,a;
	num1=3;
	pNum=&a;
	*pNum=5;
	passbyvalue(num1);
	passbyref(*pNum);
	cout<<"vlaue of pnum"<<*pNum<<endl;
	double *d=new double;
	*d=11.50;
	cout<<"value of d"<<*d<<endl;
	delete d;
	cout<<"value of d"<<*d<<endl;
	

	Person *obj = new Person;
	obj->name="ashish";
	obj->age=20;
	obj->height=6;
	obj->weight=65;
	cout<<"name "<<obj->name<<" age "<<obj->age<<" height "<<obj->height<<" weight "<<obj->weight<<endl;
	ModifyPerson(obj);
	cout<<"name "<<obj->name<<endl;
	return 0;
}
