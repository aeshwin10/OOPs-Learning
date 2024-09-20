#include <bits/stdc++.h>
using std::string;

class Employee{
//private: - by default for class
public:
	string Name;
	string Company;
	int Age;

	void IntroduceYourslef(){ //Class method
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company -" << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}

	Employee(string name, string company, int age){  //Constructor
		Name = name;
		Company = company;
		Age = age;
	}
};

int main(){
	
	//without constructor
	/*Employee employee1;  //<name_of_the_class name_of_the_object>
	employee1.Name = "Ashwin";
	employee1.Company = "Juspay";
	employee1.Name = "20";
	employee1.IntroduceYourslef();*/

	//with constructor
	Employee employee2 = Employee("Navin", "Applied Materials", 24);
	employee2.IntroduceYourslef();

	//creating it as a pointer with constructor
	Employee* employee3 = new Employee("Ashwin", "Juspay", 19);
	employee3->IntroduceYourslef();
	//delete employee3;
}


//For commenting - select + ctrl + / (or) select + ctrl + shift + /