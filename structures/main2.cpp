#include <iostream>
#include <string>
using namespace std;

// Employee structure
struct Employee
{
  string name;
  double hours;
  double rate;
};

// Function prototypes
Employee getEmployee();
void displayEmployee(Employee);

// Main
int main() 
{
  cout << "Getting the employee information..." << endl;
  cout << "=========================================" << endl;  
  Employee employee1 = getEmployee();
  Employee employee2 = getEmployee();

  cout << "Displaying the employee information..." << endl;
  cout << "========================================" << endl;
  displayEmployee(employee1);
  displayEmployee(employee2);
  
  return 0;
}

Employee getEmployee()
{
  Employee temp;

  cout << "Enter the employee's full name: ";
  getline(cin, temp.name);

  cout << "\nEnter the rate of pay: ";
  cin >> temp.rate;

  cout << "\nEnter the hours: ";
  cin >> temp.hours;
  cout << endl;
  
  cin.ignore();
  return temp;
};

void displayEmployee(Employee e)
{
  float grossPay = e.rate * e.hours;
  cout << "Name: " << e.name << endl;
  cout << "Rate: " << e.rate << endl;
  cout << "Hours: " << e.hours << endl;
  cout << "Gross pay: " << grossPay << endl << endl;
};










