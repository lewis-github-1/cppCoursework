#include <iomanip>
#include <iostream>
using namespace std;

// This program will ask the user for 3 test scores.
// It will then display all 5 test scores along
// with the average
// We will move the repititious code to a functions.
// So there will be a function to:
//		- prompt and validate user input
//		- display formatted output

int getScore(string);
void displayFormattedScore(string, int);

int main() 
{
	int test1, test2, test3;

	cout << "\nGetting user input:\n===================\n";

	test1 = getScore("Enter the score for test 1: "); // function call
	test2 = getScore("Enter the score for test 2: "); // function call
	test3 = getScore("Enter the score for test 3: "); // function call

	double average = (test1 + test2 + test3) / 3.0;

	cout << "\nOutputting values:\n==================\n";

  displayFormattedScore("Test 1: ", test1);
  displayFormattedScore("Test 2: ", test2);
  displayFormattedScore("Test 3: ", test3);  
  cout << setw(10) << left << "Average: " << setw(8) << right << fixed << setprecision(2) << average;

	return 0;
}

int getScore(string prompt) 
{
	int score;
	cout << prompt;
	cin >> score;

	while (score < 0 || score > 100) 
  {
		cout << "Invalid score...please re-enter: ";
		cin >> score;
	}
	return score;
}

void displayFormattedScore(string label, int score)
{
  cout << setw(10) << left << label << setw(8) << right << score << endl;
}