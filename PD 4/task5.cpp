#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int, int);

void a();
void b();
void d();
void u();
void l();
void r();
void e();
void h();
void m();
void n();

main()
{
  system("cls");
  a();
  b();
  d();
  u();
  l();
  r();
  e();
  h();
  m();
  a();
  n();
}

void a()
{
  gotoxy(40, 1);
  cout << "       #     ";
  gotoxy(40, 2);
  cout << "      ###    ";
  gotoxy(40, 3);
  cout << "    ### ###       ";
  gotoxy(40, 4);
  cout << "   #########         ";
  gotoxy(40, 5);
  cout << "  ##       ##     ";
  gotoxy(40, 6);
  cout << " ##         ##     ";
  
}

void b()
{
  gotoxy(40, 8);
  cout << "#####            ";
  gotoxy(40, 9);
  cout << "##   ##         ";
  gotoxy(40, 10);
  cout << "##  ##           ";
  gotoxy(40, 11);
  cout << "####            ";
  gotoxy(40, 12);
  cout << "##  ##           ";
  gotoxy(40, 13);  
  cout << "####           ";
}

void d()
{
  gotoxy(40, 15);
  cout << "#####            "<<endl; 
  gotoxy(40, 16); 
  cout << "##   ##         "<<endl;
  gotoxy(40, 17); 
  cout << "##    ##        "<<endl;
  gotoxy(40, 18);
  cout << "##     ##       "<<endl;
  gotoxy(40, 19);
  cout << "##    ##        "<<endl;
  gotoxy(40, 20);
  cout << "######            ";
}

void u()
{
  gotoxy(40, 22);
  cout << "##     ##       "<<endl;
  gotoxy(40, 23);
  cout << "##     ##        "<<endl;
  gotoxy(40, 24);
  cout << "##     ##        "<<endl;
  gotoxy(40, 25);
  cout << "##     ##        "<<endl;
  gotoxy(40, 26);
  cout << " #     #       "<<endl;
  gotoxy(40, 27);
  cout << "  #####           ";

}

void l()
{
  gotoxy(40, 29);
  cout << "##             "<<endl;
  gotoxy(40, 30);
  cout << "##             "<<endl;
  gotoxy(40, 31);
  cout << "##            "<<endl;
  gotoxy(40, 32);
  cout << "##             "<<endl;
  gotoxy(40, 33);
  cout << "##             "<<endl;
  gotoxy(40, 34);
  cout << "#########            ";

}

void r()
{
  gotoxy(40, 36);
  cout << "####             "<<endl;
  gotoxy(40, 37);
  cout << "##  #           "<<endl;
  gotoxy(40, 38);
  cout << "##  #           "<<endl;
  gotoxy(40, 39);
  cout << "####             "<<endl;
  gotoxy(40, 40);
  cout << "##  #           "<<endl;
  gotoxy(40, 41);
  cout << "##   ##          ";

}

void e()
{
  gotoxy(40, 43);
  cout << "########             "<<endl;
  gotoxy(40, 44);
  cout << "##             "<<endl;
  gotoxy(40, 45);
  cout << "##             "<<endl;
  gotoxy(40, 46);
  cout << "########             "<<endl;
  gotoxy(40, 47);
  cout << "##             "<<endl;
  gotoxy(40, 48);
  cout << "########             ";
}

void h()
{
  gotoxy(40, 50);
  cout << "##   ##          "<<endl;
  gotoxy(40, 51);
  cout << "##   ##          "<<endl;
  gotoxy(40, 52);
  cout << "#######             "<<endl;
  gotoxy(40, 53);
  cout << "#######             "<<endl;
  gotoxy(40, 54);
  cout << "##   ##          "<<endl;
  gotoxy(40, 55);
  cout << "##   ##          ";

}

void m()
{
  gotoxy(40, 57);
  cout << "##     ##        "<<endl;
  gotoxy(40, 58);
  cout << "###   ###          "<<endl;
  gotoxy(40, 59);
  cout << "## # # ##          "<<endl;
  gotoxy(40, 60);
  cout << "##  #  ##         "<<endl;
  gotoxy(40, 61);
  cout << "##     ##        "<<endl;
  gotoxy(40, 62);
  cout << "##     ##       ";

}

void n()
{
  gotoxy(40, 64);
  cout << "##    ##         "<<endl;
  gotoxy(40, 65);
  cout << "###   ##          "<<endl;
  gotoxy(40, 66);
  cout << "## #  ##          "<<endl;
  gotoxy(40, 67);
  cout << "##  # ##         "<<endl;
  gotoxy(40, 68);
  cout << "##   ###         "<<endl;
  gotoxy(40, 69);
  cout << "##    ##         ";
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

