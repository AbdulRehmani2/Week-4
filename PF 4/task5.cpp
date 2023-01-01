#include <iostream>

using namespace std;

void calculateBill(string day, float amount);

main()
{
  string day;
  float amount;
  cout << "Enter the day : ";
  cin >> day;
  cout << "Enter the total purchase amount : ";
  cin >> amount;
  calculateBill(day, amount);
}

void calculateBill(string day, float amount)
{
  if(day == "sunday")
  {
    amount = amount - amount*0.1;
  }
  cout << "The total payable amount is : " << amount;
}