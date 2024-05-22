#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double CALS_PER_MINUTE = 3.9; // Constant for calories per minute
  
  double calories;  // Calories burned
  int minutes ;  // Number of minutes

  for(minutes = 10; minutes <= 30; minutes += 5)
    {
      calories = minutes * CALS_PER_MINUTE;
      cout << "After " << minutes << " minutes you burned " << calories << " calories.\n";
    }
  
	return 0;
}