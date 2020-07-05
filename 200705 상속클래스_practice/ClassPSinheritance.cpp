#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	string ssn;

public:
	void print();
	string getName();

	//생성자
	Person();
	//소멸자
	~Person();

};

void Person::print()
{

}

string Person::getName()
{

}

//생성자
Person::Person()
{

}

//소멸자
Person::~Person()
{

}



class Student:public Person //상속 -> 
{
private:
	string major;
	int gradYear;


public:
	void print(); //재정의- 부모 class에도 print()있지만 부족해서 ㅇㅇ
	void changeMajor(const string& newMajor); 

	//생성자
	Student();
	//소멸자
	~Student();

};

void Student::print()
{

}

void Student::changeMajor(const string& newMajor)
{

}

//생성자
Student::Student()
{

}

//소멸자
Student::~Student()
{

}
