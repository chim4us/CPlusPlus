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

int main()
{
	Person Frank;
	Frank.name = "Frank";
	Frank.age = 23;
	Frank.gender = "male";

	Person Frank;
	Frank.name = "Frank";
	Frank.age = 23;
	Frank.gender = "male";

	Person people[] = {}
	
	printPersonInfo(Frank);
	
	return 0;
}
