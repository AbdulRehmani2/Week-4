#include <iostream>

using namespace std;

void challan(int);

main()
{
  int speed;
  cout << "Enter the speed of the car : ";
  cin >> speed;
  challan(speed);
}

void challan(int speed)
{
  if(speed >= 100)
  {
    cout << "HALT...YOU WILL BE CHALLANGED";
  }
  if(speed < 100)
  {
    cout << "You are going good";
  }
}