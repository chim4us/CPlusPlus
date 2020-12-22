#include <iostream>

using namespace std;

struct Employee
{
    short id;
    int age;
    double wage;
};
 
struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};

void printPersonInfo(Company Com){
	cout << "The ID of the person is "<<Com.CEO.id<<endl;
	cout << "The Age of the person is "<<Com.CEO.age<<endl;
	cout << "The Wage of the person is "<<Com.CEO.wage<<endl;
	cout << "The Total company size is "<<Com.numberOfEmployees<<endl;
}

int main()
{
    
    Company myCompany{{ 1, 42, 60000.0 }, 5 };
    printPersonInfo(myCompany);
 
    return 0;
}
