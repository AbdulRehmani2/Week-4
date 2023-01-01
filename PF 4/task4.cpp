#include <iostream>

using namespace std;

void isEven(int number);

main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;
  isEven(number);
}

void isEven(int number)
{
  if(number % 2 == 0)
  {
     cout << "The number is even";
  }
  if(number % 2 != 0)
  {
     cout << "The number is odd";
  }
}