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
	int y=2;
	
	while(true)
{
	playerMoveX(x,y);
	if (y<19){
	y = y+1;}
        if(y==19){
	gotoxy(x,y-1);
	cout<<" ";
	gotoxy(x,y);
	cout<<" ";
	y=2;}
	

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
	gotoxy(x,y-1);
	cout<<" ";
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);

}