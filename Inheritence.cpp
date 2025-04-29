#include <bits/stdc++.h>
using std::string;

class Employee{
//private: - by default for class
private:
	string Name;
	string Company;
	int Age;

// protected:
// 	string Name;   Now, I will be able to access Name directly without getters in my child classes aswell

public:
	void setName(string name){  
		Name = name;
	}

	string getName(){  
		return Name;
	}

	void setCompany(string company){
		Company = company;
	}
	string getCompany(){
		return Company;
	}

	void setAge(int age){ 
		if(age>=18){      
			Age = age;
		}       
	}
	int getAge(){
		return Age;
	}

	void IntroduceYourslef(){ 
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company -" << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}

	Employee(string name, string company, int age){
		Name = name;
		Company = company;
		Age = age;
	}
};

class Developer: Employee{    // use ':' <base_class_name> to inherit from the base class. Developer is now a sub-class. 
//Use public keyword before <base_class_name> will make all the methods of employee available for the developer object in main
public:
	string FavProgrammingLanguage;
//since we have inherited from employee for which we have created our own constructor, now we do not have any default constructor 
//for this class aswell, that's why we have created it. It is also called parameterized base constructor
	Developer(int age, string name, string company,  string favProgrammingLanguage) : Employee(name, company, age){  //mapping: Employee here and Empolyee constructor -> position. Dev here and Employee here -> name
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void FixBug(){
		std::cout << getName() << " fixed bug using " << FavProgrammingLanguage << "\n";
	}
	void DeveloperAge(){
		std::cout << getAge() << "\n";
	}

};

int main(){
	
	
	Employee employee2 = Employee("Navin", "Applied Materials", 24);
	employee2.IntroduceYourslef();

	employee2.setAge(29);
	employee2.IntroduceYourslef();

	Developer d1 = Developer(20, "Ashwin", "JusPay", "C++");
	d1.FixBug();
	d1.DeveloperAge();
}


