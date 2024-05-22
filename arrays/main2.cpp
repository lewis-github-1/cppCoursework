#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
// Declare list
int testScores[4][4] = 
{
  {85, 75, 98, 99},
  {90, 78, 93, 95},
  {94, 80, 89, 93},
  {98, 72, 87, 94},
};

// Variables
  int grandTotal = 0;
  int row = 0;
  int rowCount = 0;
  int columnCount = 0;
  int column = 0;
  float sumAvg = 0;
    
  // Display header for row
  cout << "Row          Total      Average\n" ;
  cout << "===================================\n";
  
  for (int r = 0; r < 4; r++)     // loop for each row
    {
      for (int c = 0; c < 4; c++) // loop through each column in that row
        {
          row += testScores[r][c];
          grandTotal += testScores[r][c];          
        }      
      float avg = row / 4.00;    //Variable for row average
      rowCount += 1;             // Counter for row
      sumAvg += avg;             // Accumulator for the sum of the averages
      
      // Display each row with values
      cout << "Row " << rowCount << setw(12) << row << setw(13) 
        << setprecision(2) << fixed << avg << endl;
      
      row = 0;               // Reset the row value
    }

  // Display header for columns
  cout << "\n \nTest         Total      Average\n" ;
  cout << "===================================\n";

// Get the total of each column
  for (int c = 0; c < 4; c++)       // loop for each column
    {
      for (int r = 0; r < 4; r++)   // loop through each row in that column
        {
          column += testScores[r][c];
        }
      float avg = column / 4.00;    // Variable for column average
      columnCount += 1;             // Counter for column
      sumAvg += avg;                // Accumulator for the sum of the averages
      
      // Display each column with values
      cout << "Test " << columnCount << setw(11) << column << setw(13) 
        << setprecision(2) << fixed << avg << endl;
      
      column = 0;                      // Reset the column value
    }
  
    float overallAvg = sumAvg / 8;     // Variable to take the average of the averages
  
    // Display grand total
    cout << "\nGrand Totals:\n" ;
    cout << "===================================\n";
    cout << "The grand total is " << grandTotal << endl;
    cout << "The overall average is " << overallAvg;
    cout << endl << endl;

  return 0;
}














