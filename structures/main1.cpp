#include <iostream>
#include <string>
using namespace std;

struct Student
{
  string name;
  int age;
  double gpa;
};

Student getData();
void displayStudent(string, Student);


int main() 
{
  Student s1 = {"John Doe", 18, 3.5};
  Student s2 = getData();
  Student s3 = getData();

  Student students[] = {s1, s2, s3};

  for (int i = 0; i < 3; i++)
    {
      string label = "Student " + to_string(i) + ": ";
      displayStudent(label, students[i]);
    }


  
 	return 0;
}

Student getData()
{
  Student temp;

  cout << "\nEnter the name: ";
  getline(cin, temp.name);

  cout << "Enter the age: ";
  cin >> temp.age;

  cout << "Enter the gpa: ";
  cin >> temp.gpa;
  cin.ignore();

  return temp;
}

void displayStudent(string label, Student s)
{
  cout << label << s.name << "\t" << s.age << "\t" << s.gpa << endl;

}






