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

	//������
	Person();
	//�Ҹ���
	~Person();

};

void Person::print()
{

}

string Person::getName()
{

}

//������
Person::Person()
{

}

//�Ҹ���
Person::~Person()
{

}



class Student:public Person //��� -> 
{
private:
	string major;
	int gradYear;


public:
	void print(); //������- �θ� class���� print()������ �����ؼ� ����
	void changeMajor(const string& newMajor); 

	//������
	Student();
	//�Ҹ���
	~Student();

};

void Student::print()
{

}

void Student::changeMajor(const string& newMajor)
{

}

//������
Student::Student()
{

}

//�Ҹ���
Student::~Student()
{

}
