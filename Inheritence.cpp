#include <bits/stdc++.h>
using std::string;

class Employee{
//private: - by default for class
private:
	string Name;
	string Company;
	int Age;

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

class Developer: Employee{
public:
	string FavProgrammingLanguage;
	Developer(int age, string name, string company,  string favProgrammingLanguage) : Employee(name, company, age){
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


