#include <iostream>
using namespace std;

void speedLimit(int input);
main()
{
int input;
while(true){

cout<<"Enter your Speed : ";
cin>>input;
speedLimit(input);

}

}


void speedLimit(int input){
if(input<100){
cout<<"Perfect. You are doing great!"<<endl;
}

if(input>100){
cout<<"Halt..... YOU WILL BE CHALLENGED"<<endl;
}

if(input==100){
cout<<"OK. But be careful!"<<endl;
}
}