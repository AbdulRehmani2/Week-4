#include <iostream>

using namespace std;

void showResult(int marks);

main()
{
  while(true)
  {
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    showResult(marks);
  }
}

void showResult(int marks)
{
  if(marks > 50)
  {
     cout << "Pass" << endl;
  }

  if(marks < 50)
  {
     cout << "Fail" << endl;
  }

  if(marks == 50)
  {
     cout << "Work harder" << endl;
  }
}