#pragma once
class Human
{
	char* name;
	char* surname;
	int age;
public:
	Human();
	Human(int a);
	Human(const char* sn, int a);
	Human(const char* n, const char* sn, int a);
	~Human();
	void Input(const char* n, const char* sn, int a);
	void Print();

	char* GetName();
	char* GetSurname();
	int GetAge();

	void SetName(const char* n);
	void SetSurname(const char* sn);
	void SetAge(int a);

};

