#include <iostream>

using namespace std;

struct Person{
	string name;
	int age;
	string gender;
};

void printPersonInfo(Person p){
	cout << "The name of the person is "<<p.name<<endl;
	cout << "The age of the person is "<<p.age<<endl;
	cout << "The gender of the person is "<<p.gender<<endl;
}

struct Rectangle
{
	double length{ 1.0 }; // non-static member initialization
	double width{ 1.0 };
};
 

int main()
{
    Rectangle x{ 2.0, 2.0 }; // uniform initialization
    
	Person frank;
	frank.name = "Frank";
	frank.age = 23;
	frank.gender = "male";

	Person emma;
	emma.name = "Emma";
	emma.age = 27;
	emma.gender = "male";
	
	Person emeka {"Emeka",27,"amle"};

	Person people[] = {frank,emma,emeka};
	
	printPersonInfo(people[1]);
	printPersonInfo(people[0]);
	printPersonInfo(people[2]);
	printPersonInfo(frank);
	
	return 0;
}
