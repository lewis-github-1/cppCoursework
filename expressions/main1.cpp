#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  //Constants for the ticket prices
  const double CLASS_A_PRICE = 15.0;
  const double CLASS_B_PRICE = 12.0;
  const double CLASS_C_PRICE = 9.0;

  //Variables
  int classATickets; // Number of Class A tickets sold
  int classBTickets; // Number of Class B tickets sold
  int classCTickets; // Number of Class C tickets sold
  double total;      // Total revenue from ticket sales

  // Read the number of Class A tickets sold.
  cout << "Enter the number of Class A tickets sold: ";
  cin >> classATickets;

  // Read the number of Class B tickets sold.
  cout << "Enter the number of Class B tickets sold: ";
  cin >> classBTickets;

  // Read the number of Class C tickets sold.
  cout << "Enter the number of Class C tickets sold: ";
  cin >> classCTickets;

  // Calculate the total revenue from ticket sales.
  total = (classATickets * CLASS_A_PRICE) +
          (classBTickets * CLASS_B_PRICE) +
          (classBTickets * CLASS_C_PRICE);

  // Display the total revenue.
  cout << "The total revenue from ticket sales is $"
       << setprecision(2) << fixed << total << endl;
  
	return 0;
}









