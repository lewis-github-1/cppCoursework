#include <iostream>
using namespace std;

int main()
{
  double meal = 44.50;             // Cost of the meal
  double tax = meal * 0.0675;      // Tax, at 6.75%
  double subtotal = meal + tax;    // Subtotal
  double tip = subtotal * 0.15;    // Amount of 15% tip
  double total = subtotal + tip;   // Total charges

  // Display the charges.
  cout << "Meal cost: " << meal << endl;
  cout << "Tax: " << tax << endl;
  cout << "Tip: " << tip << endl;
  cout << "Total: " << total << endl;


	return 0;
}