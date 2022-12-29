// make a class name Person with name and age as variables
#include<iostream>
using namespace std;
class Person{
	public:
	int age;
	string name;
	
};
int main()
{
	Person obj;
	cin >> obj.age >> obj.name;
	cout<< obj.age << endl << obj.name;
	return 0;
}
