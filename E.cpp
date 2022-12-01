char)i3 << (char)i4 << (char)i5; // casting

	return 0;
}*/

////////////////////////////////// SELECTION, SEQUENTIAL AND ITERATIONS //////////////////////////////////

// SELECTION / SIMPLE IF STATEMENTS //
/*int main() {

	int userInput = 0;

	std::cout << "Enter a whole number to see if it's even or odd: ";
	std::cin >> userInput;

	if (userInput % 2 == 0) {
		std::cout << userInput << " is even." << std::endl;
	} else {
		std::cout << userInput << " is odd." << std::endl;
	}

	std::cout << "Your welcome, bye!" << std::endl;
	return 0;
}*/

// IF STATEMENT EXAMPLE //
/*int main() {

	float baseInput, heightInput, widthInput;

	std::cout << "Enter 3 whole numbers for  a triangle: ";
	std::cin >> baseInput >> heightInput >> widthInput;

	if (baseInput == heightInput && heightInput == widthInput) {
		std::cout << "it's a meee equilateral triangle." << std::endl;
	}
	// else if ((baseInput == heightInput && heightInput != widthInput) || (baseInput != heightInput && heightInput == widthInput) || (baseInput == w2Int = (num2 == static_cast<int>(num2)); // if the num2 is .0 then true

				if (isNum1Int && isNum2Int) {
					result = static_cast<int>(num1) % static_cast<int>(num2);
					std::cout << "The answer to your question is " << result << std::endl;
				} else {
					std::cout << "one or more of your inputs is not an integer, operation cannot be performed..." << std::endl;
				}

				break;
		default: std::cout << "Incorrect input..." << std::endl;
	}

	return 0;
}*/

// PROGRAM TO CHECK THE NUMBER OF DAYS IN A MONTH USING SWITCHES/SELECTION //
// (inYear % 4 = 0, and inYear % 100 != 0 or inYear % 400 == 0) //
/*int main() {

	int inYear, inMonth;
	std::cout << "Enter year and month: ";
	std::cin >> inYear >> inMonth;

	switch (inMonth) {
		case 2: 
				if ((inYear % 4 == 0 && inYear % 100 != 0) || inYear % 400 == 0) {
					std::cout << "There are 29 days in this month!" << std::endl;
				} else {
					std::cout << "There are 28 days in this month!" << std::endl;
				}
				break;
		case 4: 
		case 6: 
		case 9: 
::endl;

	return 0;
}*/

// MULTIPLICATION TABLE USING NESTED FOR LOOPS //
/*int main() {

	for (int i = 1; i <= 2000; i++) { // +1 to i each time the inner loop goes through j from 1 to 10
		for (int j = 1; j <= 2000; j++) {
			std::cout << i << " x " << j << " = " << i*j << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}*/

// DRAWING RECTANGLES USING NESTED FOR LOOPS //
/*int main() {

	int row, column; // row from left to right, column from top to bottom
	char symbol;
	std::cout << "Row: ";
	std::cin >> row;
	std::cout << "Column: ";
	std::cin >> column;
	std::cout << "Symbol: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int r = 0; r < row; r++) { // +1 to r each time the inner loop goes through c from the column input
		for (int c = 0; c < column; c++) {
			std::cout << std::setw(3) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}

	return 0;
}*/

// DRAWING A RIGHT TRIANGLE USING NESTED FOR LOOPS //
/*int main() {

	int length;
	char symbol;
	std::cou(int, double); // no issue as long as first argument passed is an int and second argument is a double
double sum(double, double, double);

// issue, Overloaded functions may or may not have different return types but they must have different parameters!!!
// double sum(double, double)
// 2 same named funcs with different return types and same parameters gives error.
// however, same return type and different parameters or different number of parameters are good.

int main() {

	std::cout << sum(1.1, 1.1, 1.2) << std::endl;
	return 0;
}

double sum(double a, double b, double c) {
	return a + b + c;
}*/


// ATM APP //
/*void showMenu();
void menuSettings();
double balance = 500; //global variable
int option; //global variable

int main() {

	// check balance, deposit, withdraw, show menu

	// showMenu();
	// menuSettings();

	// OR
	do {
		showMenu();

		std::cout << "Option: ";
		std::cin >> option;
		std::system("clear");

		switch (option)
		{
		case 1:
			std::cout << "Your balance is " << balance << "$\n"

// pass by reference
// we use & to denote that the function accepts addresses as parameters
// so the function modifies the actual addresses of the variables in main()
void swapVar2(int &a, int &b) { 
	int temp = a;
	a = b;
	b = temp;
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
}*/


// GENERIC FUNCTIONS AND TEMPLATES //

/*template <typename T> // creating a generic datatype, here T
// OR template <class T>
void swapVar(T &a, T &b) { // T is a generic datatype, thus changes based on the type of variable reference you pass in
	T temp = a;
	a = b;
	b = temp;
}


int main() {

	int a = 5, b = 10;
	std::cout << a << " - " << b << std::endl;

	swapVar<int>(a, b); // swapVar is called with an int datatype and int references are passed in as arguments
	std::cout << a << " - " << b << std::endl;

	char c = 'c', d = 'd';
	std::cout << c << " - " << d << std::endl;

	swapVar<char>(c, d); // swapVar is called with a char datatype and char references are passed in as arguments
	std::cchar)i3 << (char)i4 << (char)i5; // casting

	return 0;
}*/

////////////////////////////////// SELECTION, SEQUENTIAL AND ITERATIONS //////////////////////////////////

// SELECTION / SIMPLE IF STATEMENTS //
/*int main() {

	int userInput = 0;

	std::cout << "Enter a whole number to see if it's even or odd: ";
	std::cin >> userInput;

	if (userInput % 2 == 0) {
		std::cout << userInput << " is even." << std::endl;
	} else {
		std::cout << userInput << " is odd." << std::endl;
	}

	std::cout << "Your welcome, bye!" << std::endl;
	return 0;
}*/

// IF STATEMENT EXAMPLE //
/*int main() {

	float baseInput, heightInput, widthInput;

	std::cout << "Enter 3 whole numbers for  a triangle: ";
	std::cin >> baseInput >> heightInput >> widthInput;

	if (baseInput == heightInput && heightInput == widthInput) {
		std::cout << "it's a meee equilateral triangle." << std::endl;
	}
	// else if ((baseInput == heightInput && heightInput != widthInput) || (baseInput != heightInput && heightInput == widthInput) || (baseInput == w2Int = (num2 == static_cast<int>(num2)); // if the num2 is .0 then true

				if (isNum1Int && isNum2Int) {
					result = static_cast<int>(num1) % static_cast<int>(num2);
					std::cout << "The answer to your question is " << result << std::endl;
				} else {
					std::cout << "one or more of your inputs is not an integer, operation cannot be performed..." << std::endl;
				}

				break;
		default: std::cout << "Incorrect input..." << std::endl;
	}

	return 0;
}*/

// PROGRAM TO CHECK THE NUMBER OF DAYS IN A MONTH USING SWITCHES/SELECTION //
// (inYear % 4 = 0, and inYear % 100 != 0 or inYear % 400 == 0) //
/*int main() {

	int inYear, inMonth;
	std::cout << "Enter year and month: ";
	std::cin >> inYear >> inMonth;

	switch (inMonth) {
		case 2: 
				if ((inYear % 4 == 0 && inYear % 100 != 0) || inYear % 400 == 0) {
					std::cout << "There are 29 days in this month!" << std::endl;
				} else {
					std::cout << "There are 28 days in this month!" << std::endl;
				}
				break;
		case 4: 
		case 6: 
		case 9: 
::endl;

	return 0;
}*/

// MULTIPLICATION TABLE USING NESTED FOR LOOPS //
/*int main() {

	for (int i = 1; i <= 2000; i++) { // +1 to i each time the inner loop goes through j from 1 to 10
		for (int j = 1; j <= 2000; j++) {
			std::cout << i << " x " << j << " = " << i*j << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}*/

// DRAWING RECTANGLES USING NESTED FOR LOOPS //
/*int main() {

	int row, column; // row from left to right, column from top to bottom
	char symbol;
	std::cout << "Row: ";
	std::cin >> row;
	std::cout << "Column: ";
	std::cin >> column;
	std::cout << "Symbol: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int r = 0; r < row; r++) { // +1 to r each time the inner loop goes through c from the column input
		for (int c = 0; c < column; c++) {
			std::cout << std::setw(3) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}

	return 0;
}*/

// DRAWING A RIGHT TRIANGLE USING NESTED FOR LOOPS //
/*int main() {

	int length;
	char symbol;
	std::cou(int, double); // no issue as long as first argument passed is an int and second argument is a double
double sum(double, double, double);

// issue, Overloaded functions may or may not have different return types but they must have different parameters!!!
// double sum(double, double)
// 2 same named funcs with different return types and same parameters gives error.
// however, same return type and different parameters or different number of parameters are good.

int main() {

	std::cout << sum(1.1, 1.1, 1.2) << std::endl;
	return 0;
}

double sum(double a, double b, double c) {
	return a + b + c;
}*/


// ATM APP //
/*void showMenu();
void menuSettings();
double balance = 500; //global variable
int option; //global variable

int main() {

	// check balance, deposit, withdraw, show menu

	// showMenu();
	// menuSettings();

	// OR
	do {
		showMenu();

		std::cout << "Option: ";
		std::cin >> option;
		std::system("clear");

		switch (option)
		{
		case 1:
			std::cout << "Your balance is " << balance << "$\n"

// pass by reference
// we use & to denote that the function accepts addresses as parameters
// so the function modifies the actual addresses of the variables in main()
void swapVar2(int &a, int &b) { 
	int temp = a;
	a = b;
	b = temp;
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
}*/


// GENERIC FUNCTIONS AND TEMPLATES //

/*template <typename T> // creating a generic datatype, here T
// OR template <class T>
void swapVar(T &a, T &b) { // T is a generic datatype, thus changes based on the type of variable reference you pass in
	T temp = a;
	a = b;
	b = temp;
}


int main() {

	int a = 5, b = 10;
	std::cout << a << " - " << b << std::endl;

	swapVar<int>(a, b); // swapVar is called with an int datatype and int references are passed in as arguments
	std::cout << a << " - " << b << std::endl;

	char c = 'c', d = 'd';
	std::cout << c << " - " << d << std::endl;

	swapVar<char>(c, d); // swapVar is called with a char datatype and char references are passed in as arguments
	std::cchar)i3 << (char)i4 << (char)i5; // casting

	return 0;
}*/

////////////////////////////////// SELECTION, SEQUENTIAL AND ITERATIONS //////////////////////////////////

// SELECTION / SIMPLE IF STATEMENTS //
/*int main() {

	int userInput = 0;

	std::cout << "Enter a whole number to see if it's even or odd: ";
	std::cin >> userInput;

	if (userInput % 2 == 0) {
		std::cout << userInput << " is even." << std::endl;
	} else {
		std::cout << userInput << " is odd." << std::endl;
	}

	std::cout << "Your welcome, bye!" << std::endl;
	return 0;
}*/

// IF STATEMENT EXAMPLE //
/*int main() {

	float baseInput, heightInput, widthInput;

	std::cout << "Enter 3 whole numbers for  a triangle: ";
	std::cin >> baseInput >> heightInput >> widthInput;

	if (baseInput == heightInput && heightInput == widthInput) {
		std::cout << "it's a meee equilateral triangle." << std::endl;
	}
	// else if ((baseInput == heightInput && heightInput != widthInput) || (baseInput != heightInput && heightInput == widthInput) || (baseInput == w2Int = (num2 == static_cast<int>(num2)); // if the num2 is .0 then true

				if (isNum1Int && isNum2Int) {
					result = static_cast<int>(num1) % static_cast<int>(num2);
					std::cout << "The answer to your question is " << result << std::endl;
				} else {
					std::cout << "one or more of your inputs is not an integer, operation cannot be performed..." << std::endl;
				}

				break;
		default: std::cout << "Incorrect input..." << std::endl;
	}

	return 0;
}*/

// PROGRAM TO CHECK THE NUMBER OF DAYS IN A MONTH USING SWITCHES/SELECTION //
// (inYear % 4 = 0, and inYear % 100 != 0 or inYear % 400 == 0) //
/*int main() {

	int inYear, inMonth;
	std::cout << "Enter year and month: ";
	std::cin >> inYear >> inMonth;

	switch (inMonth) {
		case 2: 
				if ((inYear % 4 == 0 && inYear % 100 != 0) || inYear % 400 == 0) {
					std::cout << "There are 29 days in this month!" << std::endl;
				} else {
					std::cout << "There are 28 days in this month!" << std::endl;
				}
				break;
		case 4: 
		case 6: 
		case 9: 
::endl;

	return 0;
}*/

// MULTIPLICATION TABLE USING NESTED FOR LOOPS //
/*int main() {

	for (int i = 1; i <= 2000; i++) { // +1 to i each time the inner loop goes through j from 1 to 10
		for (int j = 1; j <= 2000; j++) {
			std::cout << i << " x " << j << " = " << i*j << std::endl;
		}
		std::cout << std::endl;
	}

	return 0;
}*/

// DRAWING RECTANGLES USING NESTED FOR LOOPS //
/*int main() {

	int row, column; // row from left to right, column from top to bottom
	char symbol;
	std::cout << "Row: ";
	std::cin >> row;
	std::cout << "Column: ";
	std::cin >> column;
	std::cout << "Symbol: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int r = 0; r < row; r++) { // +1 to r each time the inner loop goes through c from the column input
		for (int c = 0; c < column; c++) {
			std::cout << std::setw(3) << symbol; // setw sets field width
		}
		std::cout << std::endl; // next row
	}

	return 0;
}*/

// DRAWING A RIGHT TRIANGLE USING NESTED FOR LOOPS //
/*int main() {

	int length;
	char symbol;
	std::cou(int, double); // no issue as long as first argument passed is an int and second argument is a double
double sum(double, double, double);

// issue, Overloaded functions may or may not have different return types but they must have different parameters!!!
// double sum(double, double)
// 2 same named funcs with different return types and same parameters gives error.
// however, same return type and different parameters or different number of parameters are good.

int main() {

	std::cout << sum(1.1, 1.1, 1.2) << std::endl;
	return 0;
}

double sum(double a, double b, double c) {
	return a + b + c;
}*/


// ATM APP //
/*void showMenu();
void menuSettings();
double balance = 500; //global variable
int option; //global variable

int main() {

	// check balance, deposit, withdraw, show menu

	// showMenu();
	// menuSettings();

	// OR
	do {
		showMenu();

		std::cout << "Option: ";
		std::cin >> option;
		std::system("clear");

		switch (option)
		{
		case 1:
			std::cout << "Your balance is " << balance << "$\n"

// pass by reference
// we use & to denote that the function accepts addresses as parameters
// so the function modifies the actual addresses of the variables in main()
void swapVar2(int &a, int &b) { 
	int temp = a;
	a = b;
	b = temp;
	std::cout << "First variable is " << a << ", second is " << b << std::endl;
}*/


// GENERIC FUNCTIONS AND TEMPLATES //

/*template <typename T> // creating a generic datatype, here T
// OR template <class T>
void swapVar(T &a, T &b) { // T is a generic datatype, thus changes based on the type of variable reference you pass in
	T temp = a;
	a = b;
	b = temp;
}


int main() {

	int a = 5, b = 10;
	std::cout << a << " - " << b << std::endl;

	swapVar<int>(a, b); // swapVar is called with an int datatype and int references are passed in as arguments
	std::cout << a << " - " << b << std::endl;

	char c = 'c', d = 'd';
	std::cout << c << " - " << d << std::endl;

	swapVar<char>(c, d); // swapVar is called with a char datatype and char references are passed in as arguments
	std::c