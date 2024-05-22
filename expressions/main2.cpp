#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const float adult_ticket = 10.00;
  const float child_ticket = 6.00;
  int adults;
  int children;
  float grossProfit;
  float netProfit;
  float paidDistributor;
  string movieName;
  
// Ask what the name of the movie is.
  cout << "Enter the name of the movie: ";
  getline(cin, movieName);
// Ask how many adult tickets were sold.
  cout << "Enter the number of adult tickets sold: ";    
  cin >> adults;
// Ask how many child tickets were sold.
  cout << "Enter the number of child tickets sold: ";    
  cin >> children;
// Do (number of adult tickets x $10.00) + (number of child tickets x $6.00) to get the gross box office profit.
  grossProfit = (adults * 10.00) + (children * 6.00);
// Multiply the gross box office profit by .2 to get net box office profit.
  netProfit = grossProfit * .20;
// Multiply the gross box office profit by .8 to get the amount paid to the distributor.
  paidDistributor = grossProfit * .80;
// Display movie name, adult tickets sold, child tickets sold, gross box office profit, net box office profit, and amount paid to distibutor.
  cout << setprecision(2) << fixed << showpoint;
  cout << "\n" <<"Revenue Report" << endl;
  cout << "===================" << endl;
  cout << "Movie Name: " << setw(29) << movieName << endl;
  cout << "Adult tickets sold: " << setw(21) << adults << endl;
  cout << "Child tickets sold: " << setw(21) << children << endl;
  cout << "Gross box office profit: " << setw(10) << "$" << grossProfit << endl;
  cout << "Net box office profit: " << setw(13) << "$" << netProfit << endl;
  cout << "Amount paid to distributors: " << setw(6) << "$" << paidDistributor;

	return 0;
}

// Instructions:
// - Refer to your planning practice assignment
// - Type the steps from your pseudo-code as comments in the main()
// - Fill in the appropriate code
// - Be sure to test your code 
// - Be sure to test with a movie name that has a space in it, 
//   	such as Star Wars