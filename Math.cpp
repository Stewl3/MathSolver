#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <bitset>


using namespace std;

int main() {
	//Fahrenheit to celsius
	cout << "Fahrenheit to Celsius converter!" << endl;
	cout << "Enter the Fahrenheit value: ";
	double Fahrenheit;
	cin >> Fahrenheit;

	if (Fahrenheit < 0) {
		cout << "Can not compute negative values!!" << endl;
	}
	else {
		double Celsius{ (Fahrenheit - 32) / 1.8 };
		cout << "The Celsius equivalent is: " << Celsius << endl;
		cout << " " << endl;
	}
	

	//Area of a circle
	cout << "The area of a circle!" << endl;

	const float pi{3.141592F};
	const short power {2};

	cout << "Give me a radius: ";
	double radius;
	cin >> radius;

	if (radius < 0) {
		cout << "Can not compute negative numbers!!" << endl;
		cout << " " << endl;
	}
	else {
		double area{ pi * pow(radius, power) };
		cout << "The area of this circle is: " << area << endl;
		cout << " " << endl;
	}

	//Pythagorean Theorem
	cout << "The Pythagorean Theorem!" << endl;
	cout << "Enter the value for 'A': ";
	int a;
	cin >> a;

	cout << "Enter the value for 'B': ";
	int b;
	cin >> b;
	if (a < 0 || b < 0) {
		cout << "Can not compute negative values!" << endl;
	}
	else {
		double c_squared{ pow(a, 2) + pow(b, 2) };
		double c = sqrt(c_squared);
		cout << "The hypotenuse is: " << c << endl;
	}
	

	cout << " " << endl;

	//Two dice RNG
	cout << "Roll the dice!" << endl;
	const int min_value{1};
	const int max_value{ 6 };
	srand(time(nullptr));
	int number_1{ rand() % (min_value - max_value + 1) + min_value};
	int number_2{ rand() % (min_value - max_value + 1) + min_value };
	int added_num{ number_1 + number_2 };
	cout << number_1 << ',' << number_2 << endl;
	cout << "Your total move is: " << added_num << endl;

	cout << " " << endl;
	
	//binary adder
	cout << "A binary adder!" << endl;
	string addBinary(string a, string b); {
		cout << "Enter a binary string value for 'A': ";
		string c;
		cin >> c;
		bitset<16> const a(c);

		cout << "Enter a binary string value for 'B': ";
		string d;
		cin >> d;
		bitset<16> const b(d);

		bitset<16> const m("1");
		bitset<16> result;
		for (auto i = 0; i < result.size(); ++i) {
			bitset<16> const diff(((a >> i) & m).to_ullong() + ((b >> i) & m).to_ullong() + (result >> i).to_ullong());
			result ^= (diff ^ (result >> i)) << i;
		}
		cout << result << endl;
	}
	cout << " " << endl;

	//Mortgage Calculator
	cout << "Mortgage Calculator!" << endl;
	const int MONTHS_IN_YEARS = 12;
	const int PERCENT = 100;

	cout << "Principle: ";
	int principle; 
	cin >> principle;

	cout << "Annual Interest Rate: ";
	float annualInterest;
	cin >> annualInterest;
	float monthly_interest = annualInterest / PERCENT / MONTHS_IN_YEARS;

	cout << "Period in years: ";
	int years;
	cin >> years;
	int num_of_payments = years * MONTHS_IN_YEARS;

	double Mortgage = principle
		* (monthly_interest * pow(1 + monthly_interest, num_of_payments))
		/ (pow(1 + monthly_interest, num_of_payments) - 1);
	cout << "Mortgage: $" << Mortgage;
}
