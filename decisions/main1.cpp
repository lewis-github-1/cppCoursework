#include <iostream>
using namespace std;

int main()
{
  // Constants
  const double SECONDS_PER_MINUTE = 60.0;  // Seconds in a minute
  const double SECONDS_PER_HOUR = 3600.0;  // Seconds in an hour
  const double SECONDS_PER_DAY = 86400.0;  // Seconds in a day

  // Variable to hold the number of seconds
  int seconds;

  // Get a number of seconds
  cout << "Enter a number of seconds: ";
  cin >> seconds;

  // Display the number of minutes in that many seconds.
  if (seconds >= SECONDS_PER_MINUTE)
  {
    double minutes = seconds / SECONDS_PER_MINUTE;
    cout << "There are " << minutes
         << " minutes in " << seconds
         << " seconds. \n";
  }

  // Display the number of hours in that many seconds.
  if (seconds >= SECONDS_PER_HOUR)
  {
    double hours = seconds / SECONDS_PER_HOUR;
    cout << "There are " << hours
         << " hours in " << seconds
         << " seconds. \n";
  }
  
  // Display the number of days in that many seconds.
  if (seconds >= SECONDS_PER_DAY)
  {
    double days = seconds / SECONDS_PER_DAY;
    cout << "There are " << days
         << " days in " << seconds
         << " seconds. \n";
  }
  

  return 0;
 
}