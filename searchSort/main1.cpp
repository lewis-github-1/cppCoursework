// Chapter 8
// Programming Challenge 4: Charge Account Validation Modification
#include <iostream>
using namespace std;

// Function prototypes
int binarySearch(const int [], int, int);
void selectionSort(int [], int);

// Constant for the array size
const int SIZE = 18;

int main()
{
  // Array of account numbers
  int array[SIZE] =
  {
  5658845, 4520125, 7895122,
  8777541, 8451277, 1302850,
  8080152, 4562555, 5552012,
  5050552, 7825877, 1250255,
  1005231, 6545231, 3852085,
  7576651, 7881200, 4581002
  };

  int accountNumber;    // To hold an account number
  
  // Sort the list of valid accounts
  selectionSort(array, SIZE);

  // Get an account number from the user.
  cout << "\nPlease enter a 7-digit account number: ";
  cin >> accountNumber;

  // Search the array for the number and indicate
  // whether it is valid or not.
  if (binarySearch(array, SIZE, accountNumber))
    cout << "The number you entered is valid.\n";
  else
    cout << "The number you entered is invalid." << endl;
  
	return 0;
}

// ----------------------------------------------------------
// REMEMBER TO USE PROTOTYPES FOR THE FUNCTION(S) YOU USE!!!
// ----------------------------------------------------------

//************************************************************
// The selectionSort finds lowest and moves, then finds      *
// next lowest and moves, etc.                               *
// It takes the array name and array size as                 *
// parameters                                                *
// NOTE: this also needs the swap() function                 *
//************************************************************

void selectionSort(int array[], int SIZE)
{
   int minIndex, minValue;

   for (int start = 0; start < (SIZE - 1); start++)
   {
      minIndex = start;
      minValue = array[start];
      for (int index = start + 1; index < SIZE; index++)
      {
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      swap(array[minIndex], array[start]);
   }
}

//*************************************************************
// The binarySearch has to be in sort order first             *
// and then looks in the middle, splitting the array in half  *
// keeps splitting in half each time                          *
// It takes the array name, array size, and value searching   *
// for as parameters                                          *
//*************************************************************
int binarySearch(const int array[], int SIZE, int value)
{
   int first = 0,             // First array element
       last = SIZE - 1,       // Last array element
       middle,                // Mid point of search
       position = -1;         // Position of search value
   bool found = false;        // Flag

   while (!found && first <= last)
   {
      middle = (first + last) / 2;     // Calculate mid point
      if (array[middle] == value)      // If value is found at mid
      {
         found = true;
         position = middle;
      }
      else if (array[middle] > value)  // If value is in lower half
         last = middle - 1;
      else
         first = middle + 1;           // If value is in upper half
   }
   return found;
}











//************************************************************
// The linearSearch looks for a value one element at a time  *
// It takes the array name, array size, and value searching  *
// for as parameters                                         *
//************************************************************
int linearSearch(const int arr[], int size, int value)
{
   int index = 0;       // Used as a subscript to search array
   int position = -1;   // To record position of search value
   bool found = false;  // Flag to indicate if the value was found

   while (index < size && !found)
   {
      if (arr[index] == value)  // If the value is found
      {
         found = true;         // Set the flag
         position = index;     // Record the value's subscript
      }
      index++;                  // Go to the next element
   }
   return position;              // Return the position, or -1
}


//***************************************************
// The bubbleSort swaps 2 elements at a time        *
// It takes the array name and array size as        *
// parameters                                       *
// NOTE:  this also needs the swap() function       *
//***************************************************
void bubbleSort(int array[], int size)
{
   int maxElement;
   int index;

   for (maxElement = size - 1; maxElement > 0; maxElement--)
   {
      for (index = 0; index < maxElement; index++)
      {
         if (array[index] > array[index + 1])
         {
            swap(array[index], array[index + 1]);
         }
      }
   }
}
