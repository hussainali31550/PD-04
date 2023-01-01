#include <iostream>
using namespace std;

void reverse(string input);
main()
{
string input;
while(true){

cout<<"Enter your string : ";
cin>>input;
reverse(input);

}

}


void reverse(string input){
if(input=="true"){
cout<<"                     False"<<endl;
}

if(input=="false"){
cout<<"                     True"<<endl;
}
}