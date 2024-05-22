#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string stringDemo = "123abcdEF";
	cout << "\n\nThe string is " << stringDemo << endl << endl;

  int ctDigits = 0;
  int ctUpper = 0;
  int ctLower = 0;

  for (int ctr = 0; ctr < stringDemo.length(); ctr ++)
    {
      char temp = stringDemo[ctr];
      if (isdigit(temp))
        ctDigits++;
      else if (islower(temp))
        ctLower++;
      else if (isupper(temp))
        ctUpper++;
      
    }

  cout << "There are " << ctDigits << " digits.\n";
  cout << "There are " << ctLower << " lower case letters.\n";
  cout << "There are " << ctUpper << " upper case letters.\n";

	return 0;
}










