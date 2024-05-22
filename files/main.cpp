#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//==============================================
	// Task 1: Write to file
	//==============================================
	// Create the file stream object variable
  ofstream outputFile;

	// Open the connection to the file
  outputFile.open("Demo.txt");

	// Write the numbers 1 thru 10 to the file
	cout << "\nWriting numbers to the file....\n";
  for (int ctr = 1; ctr < 11; ctr++)
  {
    outputFile << ctr << endl;    
  }
  
	// Close the file
  outputFile.close();

	//==============================================
	// Task 2: Read from file
	//==============================================
	// Create the file stream object variables
  ifstream inputFile;

	// Open the connection to file,
  inputFile.open("Demo.txt");

	int total = 0;  // accumlator variable
	int number;  // variable to hold value from reading file

	// Check to make sure the file opened ok
	// and then read the numbers from the file from
	// beginning to end.  As you read each number,
	// add it to the accumulator
	cout << "\nReading numbers from the file....\n";
  if(!inputFile)
  {
    cout << "Error opening file\n";
  }
  else
  {
    while(inputFile >> number)
      {
        total += number;
      }
  }
  
	// Close the file
inputFile.close();

	// Display the total
  cout << "The total is " << total << endl;
	
}