#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void letterH();              
void letterU();
void letterS();
void letterS2();
void letterA();
void letterI();
void letterN();
main()
{
letterH();
 letterU();          
letterS();
 letterS2();
letterA();
 letterI();
letterN();
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



void letterH()
{
gotoxy(14,10);cout<<"##        ##                          "<<endl;
gotoxy(14,11);cout<<"##        ##                          "<<endl;
gotoxy(14,12);cout<<"##        ##                          "<<endl;
gotoxy(14,13);cout<<"############                         "<<endl;
gotoxy(14,14);cout<<"##        ##                          "<<endl;
gotoxy(14,15);cout<<"##        ##                          "<<endl;
gotoxy(14,16);cout<<"##        ##                          "<<endl;

}

void letterU()
{
gotoxy(30,10);cout<<"##        ##                          "<<endl;
gotoxy(30,11);cout<<"##        ##                          "<<endl;
gotoxy(30,12);cout<<"##        ##                          "<<endl;
gotoxy(30,13);cout<<"##        ##                         "<<endl;
gotoxy(30,14);cout<<"##        ##                          "<<endl;
gotoxy(30,15);cout<<"##        ##                          "<<endl;
gotoxy(30,16);cout<<" ##########                          "<<endl;
}

void letterS()
{
gotoxy(45,10);cout<<"   # # # #                          "<<endl;
gotoxy(45,11);cout<<"  #                     "<<endl;
gotoxy(45,12);cout<<" #                     "<<endl;
gotoxy(45,13);cout<<"  # # # #                     "<<endl;
gotoxy(45,14);cout<<"          #              "<<endl;
gotoxy(45,15);cout<<"           #              "<<endl;
gotoxy(45,16);cout<<"   # # # #                          "<<endl;
}

void letterS2()
{
gotoxy(60,10);cout<<"   # # # #                          "<<endl;
gotoxy(60,11);cout<<"  #                     "<<endl;
gotoxy(60,12);cout<<" #                     "<<endl;
gotoxy(60,13);cout<<"  # # # #                     "<<endl;
gotoxy(60,14);cout<<"          #              "<<endl;
gotoxy(60,15);cout<<"           #              "<<endl;
gotoxy(60,16);cout<<"   # # # #                          "<<endl;
}

void letterA()
{
gotoxy(75,10);cout<<"    ###                             "<<endl;
gotoxy(75,11);cout<<"  #     #                         "<<endl;
gotoxy(75,12);cout<<" #       #                         "<<endl;
gotoxy(75,13);cout<<"# # # # # #                        "<<endl;
gotoxy(75,14);cout<<"#         #                          "<<endl;
gotoxy(75,15);cout<<"#         #                          "<<endl;
gotoxy(75,16);cout<<"#         #                          "<<endl;
}


void letterI()
{
gotoxy(90,10);cout<<"############                          "<<endl;
gotoxy(90,11);cout<<"     ##                                 "<<endl;
gotoxy(90,12);cout<<"     ##                                  "<<endl;
gotoxy(90,13);cout<<"     ##                        "<<endl;
gotoxy(90,14);cout<<"     ##                                  "<<endl;
gotoxy(90,15);cout<<"     ##                                  "<<endl;
gotoxy(90,16);cout<<"############                           "<<endl;
}

void letterN()
{
gotoxy(105,10);cout<<"##       ##                          "<<endl;
gotoxy(105,11);cout<<"## #     ##                          "<<endl;
gotoxy(105,12);cout<<"##  #    ##                          "<<endl;
gotoxy(105,13);cout<<"##   #   ##                         "<<endl;
gotoxy(105,14);cout<<"##    #  ##                          "<<endl;
gotoxy(105,15);cout<<"##     # ##                          "<<endl;
gotoxy(105,16);cout<<"##       ##                 "<<endl;
}








