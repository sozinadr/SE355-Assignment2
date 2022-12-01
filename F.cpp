dthInput && widthInput != heightInput)) {
	// 	std::cout << "it's a meee isosceles triangle." << std::endl;
	// }
	else if (baseInput != heightInput && heightInput != widthInput && baseInput != widthInput) {
		std::cout << "it's a meee scalene triangle." << std::endl;
	} else {
		std::cout << "it's a meee isosceles triangle." << std::endl;
	}
	
	std::cout << "Your welcome, bye!" << std::endl;
	return 0;
}*/

// SOME BASIC INCREMENT AND DECREMENT STUFF //
/*int main() {

	int num = 10;
	std::cout << num++ << std::endl; //output 10 then add 1 (post increment)
	std::cout << num << std::endl; // 11

	int num2 = 10;
	std::cout << ++num2 << std::endl; // add 1 and then output 11 (pre increment)
	std::cout << num2 << std::endl; // 11

	int num3 = 10;
	std::cout << (num3 + 1) << std::endl; // 11 (doesn't store 11 in num3 tho, it just adds 1 to the output)
	std::cout << num3 << std::endl; // 10
	// num++ and ++num != (num + 1) but they equal (num = num + 1)

	int num4 = 10;
	std::cout << (num4+=1) << std::endl; // num	case 11:
			// to minimize writing a lot of code and since 4 months out of the year have 30 days in them
			std::cout << "There are 30 days in this month!" << std::endl;  
			break;
		case 1:
		case 3:
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			// to minimize writing a lot of code and since 7 months out of the year have 31 days in them
			std::cout << "There are 31 days in this month!" << std::endl;
			break;
		default: std::cout << "Invalid month!" << std::endl;
	}

	return 0;
}*/

// CHECK IF THE NUMBERS BTW 100-500 ARE DIVISBLE BY 3 and 5 USING WHILE LOOP/ITERATIONS //
/*int main() {

	int counter = 100;
	while (counter <= 500) {
		if (counter % 3 == 0 && counter % 5 == 0) {
			std::cout << counter << " is divisible by 3 and 5." << std::endl; //
		}
		counter++;
	}

	return 0;
}*/

// COUNT THE DIGITS OF A NUMBER USING WHILE LOOP/ITERATIONS //
/*int main() {

	long long input = 0;
	std::cout << "Enter a number: ";
	std::cin >> input;

	if (input == 0) {
		std::cout << "bruh your number is  << "Length: ";
	std::cin >> length;
	std::cout << "Symbol: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int h = 1; h <= length; h++) { // +1 to h each time the inner loop goes through w from h
		for (int w = 1; w <= h; w++) {
			std::cout << std::setw(2) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}
	std::cout << std::endl;

	for (int h = length; h >= 1; h--)
	{
		for (int w = 1; w <= h; w++)
		{
			std::cout << std::setw(2) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}

	return 0;
}*/

// FUNCTIONS //
/*void func(); // declaration of function

int main() {

	std::cout << "Hello from main()" << std::endl;
	func(); //calling func()
	func();

	return 0;
}

void func() { // definition of function, void doesn't return anything
	std::cout << "Hello from func()" << std::endl;
}*/

/*
A function with default parameters, can be called with 2, 3 or 4 arguments.
int sum(int, int, int, int);

nt main() {

	sum(22, 25); // 2 args
	sum(23, 2<< std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			break;
		case 2:
			std::cout << "Deposit amount: ";
			double depositAmount;
			std::cin >> depositAmount;
			balance += depositAmount;
			std::cout << "New balance is " << balance << "$\n" << std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			break;

		case 3:
			std::cout << "Withdraw amount: ";
			double withdrawAmount;
			std::cin >> withdrawAmount;
			if (balance >= withdrawAmount)
			{
				balance -= withdrawAmount;
				std::cout << "New balance is " << balance << "$\n" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
			}
			else
			{
				std::cout << "bro, u broke, balance hasn't changed.\n" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
			}
			break;
		default:
			std::cout << "uh uh, fuck you...\n" << std::endl;
			std::cout << "Press Enter to Exit..." << std::endl;
		}
		std::cin.ignore(); // ignores the enter after inputting so the "press enter to ut << c << " - " << d << std::endl;


	return 0;
}*/


// RECURSION AND RECURSIVE FUNCTIONS //
// SUM OF NUMBERS BETWEEN m-n INCLUDING and m-n

/*int sumOfNumsBtw(int, int);
int factorial(int);

int main() {

	int m = 1, n = 4;

	// int sum = 0;
	// for (int i = m; i <= n; i++) {
	// 	sum += i;
	// }
	// std::cout << sum << std::endl;
	std::cout << sumOfNumsBtw(m, n) << std::endl;
	std::cout << factorial(0) << std::endl;

	return 0;
}

int sumOfNumsBtw(int a, int b) { // a=1 becomes a=2 becomes a=3 becomes a=4, b=4
	if (a == b) {
		return a;
	}

	return a + sumOfNumsBtw(a + 1, b); // 1 + (2+(3+(4))) each () is a recursion
}

int factorial(int a) { // factorial of a number using recursion
	if (a > 1) {
		// if a = 6, 6*(5*(4*(3*(2)))) = 720
		return a*(factorial(a-1)); 
	} else if (a == 1) { // factorial of 1 is just 1
		return a;
	}
	return 0; // factorial of 0 and below is always 0
}*/


/*class Account {
	public:
		std::string Name;
		double Balance;
		double WithdrawAmount;
		double DepositAmount;
		//std:dthInput && widthInput != heightInput)) {
	// 	std::cout << "it's a meee isosceles triangle." << std::endl;
	// }
	else if (baseInput != heightInput && heightInput != widthInput && baseInput != widthInput) {
		std::cout << "it's a meee scalene triangle." << std::endl;
	} else {
		std::cout << "it's a meee isosceles triangle." << std::endl;
	}
	
	std::cout << "Your welcome, bye!" << std::endl;
	return 0;
}*/

// SOME BASIC INCREMENT AND DECREMENT STUFF //
/*int main() {

	int num = 10;
	std::cout << num++ << std::endl; //output 10 then add 1 (post increment)
	std::cout << num << std::endl; // 11

	int num2 = 10;
	std::cout << ++num2 << std::endl; // add 1 and then output 11 (pre increment)
	std::cout << num2 << std::endl; // 11

	int num3 = 10;
	std::cout << (num3 + 1) << std::endl; // 11 (doesn't store 11 in num3 tho, it just adds 1 to the output)
	std::cout << num3 << std::endl; // 10
	// num++ and ++num != (num + 1) but they equal (num = num + 1)

	int num4 = 10;
	std::cout << (num4+=1) << std::endl; // num	case 11:
			// to minimize writing a lot of code and since 4 months out of the year have 30 days in them
			std::cout << "There are 30 days in this month!" << std::endl;  
			break;
		case 1:
		case 3:
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			// to minimize writing a lot of code and since 7 months out of the year have 31 days in them
			std::cout << "There are 31 days in this month!" << std::endl;
			break;
		default: std::cout << "Invalid month!" << std::endl;
	}

	return 0;
}*/

// CHECK IF THE NUMBERS BTW 100-500 ARE DIVISBLE BY 3 and 5 USING WHILE LOOP/ITERATIONS //
/*int main() {

	int counter = 100;
	while (counter <= 500) {
		if (counter % 3 == 0 && counter % 5 == 0) {
			std::cout << counter << " is divisible by 3 and 5." << std::endl; //
		}
		counter++;
	}

	return 0;
}*/

// COUNT THE DIGITS OF A NUMBER USING WHILE LOOP/ITERATIONS //
/*int main() {

	long long input = 0;
	std::cout << "Enter a number: ";
	std::cin >> input;

	if (input == 0) {
		std::cout << "bruh your number is  << "Length: ";
	std::cin >> length;
	std::cout << "Symbol: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int h = 1; h <= length; h++) { // +1 to h each time the inner loop goes through w from h
		for (int w = 1; w <= h; w++) {
			std::cout << std::setw(2) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}
	std::cout << std::endl;

	for (int h = length; h >= 1; h--)
	{
		for (int w = 1; w <= h; w++)
		{
			std::cout << std::setw(2) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}

	return 0;
}*/

// FUNCTIONS //
/*void func(); // declaration of function

int main() {

	std::cout << "Hello from main()" << std::endl;
	func(); //calling func()
	func();

	return 0;
}

void func() { // definition of function, void doesn't return anything
	std::cout << "Hello from func()" << std::endl;
}*/

/*
A function with default parameters, can be called with 2, 3 or 4 arguments.
int sum(int, int, int, int);

nt main() {

	sum(22, 25); // 2 args
	sum(23, 2<< std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			break;
		case 2:
			std::cout << "Deposit amount: ";
			double depositAmount;
			std::cin >> depositAmount;
			balance += depositAmount;
			std::cout << "New balance is " << balance << "$\n" << std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			break;

		case 3:
			std::cout << "Withdraw amount: ";
			double withdrawAmount;
			std::cin >> withdrawAmount;
			if (balance >= withdrawAmount)
			{
				balance -= withdrawAmount;
				std::cout << "New balance is " << balance << "$\n" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
			}
			else
			{
				std::cout << "bro, u broke, balance hasn't changed.\n" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
			}
			break;
		default:
			std::cout << "uh uh, fuck you...\n" << std::endl;
			std::cout << "Press Enter to Exit..." << std::endl;
		}
		std::cin.ignore(); // ignores the enter after inputting so the "press enter to ut << c << " - " << d << std::endl;


	return 0;
}*/


// RECURSION AND RECURSIVE FUNCTIONS //
// SUM OF NUMBERS BETWEEN m-n INCLUDING and m-n

/*int sumOfNumsBtw(int, int);
int factorial(int);

int main() {

	int m = 1, n = 4;

	// int sum = 0;
	// for (int i = m; i <= n; i++) {
	// 	sum += i;
	// }
	// std::cout << sum << std::endl;
	std::cout << sumOfNumsBtw(m, n) << std::endl;
	std::cout << factorial(0) << std::endl;

	return 0;
}

int sumOfNumsBtw(int a, int b) { // a=1 becomes a=2 becomes a=3 becomes a=4, b=4
	if (a == b) {
		return a;
	}

	return a + sumOfNumsBtw(a + 1, b); // 1 + (2+(3+(4))) each () is a recursion
}

int factorial(int a) { // factorial of a number using recursion
	if (a > 1) {
		// if a = 6, 6*(5*(4*(3*(2)))) = 720
		return a*(factorial(a-1)); 
	} else if (a == 1) { // factorial of 1 is just 1
		return a;
	}
	return 0; // factorial of 0 and below is always 0
}*/


/*class Account {
	public:
		std::string Name;
		double Balance;
		double WithdrawAmount;
		double DepositAmount;
		//std:dthInput && widthInput != heightInput)) {
	// 	std::cout << "it's a meee isosceles triangle." << std::endl;
	// }
	else if (baseInput != heightInput && heightInput != widthInput && baseInput != widthInput) {
		std::cout << "it's a meee scalene triangle." << std::endl;
	} else {
		std::cout << "it's a meee isosceles triangle." << std::endl;
	}
	
	std::cout << "Your welcome, bye!" << std::endl;
	return 0;
}*/

// SOME BASIC INCREMENT AND DECREMENT STUFF //
/*int main() {

	int num = 10;
	std::cout << num++ << std::endl; //output 10 then add 1 (post increment)
	std::cout << num << std::endl; // 11

	int num2 = 10;
	std::cout << ++num2 << std::endl; // add 1 and then output 11 (pre increment)
	std::cout << num2 << std::endl; // 11

	int num3 = 10;
	std::cout << (num3 + 1) << std::endl; // 11 (doesn't store 11 in num3 tho, it just adds 1 to the output)
	std::cout << num3 << std::endl; // 10
	// num++ and ++num != (num + 1) but they equal (num = num + 1)

	int num4 = 10;
	std::cout << (num4+=1) << std::endl; // num	case 11:
			// to minimize writing a lot of code and since 4 months out of the year have 30 days in them
			std::cout << "There are 30 days in this month!" << std::endl;  
			break;
		case 1:
		case 3:
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			// to minimize writing a lot of code and since 7 months out of the year have 31 days in them
			std::cout << "There are 31 days in this month!" << std::endl;
			break;
		default: std::cout << "Invalid month!" << std::endl;
	}

	return 0;
}*/

// CHECK IF THE NUMBERS BTW 100-500 ARE DIVISBLE BY 3 and 5 USING WHILE LOOP/ITERATIONS //
/*int main() {

	int counter = 100;
	while (counter <= 500) {
		if (counter % 3 == 0 && counter % 5 == 0) {
			std::cout << counter << " is divisible by 3 and 5." << std::endl; //
		}
		counter++;
	}

	return 0;
}*/

// COUNT THE DIGITS OF A NUMBER USING WHILE LOOP/ITERATIONS //
/*int main() {

	long long input = 0;
	std::cout << "Enter a number: ";
	std::cin >> input;

	if (input == 0) {
		std::cout << "bruh your number is  << "Length: ";
	std::cin >> length;
	std::cout << "Symbol: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int h = 1; h <= length; h++) { // +1 to h each time the inner loop goes through w from h
		for (int w = 1; w <= h; w++) {
			std::cout << std::setw(2) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}
	std::cout << std::endl;

	for (int h = length; h >= 1; h--)
	{
		for (int w = 1; w <= h; w++)
		{
			std::cout << std::setw(2) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}

	return 0;
}*/

// FUNCTIONS //
/*void func(); // declaration of function

int main() {

	std::cout << "Hello from main()" << std::endl;
	func(); //calling func()
	func();

	return 0;
}

void func() { // definition of function, void doesn't return anything
	std::cout << "Hello from func()" << std::endl;
}*/

/*
A function with default parameters, can be called with 2, 3 or 4 arguments.
int sum(int, int, int, int);

nt main() {

	sum(22, 25); // 2 args
	sum(23, 2<< std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			break;
		case 2:
			std::cout << "Deposit amount: ";
			double depositAmount;
			std::cin >> depositAmount;
			balance += depositAmount;
			std::cout << "New balance is " << balance << "$\n" << std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			break;

		case 3:
			std::cout << "Withdraw amount: ";
			double withdrawAmount;
			std::cin >> withdrawAmount;
			if (balance >= withdrawAmount)
			{
				balance -= withdrawAmount;
				std::cout << "New balance is " << balance << "$\n" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
			}
			else
			{
				std::cout << "bro, u broke, balance hasn't changed.\n" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
			}
			break;
		default:
			std::cout << "uh uh, fuck you...\n" << std::endl;
			std::cout << "Press Enter to Exit..." << std::endl;
		}
		std::cin.ignore(); // ignores the enter after inputting so the "press enter to ut << c << " - " << d << std::endl;


	return 0;
}*/


// RECURSION AND RECURSIVE FUNCTIONS //
// SUM OF NUMBERS BETWEEN m-n INCLUDING and m-n

/*int sumOfNumsBtw(int, int);
int factorial(int);

int main() {

	int m = 1, n = 4;

	// int sum = 0;
	// for (int i = m; i <= n; i++) {
	// 	sum += i;
	// }
	// std::cout << sum << std::endl;
	std::cout << sumOfNumsBtw(m, n) << std::endl;
	std::cout << factorial(0) << std::endl;

	return 0;
}

int sumOfNumsBtw(int a, int b) { // a=1 becomes a=2 becomes a=3 becomes a=4, b=4
	if (a == b) {
		return a;
	}

	return a + sumOfNumsBtw(a + 1, b); // 1 + (2+(3+(4))) each () is a recursion
}

int factorial(int a) { // factorial of a number using recursion
	if (a > 1) {
		// if a = 6, 6*(5*(4*(3*(2)))) = 720
		return a*(factorial(a-1)); 
	} else if (a == 1) { // factorial of 1 is just 1
		return a;
	}
	return 0; // factorial of 0 and below is always 0
}*/


/*class Account {
	public:
		std::string Name;
		double Balance;
		double WithdrawAmount;
		double DepositAmount;
		//std: