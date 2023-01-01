#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int, int);
void movePlayer(int x, int y);
main()
{
    int x = 5;
    int y = 2;
    system("cls");
    cout << "****************************************************"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "*                                                  *"<<endl;
    cout << "****************************************************"<<endl;
    while(true)
    {
        movePlayer(x, y);
        if(y < 21)
        {
            y++;
        }
        if(y == 21)
        {
            gotoxy(x, y-1);
            cout << " ";
            y = 2;
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void movePlayer(int x, int y)
{
    gotoxy(x, y-1);
    cout << " ";
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
}