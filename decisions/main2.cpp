#include <iostream>
using namespace std;

int main()
{
	// Declare variables
  double height = 0;
  double weight = 0;
  
  // Ask for user's weight in pounds and height in inches
  cout << "Enter your weight in pounds: ";
  cin >> weight;
  cout << "Enter your height in inches: ";
  cin >> height;
  
  double bmi = weight * 703 / (height * height); // Declare BMI

  // Display the user's BMI
  cout << "Your BMI is " << bmi << endl;

  //Display BMI underweight, optimal weight, overweight message
  if (bmi < 18.5)
    cout << "You are underweight.";
  else if (bmi >= 18.5 and bmi <= 25.0)
    cout << "Congratulations! Your weight is optimal.";
  else
    cout << "You are overweight.";


}