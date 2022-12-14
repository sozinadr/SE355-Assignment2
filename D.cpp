
	std::cout << (int)'a' << std::endl; // casting operator / forces a data type to convert into another.
	std::cout << int('a') << std::endl; // telling the computer what is 'a' as a number.
	std::cout << int('A') << std::endl;

	std::cout << (char)99 << std::endl;
	std::cout << char(67) << std::endl;

	return 0;
}*/

// PLAY WITH ASCII //
/*int main () {

	char c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

	std::cout << "Enter 5 letters: ";
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
	std::cout << "ASCII message: " << (int)c1 << " " << (int)c2 << " " << (int)c3 << " " << (int)c4 << " " << (int)c5 << std::endl; //casting

	int i1, i2, i3, i4, i5;

	std::cout << "Enter 5 letter numbers: ";
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5;
	std::cout << "ASCII message: " << char(i1) << char(i2) << char(i3) << char(i4) << char(i5) << std::endl;
	std::cout << "ASCII message: " << (char)i1 << (char)i2 << }*/

// BASIC CALCULATOR USING SWITCHES/SELECTION //
/*int main () {

	float num1 = 0, num2 = 0, result = 0;
	char operationSign;
	std::cout << "**SpaceGoat Calculator**";
	std::cin.ignore();
	std::cout << "Hey broski, enter a number, followed by what operation (+, -, *, /, %) you wanna do and a second number: ";
	std::cin >> num1 >> operationSign >> num2;

	switch (operationSign) {
		case '-': 
				result = num1 - num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '+': 
				result = num1 + num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '*': 
				result = num1 * num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '/': 
				result = num1 / num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '%': 
				bool isNum1Int, isNum2Int;
				
				isNum1Int = (num1 == static_cast<int>(num1)); // if the num1 is .0 then true
				isNu	
		// OR 
		//6! = 6*5*4*3*2*1
		factorial = 1;
		for (int i = input; i >= 1; i--) {
		// 1*6 so factorial = 6, 6*5 so factorial = 30, 30*4 so factorial = 120, 120*3 so factorial = 360 and so on ... 360*2, 720*1
			factorial = factorial * i; 
		}

		std::cout << "The factorial is " << factorial << std::endl;
	} else {
		std::cout << "Man, ur such an idiot, enter something more than 0..." << std::endl;
	}

	return 0;
}*/

// NESTED LOOPS/FOR AND DO WHILE LOOPS //
/*int main() {
	//grades entered that vary from 1 to 5 range
	float grade = 0, sum = 0;
	int gradeNumbers = 0;
	std::cout << "Enter how many grades you want to calculate the average for: ";
	std::cin >> gradeNumbers;

	for (int i = 1; i<=gradeNumbers; i++) {

		do {
			std::cout << "Enter grade " << i << ": ";
			std::cin >> grade;

		// OR while (grade < 1 || grade > 5)
		} while (!(grade >= 1 && grade <= 5)); // repeat if the grade is something out of range (1-5)
		sum += grade;

	}

	std::cout << "Your average grade is: " << sum/gradeNumbers << st" << counter << " numbers."<< std::endl;

	return 0;
}

bool isPrimeNum(int num) {

	if (num <= 1) { // 1 and smaller aren't prime numbers.
		return false;
	}

	// loop to check if they are divisible by numbers other than itself.
	// the loop runs only if 'i' (denominator/divisor) was smaller than 'num'.
	// since a number isn't divisible by the denominator if the denominator is greater.
	// denominator 'i' starts from 2 cuz every number is divisible by 1
	// (i < num) and not (i <= num) since every number is divisible by itself.
	for (int i = 2; i < num; i++) {
		if (num % i == 0) { // to check if they are divisible by other numbers.
			return false;
		}
	}

	return true; // after checking the facts and they were prime numbers, then return true.
}*/

// FUNCTION OVERLOADING/SAME FUNCTION NAME WITH DIFFERENT PARAMETER DATATYPES //
/*double sum(double); // no issue
int sum(int, int); // no issue
int sum(int, int, int); // no issue
int sum(double, double); // no issue but will always return an integer
double suarguments
	// since when pass by value, the called function only gets the values and use them inside itself
	// the actual variables inside main() aren't modified
	std::cout << num1 << " - " << num2 << std::endl; // outputs 900 and 200

	swapVar2(num1, num2); // the reference of num1 and num2 variables are passed as arguments (addresses of num1 and num2)
	// when passed by reference, the called function gets the addresses, and any work done on the variables 
	// of that function, will be pointed to the passed addresses, hence working on the actual variables inside main()
	std::cout << num1 << " - " << num2 << std::endl; // outputs 200 and 900
	// swapVar2(900, 200); we cannot pass hardcoded values by reference since they aren't stored on any addresses

	return 0;
}

// pass by value
void swapVar(int a, int b) {
	a = a + b; // if a = 10 and b = 20, now a = 30
	b = a - b; // b = 30 - 20, so b = 10
	a = a - b; // a = 30 - 10, so a = 20
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
   someFunc2(str); // s is str as it was passed by reference, str is also modified
//   someFunc3(str); // s is str as it was passed by reference but it cannot be
//                   // modified because marked const
//   return 0;
// }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	std::cout << (int)'a' << std::endl; // casting operator / forces a data type to convert into another.
	std::cout << int('a') << std::endl; // telling the computer what is 'a' as a number.
	std::cout << int('A') << std::endl;

	std::cout << (char)99 << std::endl;
	std::cout << char(67) << std::endl;

	return 0;
}*/

// PLAY WITH ASCII //
/*int main () {

	char c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

	std::cout << "Enter 5 letters: ";
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
	std::cout << "ASCII message: " << (int)c1 << " " << (int)c2 << " " << (int)c3 << " " << (int)c4 << " " << (int)c5 << std::endl; //casting

	int i1, i2, i3, i4, i5;

	std::cout << "Enter 5 letter numbers: ";
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5;
	std::cout << "ASCII message: " << char(i1) << char(i2) << char(i3) << char(i4) << char(i5) << std::endl;
	std::cout << "ASCII message: " << (char)i1 << (char)i2 << }*/

// BASIC CALCULATOR USING SWITCHES/SELECTION //
/*int main () {

	float num1 = 0, num2 = 0, result = 0;
	char operationSign;
	std::cout << "**SpaceGoat Calculator**";
	std::cin.ignore();
	std::cout << "Hey broski, enter a number, followed by what operation (+, -, *, /, %) you wanna do and a second number: ";
	std::cin >> num1 >> operationSign >> num2;

	switch (operationSign) {
		case '-': 
				result = num1 - num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '+': 
				result = num1 + num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '*': 
				result = num1 * num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '/': 
				result = num1 / num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '%': 
				bool isNum1Int, isNum2Int;
				
				isNum1Int = (num1 == static_cast<int>(num1)); // if the num1 is .0 then true
				isNu	
		// OR 
		//6! = 6*5*4*3*2*1
		factorial = 1;
		for (int i = input; i >= 1; i--) {
		// 1*6 so factorial = 6, 6*5 so factorial = 30, 30*4 so factorial = 120, 120*3 so factorial = 360 and so on ... 360*2, 720*1
			factorial = factorial * i; 
		}

		std::cout << "The factorial is " << factorial << std::endl;
	} else {
		std::cout << "Man, ur such an idiot, enter something more than 0..." << std::endl;
	}

	return 0;
}*/

// NESTED LOOPS/FOR AND DO WHILE LOOPS //
/*int main() {
	//grades entered that vary from 1 to 5 range
	float grade = 0, sum = 0;
	int gradeNumbers = 0;
	std::cout << "Enter how many grades you want to calculate the average for: ";
	std::cin >> gradeNumbers;

	for (int i = 1; i<=gradeNumbers; i++) {

		do {
			std::cout << "Enter grade " << i << ": ";
			std::cin >> grade;

		// OR while (grade < 1 || grade > 5)
		} while (!(grade >= 1 && grade <= 5)); // repeat if the grade is something out of range (1-5)
		sum += grade;

	}

	std::cout << "Your average grade is: " << sum/gradeNumbers << st" << counter << " numbers."<< std::endl;

	return 0;
}

bool isPrimeNum(int num) {

	if (num <= 1) { // 1 and smaller aren't prime numbers.
		return false;
	}

	// loop to check if they are divisible by numbers other than itself.
	// the loop runs only if 'i' (denominator/divisor) was smaller than 'num'.
	// since a number isn't divisible by the denominator if the denominator is greater.
	// denominator 'i' starts from 2 cuz every number is divisible by 1
	// (i < num) and not (i <= num) since every number is divisible by itself.
	for (int i = 2; i < num; i++) {
		if (num % i == 0) { // to check if they are divisible by other numbers.
			return false;
		}
	}

	return true; // after checking the facts and they were prime numbers, then return true.
}*/

// FUNCTION OVERLOADING/SAME FUNCTION NAME WITH DIFFERENT PARAMETER DATATYPES //
/*double sum(double); // no issue
int sum(int, int); // no issue
int sum(int, int, int); // no issue
int sum(double, double); // no issue but will always return an integer
double suarguments
	// since when pass by value, the called function only gets the values and use them inside itself
	// the actual variables inside main() aren't modified
	std::cout << num1 << " - " << num2 << std::endl; // outputs 900 and 200

	swapVar2(num1, num2); // the reference of num1 and num2 variables are passed as arguments (addresses of num1 and num2)
	// when passed by reference, the called function gets the addresses, and any work done on the variables 
	// of that function, will be pointed to the passed addresses, hence working on the actual variables inside main()
	std::cout << num1 << " - " << num2 << std::endl; // outputs 200 and 900
	// swapVar2(900, 200); we cannot pass hardcoded values by reference since they aren't stored on any addresses

	return 0;
}

// pass by value
void swapVar(int a, int b) {
	a = a + b; // if a = 10 and b = 20, now a = 30
	b = a - b; // b = 30 - 20, so b = 10
	a = a - b; // a = 30 - 10, so a = 20
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
   someFunc2(str); // s is str as it was passed by reference, str is also modified
//   someFunc3(str); // s is str as it was passed by reference but it cannot be
//                   // modified because marked const
//   return 0;
// }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	std::cout << (int)'a' << std::endl; // casting operator / forces a data type to convert into another.
	std::cout << int('a') << std::endl; // telling the computer what is 'a' as a number.
	std::cout << int('A') << std::endl;

	std::cout << (char)99 << std::endl;
	std::cout << char(67) << std::endl;

	return 0;
}*/

// PLAY WITH ASCII //
/*int main () {

	char c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

	std::cout << "Enter 5 letters: ";
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
	std::cout << "ASCII message: " << (int)c1 << " " << (int)c2 << " " << (int)c3 << " " << (int)c4 << " " << (int)c5 << std::endl; //casting

	int i1, i2, i3, i4, i5;

	std::cout << "Enter 5 letter numbers: ";
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5;
	std::cout << "ASCII message: " << char(i1) << char(i2) << char(i3) << char(i4) << char(i5) << std::endl;
	std::cout << "ASCII message: " << (char)i1 << (char)i2 << }*/

// BASIC CALCULATOR USING SWITCHES/SELECTION //
/*int main () {

	float num1 = 0, num2 = 0, result = 0;
	char operationSign;
	std::cout << "**SpaceGoat Calculator**";
	std::cin.ignore();
	std::cout << "Hey broski, enter a number, followed by what operation (+, -, *, /, %) you wanna do and a second number: ";
	std::cin >> num1 >> operationSign >> num2;

	switch (operationSign) {
		case '-': 
				result = num1 - num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '+': 
				result = num1 + num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '*': 
				result = num1 * num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '/': 
				result = num1 / num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '%': 
				bool isNum1Int, isNum2Int;
				
				isNum1Int = (num1 == static_cast<int>(num1)); // if the num1 is .0 then true
				isNu	
		// OR 
		//6! = 6*5*4*3*2*1
		factorial = 1;
		for (int i = input; i >= 1; i--) {
		// 1*6 so factorial = 6, 6*5 so factorial = 30, 30*4 so factorial = 120, 120*3 so factorial = 360 and so on ... 360*2, 720*1
			factorial = factorial * i; 
		}

		std::cout << "The factorial is " << factorial << std::endl;
	} else {
		std::cout << "Man, ur such an idiot, enter something more than 0..." << std::endl;
	}

	return 0;
}*/

// NESTED LOOPS/FOR AND DO WHILE LOOPS //
/*int main() {
	//grades entered that vary from 1 to 5 range
	float grade = 0, sum = 0;
	int gradeNumbers = 0;
	std::cout << "Enter how many grades you want to calculate the average for: ";
	std::cin >> gradeNumbers;

	for (int i = 1; i<=gradeNumbers; i++) {

		do {
			std::cout << "Enter grade " << i << ": ";
			std::cin >> grade;

		// OR while (grade < 1 || grade > 5)
		} while (!(grade >= 1 && grade <= 5)); // repeat if the grade is something out of range (1-5)
		sum += grade;

	}

	std::cout << "Your average grade is: " << sum/gradeNumbers << st" << counter << " numbers."<< std::endl;

	return 0;
}

bool isPrimeNum(int num) {

	if (num <= 1) { // 1 and smaller aren't prime numbers.
		return false;
	}

	// loop to check if they are divisible by numbers other than itself.
	// the loop runs only if 'i' (denominator/divisor) was smaller than 'num'.
	// since a number isn't divisible by the denominator if the denominator is greater.
	// denominator 'i' starts from 2 cuz every number is divisible by 1
	// (i < num) and not (i <= num) since every number is divisible by itself.
	for (int i = 2; i < num; i++) {
		if (num % i == 0) { // to check if they are divisible by other numbers.
			return false;
		}
	}

	return true; // after checking the facts and they were prime numbers, then return true.
}*/

// FUNCTION OVERLOADING/SAME FUNCTION NAME WITH DIFFERENT PARAMETER DATATYPES //
/*double sum(double); // no issue
int sum(int, int); // no issue
int sum(int, int, int); // no issue
int sum(double, double); // no issue but will always return an integer
double suarguments
	// since when pass by value, the called function only gets the values and use them inside itself
	// the actual variables inside main() aren't modified
	std::cout << num1 << " - " << num2 << std::endl; // outputs 900 and 200

	swapVar2(num1, num2); // the reference of num1 and num2 variables are passed as arguments (addresses of num1 and num2)
	// when passed by reference, the called function gets the addresses, and any work done on the variables 
	// of that function, will be pointed to the passed addresses, hence working on the actual variables inside main()
	std::cout << num1 << " - " << num2 << std::endl; // outputs 200 and 900
	// swapVar2(900, 200); we cannot pass hardcoded values by reference since they aren't stored on any addresses

	return 0;
}

// pass by value
void swapVar(int a, int b) {
	a = a + b; // if a = 10 and b = 20, now a = 30
	b = a - b; // b = 30 - 20, so b = 10
	a = a - b; // a = 30 - 10, so a = 20
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
   someFunc2(str); // s is str as it was passed by reference, str is also modified
//   someFunc3(str); // s is str as it was passed by reference but it cannot be
//                   // modified because marked const
//   return 0;
// }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	std::cout << (int)'a' << std::endl; // casting operator / forces a data type to convert into another.
	std::cout << int('a') << std::endl; // telling the computer what is 'a' as a number.
	std::cout << int('A') << std::endl;

	std::cout << (char)99 << std::endl;
	std::cout << char(67) << std::endl;

	return 0;
}*/

// PLAY WITH ASCII //
/*int main () {

	char c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

	std::cout << "Enter 5 letters: ";
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
	std::cout << "ASCII message: " << (int)c1 << " " << (int)c2 << " " << (int)c3 << " " << (int)c4 << " " << (int)c5 << std::endl; //casting

	int i1, i2, i3, i4, i5;

	std::cout << "Enter 5 letter numbers: ";
	std::cin >> i1 >> i2 >> i3 >> i4 >> i5;
	std::cout << "ASCII message: " << char(i1) << char(i2) << char(i3) << char(i4) << char(i5) << std::endl;
	std::cout << "ASCII message: " << (char)i1 << (char)i2 << }*/

// BASIC CALCULATOR USING SWITCHES/SELECTION //
/*int main () {

	float num1 = 0, num2 = 0, result = 0;
	char operationSign;
	std::cout << "**SpaceGoat Calculator**";
	std::cin.ignore();
	std::cout << "Hey broski, enter a number, followed by what operation (+, -, *, /, %) you wanna do and a second number: ";
	std::cin >> num1 >> operationSign >> num2;

	switch (operationSign) {
		case '-': 
				result = num1 - num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '+': 
				result = num1 + num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '*': 
				result = num1 * num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '/': 
				result = num1 / num2;
				std::cout << "The answer to your question is " << result << std::endl;
				break;
		case '%': 
				bool isNum1Int, isNum2Int;
				
				isNum1Int = (num1 == static_cast<int>(num1)); // if the num1 is .0 then true
				isNu	
		// OR 
		//6! = 6*5*4*3*2*1
		factorial = 1;
		for (int i = input; i >= 1; i--) {
		// 1*6 so factorial = 6, 6*5 so factorial = 30, 30*4 so factorial = 120, 120*3 so factorial = 360 and so on ... 360*2, 720*1
			factorial = factorial * i; 
		}

		std::cout << "The factorial is " << factorial << std::endl;
	} else {
		std::cout << "Man, ur such an idiot, enter something more than 0..." << std::endl;
	}

	return 0;
}*/

// NESTED LOOPS/FOR AND DO WHILE LOOPS //
/*int main() {
	//grades entered that vary from 1 to 5 range
	float grade = 0, sum = 0;
	int gradeNumbers = 0;
	std::cout << "Enter how many grades you want to calculate the average for: ";
	std::cin >> gradeNumbers;

	for (int i = 1; i<=gradeNumbers; i++) {

		do {
			std::cout << "Enter grade " << i << ": ";
			std::cin >> grade;

		// OR while (grade < 1 || grade > 5)
		} while (!(grade >= 1 && grade <= 5)); // repeat if the grade is something out of range (1-5)
		sum += grade;

	}

	std::cout << "Your average grade is: " << sum/gradeNumbers << st" << counter << " numbers."<< std::endl;

	return 0;
}

bool isPrimeNum(int num) {

	if (num <= 1) { // 1 and smaller aren't prime numbers.
		return false;
	}

	// loop to check if they are divisible by numbers other than itself.
	// the loop runs only if 'i' (denominator/divisor) was smaller than 'num'.
	// since a number isn't divisible by the denominator if the denominator is greater.
	// denominator 'i' starts from 2 cuz every number is divisible by 1
	// (i < num) and not (i <= num) since every number is divisible by itself.
	for (int i = 2; i < num; i++) {
		if (num % i == 0) { // to check if they are divisible by other numbers.
			return false;
		}
	}

	return true; // after checking the facts and they were prime numbers, then return true.
}*/

// FUNCTION OVERLOADING/SAME FUNCTION NAME WITH DIFFERENT PARAMETER DATATYPES //
/*double sum(double); // no issue
int sum(int, int); // no issue
int sum(int, int, int); // no issue
int sum(double, double); // no issue but will always return an integer
double suarguments
	// since when pass by value, the called function only gets the values and use them inside itself
	// the actual variables inside main() aren't modified
	std::cout << num1 << " - " << num2 << std::endl; // outputs 900 and 200

	swapVar2(num1, num2); // the reference of num1 and num2 variables are passed as arguments (addresses of num1 and num2)
	// when passed by reference, the called function gets the addresses, and any work done on the variables 
	// of that function, will be pointed to the passed addresses, hence working on the actual variables inside main()
	std::cout << num1 << " - " << num2 << std::endl; // outputs 200 and 900
	// swapVar2(900, 200); we cannot pass hardcoded values by reference since they aren't stored on any addresses

	return 0;
}

// pass by value
void swapVar(int a, int b) {
	a = a + b; // if a = 10 and b = 20, now a = 30
	b = a - b; // b = 30 - 20, so b = 10
	a = a - b; // a = 30 - 10, so a = 20
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
   someFunc2(str); // s is str as it was passed by reference, str is also modified
//   someFunc3(str); // s is str as it was passed by reference but it cannot be
//                   // modified because marked const
//   return 0;
// }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  