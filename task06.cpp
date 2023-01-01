#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void letterA();              
void letterW();
void letterA2();
void letterI();
void letterS();

main()
{
letterA();
 letterW();          
letterA2();
 letterI();
letterS();
 
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



void letterA()
{
gotoxy(5,5);cout<<"    ###                             "<<endl;
gotoxy(5,6);cout<<"  #     #                         "<<endl;
gotoxy(5,7);cout<<" #       #                         "<<endl;
gotoxy(5,8);cout<<"# # # # # #                        "<<endl;
gotoxy(5,9);cout<<"#         #                          "<<endl;
gotoxy(5,10);cout<<"#         #                          "<<endl;
gotoxy(5,11);cout<<"#         #                          "<<endl;
}

void letterW()
{
gotoxy(5,14);cout<<"##           ##                          "<<endl;
gotoxy(5,15);cout<<"##           ##                          "<<endl;
gotoxy(5,16);cout<<"##           ##                          "<<endl;
gotoxy(5,17);cout<<"##     #     ##                         "<<endl;
gotoxy(5,18);cout<<"##   #   #   ##                          "<<endl;
gotoxy(5,19);cout<<"## #       # ##                          "<<endl;
gotoxy(5,20);cout<<" ##         ##                    "<<endl;
}

void letterA2()
{
gotoxy(5,23);cout<<"    ###                             "<<endl;
gotoxy(5,24);cout<<"  #     #                         "<<endl;
gotoxy(5,25);cout<<" #       #                         "<<endl;
gotoxy(5,26);cout<<"# # # # # #                        "<<endl;
gotoxy(5,27);cout<<"#         #                          "<<endl;
gotoxy(5,28);cout<<"#         #                          "<<endl;
gotoxy(5,29);cout<<"#         #                          "<<endl;
}

void letterI()
{
gotoxy(5,32);cout<<"############                          "<<endl;
gotoxy(5,33);cout<<"     ##                                 "<<endl;
gotoxy(5,34);cout<<"     ##                                  "<<endl;
gotoxy(5,35);cout<<"     ##                        "<<endl;
gotoxy(5,36);cout<<"     ##                                  "<<endl;
gotoxy(5,37);cout<<"     ##                                  "<<endl;
gotoxy(5,38);cout<<"############                           "<<endl;
}
void letterS()
{
gotoxy(5,41);cout<<"   # # # #                          "<<endl;
gotoxy(5,42);cout<<"  #                     "<<endl;
gotoxy(5,43);cout<<" #                     "<<endl;
gotoxy(5,44);cout<<"  # # # #                     "<<endl;
gotoxy(5,45);cout<<"          #              "<<endl;
gotoxy(5,46);cout<<"           #              "<<endl;
gotoxy(5,47);cout<<"   # # # #                          "<<endl;
}



