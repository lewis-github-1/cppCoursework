#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


// getDoubleValue prototype
double getDoubleValue(string); 
// displayDoubleValue prototype
void displayDoubleValue(string, double);

int main() 
{
	string emp1Name, emp2Name;
	double emp1Rate, emp1Hours, emp1Gross, emp2Rate, emp2Hours, emp2Gross;

  cout << "\nEnter the first employee's first and last name: ";
	getline(cin, emp1Name);
  
	emp1Rate = getDoubleValue("Enter Employee 1's pay rate: ");
	emp1Hours = getDoubleValue("Enter Employee 1's hours: ");
	emp1Gross = emp1Hours * emp1Rate;

  // Clear the buffer to use getline() again:
	cin.ignore();

  cout << "\nEnter the second employee's first and last name: ";
	getline(cin, emp2Name);
  
  emp2Rate = getDoubleValue("Enter Employee 2's pay rate: ");
	emp2Hours = getDoubleValue("Enter Employee 2's hours: ");
  emp2Gross = emp2Hours * emp2Rate;


  // call displayDoubleValue function for employee 1
  cout << endl;
	cout << setw(10) << left << "Name:" << setw(18) << right << emp1Name << endl;
	displayDoubleValue("Hours", emp1Hours);
	displayDoubleValue("Rate", emp1Rate);
	displayDoubleValue("Gross", emp1Gross);

  // call displayDoubleValue function for employee 2
  cout << endl;
	cout << setw(10) << left << "Name:" << setw(18) << right << emp2Name << endl;
	displayDoubleValue("Hours", emp2Hours);
	displayDoubleValue("Rate", emp2Rate);
	displayDoubleValue("Gross", emp2Gross);
	
	return 0;
}



	// getDoubleValue Function
	double getDoubleValue(string prompt) 
{
  double temp;
	
  cout << prompt;
	cin >> temp;

	while(temp < 0)
	{
		cout << "Invalid.  Please re-enter." << endl;
		cout << prompt;
		cin >> temp;
	}

	return temp;

}

//  displayDoubleValue Function
void displayDoubleValue(string label, double value)
{
	cout << setw(10) << left << label << setw(18) << right << setprecision(2)
		 << fixed << showpoint << value << endl;

}



















