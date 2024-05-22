#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
  Account john("John", "Doe", 100);
  cout << "John Doe has a beginning balance of $100\n\n";
  cout << "Enter the amount to deposit: ";
  double temp = 0;
  cin >> temp;
  john.deposit(temp);
  cout << "John Doe now has a balance of $" << john.getBalance() << endl;
  
  cout << "\nEnter the amount to withdraw: ";
  temp = 0;
  cin >> temp;
  john.withdraw(temp);
  cout << "John Doe now has a balance of $" << john.getBalance() << endl << endl;
  
  cout << "The account holder is " <<  john.getFullName() << "\nThe balance is $" << john.getBalance();

  
	return 0;
}






