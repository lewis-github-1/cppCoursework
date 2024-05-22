#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Task 1:  Declare the following variables:
	//		userInput	==> to hold the # of test scores
	//		sum  ==>	accumulator (set to 0)
	// 		ptr  ==> pointer that will point to array (set to nullptr for now)
	//		average  ==>  will hold the average of the scores
  int userInput = 0;
  double sum = 0;
  int* ptr = nullptr;
  double average = 0;

	// Task 2:  Prompt the user for the number of test scores
  cout << "How many test scores do you have? ";
  cin >> userInput;
  cout << endl;
  
  

	// Task 3:  Dynamically create the array using the number from the user
  ptr = new int[userInput];

	// Task 4:  Write a for loop that will ask the user for each value
	// and then add each value to the sum variable
  for (int i = 0; i < userInput; i++){
    cout << "Enter score number " << i + 1 << ": ";
    cin >> ptr[i];
    sum += ptr[i];
    cout << endl;
  }
    
	// Task 5:  Calculate and display the average, making sure
	// the average is a decimal value
  average = sum / userInput;
  cout << "The average test score is: " << fixed << setprecision(1) <<  average;

	// Task 6:  Delete the pointer and set it to nullptr or 0
  delete [] ptr;
  ptr = nullptr;

	return 0;
}


