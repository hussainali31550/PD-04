#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMaze();
void playerMoveX(int x, int y);
main()
{
	system("cls");
	printMaze();
        int x=7;
	int y=1;
	
	while(true)
{
	playerMoveX(x,y);
	if (x<42){
	x = x+1;}
        if(x==42){
	gotoxy(x-1,y);
	cout<<" ";
	gotoxy(x,y);
	cout<<" ";
	y=y+1;}
	if(y==20){y=1;} 
	}

	



}

void printMaze()
{

cout<<"    ############################################################################                      "<<endl;
cout<<"    ||                                     |%|                                ||                      "<<endl;
cout<<"    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                       "<<endl;
cout<<"    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                      "<<endl;
cout<<"    ||  |%|   %%%%%%%%   |%%|              |%|   %%%%%%%%   |%%|              ||                    "<<endl;
cout<<"    ||  |%|   %%%%%%%%          %   |%%|   |%|   %%%%%%%%          %   |%%|   ||                     "<<endl;
cout<<"    ||        %%%%%%%%%%%%%%%   %   |%%|   |%|   %%%%%%%%%%%%%%%   %   |%%|   ||                     "<<endl;
cout<<"    ||                          %   |%%|                           %   |%%|   ||                    "<<endl;
cout<<"    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%%%%%%%%%%%%%%%|   ||                   "<<endl;
cout<<"    ||     %%   |%|   |%%           |%%|      %%   |%|   |%%           |%%|   ||                      "<<endl;
cout<<"    ||     %%   |%|   |%%   |%%|    |%%|      %%   |%|   |%%   |%%|    |%%|   ||                      "<<endl;
cout<<"    ||     %%   |%|   |%%   |%%|    |%%|      %%   |%|   |%%   |%%|    |%%|   ||                         "<<endl;
cout<<"    ||          |%|   |%%                          |%|   |%%                  ||                        "<<endl;
cout<<"    ||          |%|   |%%%%%%%%%%%%%%%%|           |%|   |%%                  ||                        "<<endl;
cout<<"    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%    %%%%%  %%%|   ||                   "<<endl;
cout<<"    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%    %%%%%  %%%|   ||                   "<<endl;
cout<<"    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%    %%%%%  %%%|   ||                   "<<endl;
cout<<"    ||                   |%%|              |%|                                ||                      "<<endl;
cout<<"    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                      "<<endl;
cout<<"    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                      "<<endl;
cout<<"    ############################################################################                           "<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);


}

void playerMoveX(int x, int y)
{
	gotoxy(x-1,y);
	cout<<" ";
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);

}


