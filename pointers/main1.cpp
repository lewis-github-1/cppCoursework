#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int userInput; 
	cout << "\nHow many employees do you have? ";
	cin >> userInput;

	cout << endl;

	// Task 1: Declare 3 parallel arrays for names, hours, rates
  string* names = new string[userInput];
  double* hours = new double[userInput];
  double* rates = new double[userInput];

	// Task 2: for loop to get the values for employees
  for (int i = 0; i < userInput; i++){
    cin.ignore();

    cout << "Full Name: ";
    getline(cin, names[i]);

    cout << "Hours: ";
    cin >> hours[i];

    cout << "Rate: ";
    cin >> rates[i];

    cout << endl;
  }
	double gross = 0;  // variable to hold gross pay

	// Task 3: for loop to display employees
  for (int i = 0; i < userInput; i++){
    gross = rates[i] * hours[i];
    cout << names[i] << " earned $" << fixed << setprecision(2) << gross << endl;
    
  }
	// Task 4: delete pointers
  delete [] names;
  delete [] rates;
  delete [] hours;

	// Task 5: set pointers to null
  names = nullptr;
  rates = nullptr;
  hours = nullptr;
}










