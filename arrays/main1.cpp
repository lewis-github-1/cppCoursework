#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

// Function prototypes
void getSales(string[], int[], int);
int getTotal(int[], int);
int largestElement(int[], int);
int smallestElement(int[], int);

int main()
{
   // Constant for the number of salsa types
  const int SALSA_TYPES = 5;

  // Array of salsa types
  string names[SALSA_TYPES] = { "mild", "medium", "sweet", "hot", "zesty"};

  // Array of sales of each salsa type
  int sales[SALSA_TYPES];

  // Total number of jars sold
  int totalJarsSold;

  // Subscript of the salsa that sold the most
  int highSalesProduct;

  // Susbscript of the salsa that sold the least
  int lowSalesProduct;

  // Get the number of jars sold of eaqch type of salsa.
  getSales(names, sales, SALSA_TYPES);

  // Get total sales and high and low selling products.
  totalJarsSold = getTotal(sales, SALSA_TYPES);
  highSalesProduct = largestElement(sales, SALSA_TYPES);
  lowSalesProduct = smallestElement(sales, SALSA_TYPES);

  // Display the sales report header.
  cout << endl << endl;
  cout << "    Sales Sales Report \n\n";
  cout << "Name              Jars Sold \n";
  cout << "____________________________\n";

  // Display the name and jars sold of each type
  for (int salsaType = 0; salsaType < SALSA_TYPES; salsaType++)
    {
      cout << setw(6) << names[salsaType]
           << setw(21) << sales[salsaType]
           << endl;
    }

  // Display the total sales, highest seller, and lowest seller.
  cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
  cout << "High Seller: " << names[highSalesProduct] << endl;
  cout << "Low Seller : " << names[lowSalesProduct] << endl;

  
	return 0;
}


//-get Sales
//   - Gets the number of jars of each salsa ype sold from the user.
//      The names array parameter holds the names of the salsas,
//      and the sales array parameter will hold the numbers sold of
//      each corresponding type of salsa.
void getSales(string names[], int sales[], int size)
{
  for (int type = 0; type < size; type++)
    {
      // Get the number of jars sold
      cout << "How many jars of " << names[type]
           << " salsa did we sell last month? ";
      cin >> sales[type];
    
      // Validate the input.
      while (sales[type] < 0)
      {
        cout << "Jars sold must be 0 or more. Please re-enter: ";
        cin >> sales[type];
      }
    }
}

// -getTotal
//    -Calculates and returns the total of the values stored in the array passed to the        //     function.
int getTotal(int array[], int size)
{
  int total = 0;

  for (int pos = 0; pos < size; pos++)
    total += array[pos];  

  return total;
}

// - largestElement
//    - Finds and returns the subscript of the array position holding the largest
//      value in the array passed to the function.
int largestElement(int array[], int size)
{
  int indexOfLargest = 0;
  for (int pos = 1; pos < size; pos++)
  {
    if (array[pos] > array[indexOfLargest])
      indexOfLargest = pos;
  }
  return indexOfLargest;  
}

// - smallestElement
//    - Finds and returns the subscript of the array position holding the smallest
//      value in the array passed to the function.
int smallestElement(int array[], int size)
{
  int indexOfSmallest = 0;
  for (int pos = 1; pos < size; pos++)
  {
    if (array[pos] < array[indexOfSmallest])
      indexOfSmallest = pos;
  }
  return indexOfSmallest;  
}






