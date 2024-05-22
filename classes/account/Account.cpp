#include "Account.h"
#include <string>
using namespace std;

// Constructors
Account::Account(string fn, string ln, double bal)
{
  firstName = fn;
  lastName = ln;
  balance = bal;
}

// Mutators
void Account::setFirstName(string fn)
{
  firstName = fn;
}

void Account::setLastName(string ln)
{
  lastName = ln;
}

void Account::setBalance(double bal)
{
  balance = bal;
}

void Account::deposit(double dep)
{
  if (dep > 0)
    balance += dep;
}

void Account::withdraw(double with)
{
  if (with > 0 && with < balance)
    balance -= with;
}

// Accessors
string Account::getFullName() const
{
  return firstName + " " + lastName;
}
double Account::getBalance() const
{
  return balance;
}




