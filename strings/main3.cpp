#include <iostream>
#include <string>
using namespace std;

// Prototypes
bool hasUpper(string);
bool hasLower(string);
bool hasDigit(string);
bool isValid(string);

// Main function
int main()
{
  // Variables
  string pw;

  // Print password rules and get password input
  cout << "Passwords must meet the following criteria:\n";
  cout << "- at least 6 characters in length\n";
  cout << "- contains at least one number\n";
  cout << "- contains at least one lowercase letter\n";
  cout << "- contains at least one uppercase letter\n\n";
  cout << "Enter the password: ";
  cin >> pw;
  
  // Call functions to validate password
  while(!isValid(pw))
    {
      cout << "\nEnter the password: ";
      cin >> pw;
    }
  
  return 0;
  
}

// hasUpper() function
bool hasUpper(string pw)
{
  bool result = false;
  for (int ctr = 0; ctr < pw.length(); ctr++)
    {
      char temp = pw.at(ctr);
      if (isupper(temp))
        result = true;
    }
  return result;
}

// hasLower() function
bool hasLower(string pw)
{
  bool result = false;
  for (int ctr = 0; ctr < pw.length(); ctr++)
    {
      char temp = pw.at(ctr);
      if (islower(temp))
        result = true;
    }
  return result;
}

// hasDigit() function
bool hasDigit(string pw)
{
  bool result = false;
  for (int ctr = 0; ctr < pw.length(); ctr++)
    {
      char temp = pw.at(ctr);
      if (isdigit(temp))
        result = true;
    }
  return result;
}

// hasLength() function
bool hasLength(string pw)
{
  return pw.length() > 5;
}

// isValid() function that calls hasUpper(), hasLower(), hasDigit(), and hasLength()
bool isValid(string pw)
{
  // bool var - store the result of calling all 4 methods
  bool valUpper = hasUpper(pw);
  bool valLower = hasLower(pw);
  bool valDigit = hasDigit(pw);
  bool valLength = hasLength(pw);
  bool valid = valUpper && valLower && valDigit && valLength;
  
  // if valid give a message, else another message
  if (valid)
  {
    cout << "The password is valid\n";
  }
  else
  {
    cout << "The password is invalid for the following reason(s):\n\n";
  }

  // if not upper, message
  if (valUpper == false)
  {
    cout << "You need an uppercase letter\n";
  }
  // if not lower, message
  if (valLower == false)
  {
    cout << "You need a lowercase letter\n";
  }
  // if not digit, message
  if (valDigit == false)
  {
    cout << "You need a digit\n";
  }

  // if not long enough, message
  if (valLength == false)
  {
    cout << "The password is not long enough\n";
  }

  // return bool variable
  return valid;
  
}







