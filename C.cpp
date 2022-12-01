acter = 'a';
	float firstMonthSalary; //cammel casing
}*/

// BASIC VARIABLES //
/*int main() {

	int yearOfBirth = 2000; // 4 bytes
	char gender = 'M'; // 1 byte
	bool isOlderThan18 = true; // 1 byte
	float averageGrade = 3.4; // 4 bytes
	double accountBalance = 45675474667; // double float / 8 bytes

	std::cout << "Size of int is " << sizeof(int) << " bytes." << std::endl;

	// -1, -2, -3,..., -2147483648
	std::cout << "Int min value is " << INT_MIN << std::endl;

	// 0, 1, 2, 3,..., 2147483647
	std::cout << "Int max value is " << INT_MAX << std::endl;

	std::cout << "Size of Unsigned Int is " << sizeof(unsigned int) << std::endl;
	std::cout << "Unsigned Int max value is " << UINT_MAX << std::endl;

	long long bruh = 2000; // 8 bytes
	std::cout << sizeof(long long);
	return 0;
}*/

// DATA TYPE OVERFLOW //
/*int main() {

	int intMax = INT_MAX;

	std::cout << intMax << std::endl;
	std::cout << intMax+1 << std::endl; // Data type overflow / will output INT_MIN
	return 0;
}*/

// ASCII TABLE //
/*int main() { is 0" << std::endl;
	}
	else
	{
		input2 %= static_cast<int>(pow(10, static_cast<int>(log10(input2)))); //size_t 
	}
	std::cout << input2 << std::endl;

	return 0;
}*/

// BMI Calculator //
/*int main () {

	float bmi = 0, weightKg = 0, height = 0;
	float underWeight = 18.5; //bmi
	float overWeight = 25; //bmi

	std::cout << "What is your weight fatso? in KG: ";
	std::cin >> weightKg;

	std::cout << "What is your height short stuff? in Meters: ";
	std::cin >> height;
	bmi = weightKg / (height*height);

	if (bmi < underWeight) {
		std::cout << "Bro, Eat something, you'll die as a stickman..." << std::endl;
		 std::cout << "Your Body mass index is " << bmi << std::endl;
	} else if (bmi > overWeight) {
		std::cout << "Dude, Go out, touch some grass and move some muscles, you fat bitch..." << std::endl;
		std::cout << "Your Body mass index is " << bmi << std::endl;
	} else {
		std::cout << "Good stuff my dude, good stuff" << std::endl;
		std::cout << "Your Body mass index is " << bmi << std::endl;
	}

	return 0;on is false
		std::cout << "PIN: ";
		std::cin >> inputPin;
		if (inputPin != usersPin) {
			std::cout << "Incorrect PIN brainlet :| \t";
			allowedAttempts--;
			if (allowedAttempts > 0)
			{
				std::cout << allowedAttempts << " Attempts left..." << std::endl;
			} else {
				std::cout << "\nYou fucked up bro, enjoy the lock." << std::endl;
			}
		} else {
			std::cout << "Voila, enjoy the trip!" << std::endl;
		}

	} while (allowedAttempts > 0 && inputPin != usersPin);

	return 0;
}*/

// CALCULATING THE FACTORIAL OF A NUMBER USING FOR LOOP/ITERATIONS //
/*int main() {

	int input = 0;
	std::cout << "Enter a number to find its factorial: ";
	std::cin >> input; // 6
	if (input > 0) {
		//6! = 1*2*3*4*5*6
		long int factorial = 1; // equalize factorial to 1
		for (int i = 1; i <= input; i++) {
			// 1*1 so factorial = 1, 1*2 so factorial = 2, 2*3 so factorial = 6, 6*4 so factorial = 24 and so on ... 24*5, 120*6
			factorial = factorial * i; 
		}

		std::cout << "The factorial is " << factorial << std::endl;
tring city) {
	std::cout << "My name is " << name << std::endl;
	std::cout << "I'm " << age << " years old" <<std::endl;
	std::cout << "My annual salary is $" << salary << std::endl;
	std::cout << "I live in " << city << " city" <<std::endl;
}*/

// RETURN STATEMENT OF FUNCTIONS/CHECKING FOR PRIME NUMBERS //
// a function can only return a value once.

/*bool primeNums(int);

int main() {

	// int input;
	// std::cout << "Enter a number: ";
	// std::cin >> input;
	// if (isPrimeNum(input)) {
	// 	std::cout << "The number is a prime number." << std::endl;
	// } else {
	// 	std::cout << "The number is not a prime number." << std::endl;
	// }

	bool isPrime = false;
	int primeCount = 0;
	int counter = 0;
	for (int i = 1; i <= 1000000; i++) {
		isPrime = isPrimeNum(i);
		if (isPrime) {
			std::cout << i << " is a prime number." << std::endl;
			primeCount++;
		} else {
			std::cout << i << " is not a prime number." << std::endl;
		}
		counter++;
	}
	std::cout << "There are " << primeCount << " prime numbers amongstd::cout << "bro, u broke, balance hasn't changed." << std::endl;
		}
		break;
	default:
		std::cout << "uh uh, fuck you..." << std::endl;
		return;
	}
	showMenu();
	menuSettings();
}*/


// PASS BY REFERENCE AND VALUE //

/*void swapVar(int, int);
void swapVar2(int &, int &);

// passing by value copies the argument's value into the callee (where it is put on the callee's stack). 
// passing by reference passes the address of the argument into the callee
int main() {

	int num1 = 900, num2 = 200;

	// pass by value and pass by reference both give same results, however first only passes the values,
	// second passes the references of the variables (addresses), thus whatever the called function does, 
	// will be pointed to the passed addresses, and that'll be reflected inside the function where 
	// we have called the other function using pass by reference, main() here.

	swapVar(900,200);  // the values of 900 and 200 are passed as arguments
	swapVar(num1, num2); // the values of num1 and num2 are passed aser functions
// by default functions and variables are private when declared inside a class thus only accessible by the class itself

// class youtubeChannel
// { // user-defined data type (to represent a real life object)
// public:
// 	std::string Name;
// 	std::string OwnerName;
// 	int SubscribersCount;
// 	std::list<std::string> PublishedVideoTitles;
// };

// int main()
// {

// 	youtubeChannel ytChannel;
// 	ytChannel.Name = "CinnamonToastKen";
// 	ytChannel.OwnerName = "Ken";
// 	ytChannel.SubscribersCount = 5000000;
// 	ytChannel.PublishedVideoTitles = {"90 days fiance Video 1", "90 days fiance Video 2", "90 days days fiance Video 3"};

// 	return 0;
// }

// std::string str = "test";

// void someFunc(std::string s) { std::cout << s << std::endl; }

// void someFunc2(std::string &s) {
//   std::cout << s << std::endl;
//   s = "test2";
// }

// void someFunc3(const std::string &s) { std::cout << s << std::endl; }

// int main() {

//   someFunc(str); // s is a copy of str as it was passed by value
/