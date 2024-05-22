#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calculateRetail(double, double);

int main()
{
	double wholesale;     // Wholesale cost
  double markupPercent; // Markup percentage
  double retail;        // Retail price

  // Get the item's wholesale cost.
  cout << "Enter the item's wholesale cost: ";
  cin >> wholesale;

  // Validate the wholesale cost.
  while (wholesale < 0)
    {
      cout << "Enter a non-negative value: ";
      cin >> wholesale;
    }

  // Get the item's markup percentage.
  cout << "Enter the item's markup percentage: ";
  cin >> markupPercent;

  // Validate the markup percentage.
  while (markupPercent < 0)
    {
      cout << "Enter a non-negative value: ";
      cin >> markupPercent;
    }

  // Get the item's retail price.
  retail = calculateRetail(wholesale, markupPercent);

  // Display the retail price
  cout << "The retail price is $" << setprecision(2)
       << fixed << retail << endl;
    
	return 0;
}

// ********************************************************
// The calculateRetail function receives the wholesale    *
// cost and the markup percentage as arguments, and       *
// returns the retail price of the item.                  *
// ********************************************************
// add the code for the function here
double calculateRetail(double wholesale, double markupPercent)
{
  double markup = wholesale * markupPercent / 100;
  return wholesale + markup;
}