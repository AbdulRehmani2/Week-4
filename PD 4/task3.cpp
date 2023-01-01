#include <iostream>
#include <windows.h>

using namespace std;

void printMaze();
void gotoxy(int x, int y);
void playerMove(int x, int y);

main()
{
  system("cls");
  printMaze();
  playerMove(15, 5);
  
}

void printMaze()
{
  cout << "#####################################" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl; 
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#####################################" << endl;
}

void playerMove(int x, int y)
{
  gotoxy(x-1, y);
  cout << " ";
  gotoxy(x, y);
  cout << "P";
  Sleep(200);
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}