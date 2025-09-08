#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
{
	name = nullptr;
	surname = nullptr;
	age = 0;
	cout << "Constructor by default\n";
}

Human::Human(int a)
{
	if (a > 0)
	{
		age = a;
	}
	cout << "Constructor by params: Age: " << age << endl;
}

Human::Human(const char* sn, int a):Human(a)
{
	surname = new char[strlen(sn) * 2];
	strcpy_s(surname, strlen(sn) + 1, sn);
	cout << "Constructor by params: Surname: " << surname << endl;
}

Human::Human(const char* n, const char* sn, int a):Human(sn, a)
{
	name = new char[strlen(n) * 2];
	strcpy_s(name, strlen(n) + 1, n);
	cout << "Constructor by params: Name: " << name << endl;
}

Human::~Human()
{
	cout << "Destructor\n";
	delete[] name;
	delete[] surname;
}

void Human::Input(const char* n, const char* sn, int a)
{
	if (name != nullptr)
	{
		delete[]name;
	}
	name = new char[strlen(n) * 2];
	strcpy_s(name, strlen(n) + 1, n);
	if (surname != nullptr)
	{
		delete[] surname;
	}
	surname = new char[strlen(sn) + 1];
	strcpy_s(surname, strlen(sn) + 1, sn);
	age = a;
}

void Human::Print()
{
	cout << "Name: " << name << "\tSurname: " << surname << "\nAge: " << age;
}

char* Human::GetName()
{
	return name;
}

char* Human::GetSurname()
{
	return surname;
}

int Human::GetAge()
{
	return age;
}

void Human::SetName(const char* n1)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n1) + 1];
	strcpy_s(name, strlen(n1) + 1, n1);
}

void Human::SetSurname(const char* sn1)
{
	if (surname != nullptr)
	{
		delete[] surname;
	}
	surname = new char[strlen(sn1) + 1];
	strcpy_s(surname, strlen(sn1) + 1, sn1);
}

void Human::SetAge(int a1)
{
	age = a1;
}
