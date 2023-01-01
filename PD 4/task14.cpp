#include <iostream>
#include <windows.h>

using namespace std;

void displayMenu();
void gotoxy(int, int);

main()
{
    int choice;
    string name1, name2, temp;
    float p1, p2, p3, Aggregate1, Aggregate2;
    float matricMarks1, interMarks1, ecatMarks1, matricMarks2, interMarks2, ecatMarks2;
    while(true)
    {
        displayMenu();
        cout << "Enter your choice : ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "Enter the name of the Student : ";
            cin >> name1;
            cout << "Enter the matric marks : ";
            cin >> matricMarks1;
            cout << "Enter the intermediate marks : ";
            cin >> interMarks1;
            cout << "Enter the ecat marks : ";
            cin >> ecatMarks1;
            cout << "Enter f to continue" << endl;
            cin >> temp;
        }
        if(choice == 2)
        {
            cout << "Enter the name of the Student : ";
            cin >> name2;
            cout << "Enter the matric marks : ";
            cin >> matricMarks2;
            cout << "Enter the intermediate marks : ";
            cin >> interMarks2;
            cout << "Enter the ecat marks : ";
            cin >> ecatMarks2;
            cout << "Enter f to continue" << endl;
            cin >> temp;
        }
        if(choice == 3)
        {
            p1 = (matricMarks1 / 1100) * 30;
            p2 = (interMarks1 / 550) * 30;
            p3 = (ecatMarks1 / 400) * 40;
            Aggregate1 = p1 + p2 + p3;
            cout << "The student " << name1 << " has aggregate " << Aggregate1 << endl;
            cout << "Enter f to continue" << endl;
            cin >> temp;
        }
        if(choice == 4)
        {
            p1 = (matricMarks2 / 1100) * 30;
            p2 = (interMarks2 / 550) * 30;
            p3 = (ecatMarks2 / 400) * 40;
            Aggregate2 = p1 + p2 + p3;
            cout << "The student " << name2 << " has aggregate " << Aggregate2 << endl;
            cout << "Enter f to continue" << endl;
            cin >> temp;
        }
        if(choice == 5)
        {
            if(Aggregate1 > Aggregate2)
            {
                cout << name1 << " will have the first roll no." << endl;
            }
            if(Aggregate2 > Aggregate1)
            {
                cout << name2 << " will have the first roll no." << endl;
            }
            cout << "Press enter to continue" << endl;
            cin >> temp;
        }
    }   
}

void displayMenu()
{
    system("cls");
    gotoxy(20, 4);
    cout << "**********************";
    gotoxy(20, 5);
    cout << "*   Uet Lahore   *";
    gotoxy(20, 6);
    cout << "**********************";
    gotoxy(1, 11);
    cout << "Welcome to UET Administration Management System";
    cout << endl << endl << endl;
    cout << "Press 1 to enter the details of the first student" << endl;
    cout << "Press 2 to enter the details of the second student" << endl;
    cout << "Press 3 to calculate the aggregate of the first student" << endl;
    cout << "Press 4 to calculate the aggregate of the second student" << endl;
    cout << "Press 5 to display the student with Roll No. 1" << endl;

}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}