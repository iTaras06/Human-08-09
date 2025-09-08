#include <iostream>
#include "Human.h"
using namespace std;

int main()
{
	cout << "Hello, human\n\n";
	Human obj1;
	obj1.Input("Vlad", "Vladislavovich", 22);
	obj1.Print();
	obj1.SetName("Taras");
	cout << "\nName: " << obj1.GetName();
	obj1.SetSurname("Kodzha");
	cout << "\nSurname: " << obj1.GetSurname();
	obj1.SetAge(19);
	cout << "\nAge: " << obj1.GetAge() << endl;
}