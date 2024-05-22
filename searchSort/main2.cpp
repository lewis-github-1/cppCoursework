#include <iostream>
#include <cstdlib>
using namespace std;

// prototpye for the linearSearch() function:
int linearSearch(const int [], int, int); // prototype for search function

int main() {
	// Lines 14 thru 27 have already been written for you 
	// This code creates an array of 6 integers to hold 
	// the winning values.  They are randomly generated
	// and use the linearSearch() function to see if the number
	// is already in the winners array before it adds it
	const int SIZE = 6;
	srand(time(0));
	int winners[SIZE];
	
	int ctr = 0;
	while(ctr < SIZE)
	{
		int nbr = (rand() % 69) + 1;  
		if(linearSearch(winners, SIZE, nbr) == -1)
		{
			winners[ctr] = nbr;
			ctr++;
		}
	} 

	// Task 1: Create an array to hold 6 whole numbers
  int lotteryArray[SIZE]; 
  int choice;
  
  // Task 2: Ask the user for the 6 numbers to go in this array,
	//		making sure that the user does not enter duplicate values
  cout << "Enter your lotter numbers between 1 and 70" << endl;
  cout << "Do not enter the same number twice." << endl << endl;
  for (int i = 0; i < 6; ++i) {
    cout << "Enter choice " << i + 1 << ": ";
    cin >> choice;
    while (linearSearch(lotteryArray, SIZE, choice) > -1){
    cout << "Enter choice " << i + 1 << ": ";
    cin >> choice;
    }

    lotteryArray[i] = choice;
  }
  
	// Task 3: Display all the winning numbers
  cout << endl;
  cout << "The winning numbers are:" << endl;
  cout << "============================" << endl;
  for (int l = 0; l < 6; ++l){
    cout << winners[l] << " ";
  }
  cout << endl << endl;
	// Task 4: Display all the user's numbers
  cout << "Your numbers are:" << endl;
  cout << "====================" << endl;
  for (int n = 0; n < 6; ++n){
    cout << lotteryArray[n] << " ";
  }
  cout << endl << endl;
	// Task 5: Check to see how many winning numbers the user has
	//			and how much money they won.
	//			Use a switch statement instead of if/else's
	//			6 numbers wins $1,000,000
	//			5 numbers wins $750,000
	//			4 numbers wins $100,000
	//			3 numbers wins $1,000
	//			2 or fewer does not win		
  int numberCounter = 0;
  for (int i = 0; i < 6; i++){
    if (linearSearch(winners, SIZE, lotteryArray[i]) != -1){
      numberCounter +=1;
    }
  }
  switch(numberCounter){
    case 6:
      cout << "You matched 6 numbers" << endl << "You win $1,000,000";
      break;
    case 5:
      cout << "You matched 5 numbers" << endl << "You win $750,000";
      break;
    case 4:
      cout << "You matched 4 numbers" << endl << "You win $100,000";
      break;
    case 3:
      cout << "You matched 3 numbers" << endl << "You win $1,000";
      break;
    default:
      cout << "You matched " << numberCounter << " number(s)." << endl << "You are not a winner";
  }
}

	//	EXTRA CREDIT (5 pts):  Move your code for displaying
	//		the values in the arrays to a function, calling it
	//		twice; once to display winners and 
	//		once to display users numbers
	
	


//***************************************************************
// The linearSearch looks for a value one element at a time     *
// It takes the array name, array size, and value searching     *
// for as parameters                                            *
// This code has already been written and does not need changed *
//***************************************************************
int linearSearch(const int arr[], int size, int value)
{
   int index = 0;       // int varaible to use as a subscript to search array
   int position = -1;   // int variable to record position of search value
   bool found = false;  // bool flag to indicate if the value was found

   while (index < size && !found)
   {
      if (arr[index] == value)  // Check to see if the value matches
      {
         found = true;         // If the value is found, set the flag
         position = index;     // If the value is found, reecord the value's subscript
      }
      index++;                  // If the value is not found, go to the next element
   }
   return position;              // If the position if found, or -1 if not found
}