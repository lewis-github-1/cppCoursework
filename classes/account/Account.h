#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
using namespace std;

class Account
{
private:
  string firstName;
  string lastName;
  double balance;

public:
  // Constructors
  Account(string, string, double);
  
  // Mutators
  void setFirstName(string);
  void setLastName(string);
  void setBalance(double);
  void deposit(double);
  void withdraw(double);

  // Accessors
  string getFullName() const;
  double getBalance() const;
  
};

#endif