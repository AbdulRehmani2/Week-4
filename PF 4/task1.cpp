#include <iostream>

using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);
void subtract(int number1, int number2);
void divide(int number1, int number2);

main()
{
  int number1;
  int number2;
  char operation;
  
  while(true)
  {
    cout << "Enter the first number : ";
    cin >> number1;
    cout << "Enter the second number : ";
    cin >> number2;
    cout << "Enter the operation (+, -. *. /) : ";
    cin >> operation;

    if(operation == '+')
    {
      add(number1, number2);
    }
    if(operation == '-')
    {
      subtract(number1, number2);
    }
    if(operation == '*')
    {
      product(number1, number2);
    }
    if(operation == '/')
    {
      divide(number1, number2);
    }
  }

  
  
}

void add(int number1, int number2)
{
  int sum = number1 + number2;
  cout << "The sum is : " << sum << endl;
}

void product(int number1, int number2)
{
  int product = number1 * number2;
  cout << "The product is : " << product << endl;
}

void subtract(int number1, int number2)
{
  int difference = number1 - number2;
  cout << "The difference is : " << difference << endl;
}

void divide(int number1, int number2)
{
  int divide = number1 / number2;
  cout << "The division is : " << divide << endl;
}