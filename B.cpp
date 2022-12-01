#include <iostream> // input/output stream
#include <math.h>
#include <iomanip> // used to manipulate output
#include <unistd.h>
#include <term.h>
#include <list>
#include <vector>


// TEST CLEAR SCREEN CROSS PLATFORM //
/*void clearScreen()
{
	if (!cur_term)
	{
		int result;
		setupterm(NULL, STDOUT_FILENO, &result);
		if (result <= 0)
			return;
	}

	putp(tigetstr("clear"));
}*/

// DIVE INTO CPP //
/*int main() {

	float annualSalary = 0; // cannot store other data types other than float, also cannot be changed after creating.
	std::cout << "What's your annual salary??? ";
	std::cin >> annualSalary;
	float monthlySalary = annualSalary/12; // result of division is usually decimal.
	std::cout << "Your monthly salary is " << monthlySalary << "\nbruh you rich!!!" << std::endl;
	std::cout << "In 10 years, you will earn " << annualSalary*10 << std::endl; // no container made for 10 year salary.

	// character variable, needs single quotation marks, don't use special signs in a variable unless it's "_"
	char cha = num4 + 1 = 11
	std::cout << num4 << std::endl; // 11

	int num5 = 10;
	int num6 = 10;
	std::cout << num5 + (num6++) << std::endl; // num5 + num6 and then add 1 to num6
	std::cout << num6 << std::endl; // 11

	int num7 = 10;
	int num8 = 10;
	std::cout << (num7++) + num8 << std::endl; // add num7 to num8 and then add 1 to num7
	std::cout << num7 << std::endl; // 11

	return 0;
}*/

// SWAPPING VALUES OF TWO VAR USING A THIRD VAR//
/*int main () {

	int a = 20;
	int b = 10;
	int c;

	c = a;
	a = b;
	b = c;

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl; // 20

	return 0;
}*/

// SWAPPING VALUES OF TWO VAR WITHOUT USING A THIRD VAR //
/*int main () {

	int a = 20;
	int b = 10;

	a = a + b; //30
	b = a - b; //20
	a = a - b; //10

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl; // 20

	return 0;
}*/

// REMOVE FIRST DIGIT OF A NUMBER //
/*int main () {
	int input2 = 0;
	std::cout << "Enter a number: ";
	std::cin >> input2;

	if (input2 == 0)
	{
		std::cout << "bruh your numbe." << std::endl;
	} else {
		// to check for negative numbers too
		if (input < 0) {
			// input *= -1;
			//OR
			input = -input; // -(-input) basically
		}

		int counter = 0;
		while (input > 0) {
			input /= 10;
			counter++;
		}
		std::cout << counter << std::endl;
	}

	return 0;
}*/

// REVERSING DIGITS OF A NUMBER USING WHILE LOOP/ITERATIONS //
/*int main() {

	long long input = 0, reversedInput = 0, lastDigit = 0;
	std::cout << "Enter a number: ";
	std::cin >> input;

	while (input != 0) {
		lastDigit = input % 10; //getting last digit from input
		reversedInput = reversedInput*10 + lastDigit; // reversing the input one by one
		input /= 10; //taking out last digit from input
	}

	std::cout << "Reversed: " << reversedInput << std::endl;

	return 0;
}*/

// PIN VALIDATION USING DO WHILE LOOP/ITERATIONS //
/*int main() {

	int usersPin = 6969, inputPin = 0, allowedAttempts = 3;

	std::cout << allowedAttempts << " Attempts are allowed." <<std::endl;
	do { //still executes at least once even if the condit, 30); // 3 args
	sum(29, 35, 44, 55); // 4 args

	return 0;
}

default parameters can only be specified at the end of the parameter list
int sum(int x, int y, int z = 0, int w = 0) { 
	return (x + y + z + w);
}
*/

// FUNCTIONS WITH PARAMETERS/ARGUMENTS //

// returnType functionName(dataType1, dataType2, ...);
/*void introduceMe(std::string, int, int, std::string); // for declaration, we only specify parameter types

int main() {

	std::string userName, userCity;
	int userAge, userSalary;
	
	std::cout << "Name: ";
	std::cin >> userName;
	std::cout << "Age: ";
	std::cin >> userAge;
	std::cout << "Annual Salary: ";
	std::cin >> userSalary;
	std::cout << "City: ";
	std::cin >> userCity;
	std::cout << std::endl;
	introduceMe(userName, userAge, userSalary, userCity);

	//when we call a function, we can pass arguments into its paramters
	// introduceMe("SpaceGoat", 21, 65000, "Sulaymaniyah");
	// introduceMe("Nini", 22, 75000, "Erbil");


	return 0;
}

void introduceMe(std::string name, int age, int salary, std::ontinue" works properly.
		getchar();
	} while (option != 4);
	
	return 0;
}

void showMenu() {
	std::cout << "**********MENU**********\n" << std::endl;
	std::cout << "1. Check balance" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Exit\n" << std::endl;
	std::cout << "************************" << std::endl;
}*/

/*void menuSettings() {

	int option;

	std::cout << "Option: ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "Your balance is " << balance << "$" << std::endl;
		break;
	case 2:
		std::cout << "Deposit amount: ";
		double depositAmount;
		std::cin >> depositAmount;
		balance += depositAmount;
		std::cout << "New balance is " << balance << "$" << std::endl;
		break;

	case 3:
		std::cout << "Withdraw amount: ";
		double withdrawAmount;
		std::cin >> withdrawAmount;
		if (balance >= withdrawAmount)
		{
			balance -= withdrawAmount;
			std::cout << "New balance is " << balance << "$" << std::endl;
		}
		else
		{
		list<std::string> FamilyNames;
};

int main() {

	Account acc1;
	Account acc2;

	acc1.Name = "George";
	acc2.Name = "John";

	return 0;
}*/



/*class ClassA {
	public:
		int x = 10;

};

int main() {

	// 2 pointers pointing to the same object??
	// ClassA cls1, cls2;
	// cls2 = cls1;
	// std::cout << cls1.x << std::endl;
	// std::cout << cls2.x << std::endl;

	//creating object cls1 and cls2, and pointing cls2 to cls1
	// ClassA cls1, cls2;
	// cls2 = cls1;
	// std::cout << cls1.x << std::endl;
	// std::cout << cls2.x << std::endl;



	return 0;
}*/

// OOP - represent real life objects in programming together with their attributes(properties) and behaviors(features) //
// Class: template, blueprint to be used when we create an object from it
// Object: an instance of a class.
// We create a class to only specify and describe any object, and only an object created from that class allocates memory
// variables declared inside a class are called data members
// Functions declared inside a class are called mem