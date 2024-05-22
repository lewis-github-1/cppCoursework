// Ch 2 Program - Purchase
#include <iostream>
using namespace std;

int main()
{
	// Step #1:  Declare 5 variables:  
	//   itemOne, itemTwo, itemThree, itemFour, and itemFive
	//   Their data types should be double since they will have a decimal point
	//   Variable values should be: 15.95, 24.95, 6.95, 12.95,  and 3.95
  double itemOne = 15.95;
  double itemTwo = 24.95;
  double itemThree = 6.95;
  double itemFour = 12.95;
  double itemFive = 3.95;


	// Step #2:  Declare 3 more variables named subtotal, tax, and total
	//   Their data type should also be double since they will have decimal points
	//   We don't have values for them yet.  
  double subtotal;
  double tax;
  double total;


	// Step #3:  Declare a constant for the tax rate.  
	//   See page 73 to read about constants.
	//   It will be a double data type and will hold the value .07
	//   Remember that constants are named with ALL_CAPS and use an underscore 
	//   to separate words.
	//   Refer to the sampleoutput.png for what your output should look like
  const double TAX_RATE = .07;


	// Step #4:  set the subtotal variable to be equal to all 5 items added together
	//   Use variables for the items, don't type in their values
  subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;

	
	// Step #5:  set the tax variable to be equal to the subtotal 
	//   multiplied by the tax rate variable
	//   Again - use variables - not typed in numbers
  tax = subtotal * TAX_RATE;


	// Step #6:  set the total variable to be equal to the 
	//   subtotal plus the tax (from Step #5).
	//   Again - use variables not typed in numbers
  total = subtotal + tax;



	// Step #7:  output the values to the screen using cout statements.
	//   Make sure you use variables wherever possible
	//   in your cout statements
  cout << "1st item price: " << itemOne << endl;
  cout << "2nd item price: " << itemTwo << endl;
  cout << "3rd item price: " << itemThree << endl;
  cout << "4th item price: " << itemFour << endl;
  cout << "5th item price: " << itemFive << endl;
  cout << "Subtotal is: " << subtotal << endl;
  cout << "Tax is: " << tax << endl;
  cout << "Total is: " << total << endl;


  
	return 0;
}