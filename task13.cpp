#include <iostream>
using namespace std;
void catRest(int holidays,int workingdays,int workingdaysGame,int holidaysGame,int timeforGames,int difference);
main(){
int holidays,workingdays,workingdaysGame,holidaysGame,timeforGames,difference;
cout<<"Enter number of holidays : ";
cin>>holidays;
workingdays=365-holidays;
workingdaysGame=workingdays*63;
holidaysGame=holidays*127;
timeforGames=workingdaysGame+holidaysGame;
difference=30000-timeforGames;
cout<<"The difference from the Norm is : "<<difference<<endl;
catRest(holidays,workingdays,workingdaysGame,holidaysGame,timeforGames,difference);
}

void catRest(int holidays,int workingdays,int workingdaysGame,int holidaysGame,int timeforGames,int difference){
if(difference>0)
{cout<<"Cat need to Sleep"<<endl;
}
if(difference<0)
{cout<<"Cat Sleeps well"<<endl;
}
}