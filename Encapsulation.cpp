#include <bits/stdc++.h>
using std::string;

class Employee{
//private: - by default for class
private:
	string Name;
	string Company;
	int Age;

public:
	void setName(string name){  //Setter
		Name = name;
	}

	string getName(){  //Getter
		return Name;
	}

	void setCompany(string company){
		Company = company;
	}
	string getCompany(){
		return Company;
	}

	void setAge(int age){ //Adding special rules to interact with the private attributes
		if(age>=18){      //Validation Rules
			Age = age;
		}       
	}
	int getAge(){
		return Age;
	}

	void IntroduceYourslef(){ //Class method
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

int main(){
	
	
	Employee employee2 = Employee("Navin", "Applied Materials", 24);
	employee2.IntroduceYourslef();

	employee2.setAge(29);
	employee2.IntroduceYourslef();
}


//For commenting - select + ctrl + / (or) select + ctrl + shift + /