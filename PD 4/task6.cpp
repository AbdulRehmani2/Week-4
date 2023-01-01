#include <iostream>
#include <windows.h>

using namespace std;

void a1();
void a2();
void w();
void i();
void s();
void gotoxy(int, int);


main()
{
  system("cls");
  a1();
  w();
  a2();
  i();
  s();
}

void a1()
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

void w()
{
  gotoxy(40, 8);
  cout << "##         ##   ";
  gotoxy(40, 9);
  cout << " ##  ##   ##      ";
  gotoxy(40, 10);
  cout << " ##  ##   ##      ";
  gotoxy(40, 11);
  cout << " ##  ##   ##     ";
  gotoxy(40, 12);
  cout << " ## ## ## ##          ";
  gotoxy(40, 13);
  cout << "  ##    ##        ";
}

void a2()
{
  gotoxy(40, 15);
  cout << "       #     ";
  gotoxy(40, 16);
  cout << "      ###    ";
  gotoxy(40, 17);
  cout << "    ### ###       ";
  gotoxy(40, 18);
  cout << "   #########         ";
  gotoxy(40, 19);
  cout << "  ##       ##     ";
  gotoxy(40, 20);
  cout << " ##         ##     ";
  
}


void i()
{
  gotoxy(40, 22);
  cout << "      ##      ";
  gotoxy(40, 23);
  cout << "      ##      ";
  gotoxy(40, 24);
  cout << "      ##      ";
  gotoxy(40, 25);
  cout << "      ##      ";
  gotoxy(40, 26);
  cout << "      ##      ";
  gotoxy(40, 27);
  cout << "      ##      ";
}

void s()
{
  gotoxy(40, 29);
  cout << "     ###            ";
  gotoxy(40, 30);
  cout << "   ##    ##         ";
  gotoxy(40, 31);
  cout << "    ##             ";
  gotoxy(40, 32);
  cout << "      ##           "; 
  gotoxy(40, 33);
  cout << "   #    ##          ";
  gotoxy(40, 34);
  cout << "     ###           ";
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



