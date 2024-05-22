#include <iostream>
#include <cstring>
using namespace std;

//Function prototype
void backward(char *);

int main() 
{
  // Define an array to hold input
  const int SIZE = 80;
  char input[SIZE];

  // Get a string from the user.
  cout << "Enter a string and I will display it backward:\n";
  cin.getline(input, SIZE);

  // Display it backward.
  backward(input);
  return 0;
}

// The backward function accepts a pointer to a 
// C-string and displays that string backward.

void backward(char* str)
{
  // Get the subscript of the last character
  // in the string.
  int last = strlen(str) - 1;

  // Work backward through the string, displaying 
  // each character from the last to the first.
  for (int index = last; index >= 0; index--)
    {
    cout << str[index];
    }

  //End the line.
  cout << endl;
}





