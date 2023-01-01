#include <iostream>

using namespace std;

main()
{
  int holidays, wDays, pTime, hours, min;
  float temp1, temp2, diff;
  cout << "Enter the number of holidays : ";
  cin >> holidays;
  wDays = 365 - holidays;
  pTime = wDays*63 + holidays*127;
  diff = 30000 - pTime;
  if(diff > 0)
  {
    cout << "Tom will run away" << endl;
    temp1 = diff / 60;
    hours = temp1;
    temp2 = hours;
    min = (temp1 - temp2) * 60;
    cout << hours << " Hours " << min << " minutes less for play.";
  }
  
  if(diff <= 0)
  {
    cout << "Tom sleeps well" << endl;
    diff = -diff;
    temp1 = diff / 60;
    hours = temp1;
    temp2 = hours;
    min = (temp1 - temp2) * 60;
    cout << hours << " Hours " << min << " minutes more to play";
  }
}