# include <iostream>
using namespace std;

main(){

string countryName;
float ticketPrice;
float finalPrice;
float discountP;
while(true){
cout<<"Enter country's name :- ";
cin>>countryName;
cout<<"Enter ticket price :- ";
cin>>ticketPrice;

if(countryName=="pakistan"){
discountP=(ticketPrice*5)/100;
finalPrice=ticketPrice-discountP;
cout<<"Your final price is :- "<<finalPrice<<endl;
}
if(countryName=="ireland"){
discountP=(ticketPrice*10)/100;
finalPrice=ticketPrice-discountP;
cout<<"Your final price is :- "<<finalPrice<<endl;
}
if(countryName=="india"){
discountP=(ticketPrice*20)/100;
finalPrice=ticketPrice-discountP;
cout<<"Your final price is :- "<<finalPrice<<endl;
}
if(countryName=="england"){
discountP=(ticketPrice*30)/100;
finalPrice=ticketPrice-discountP;
cout<<"Your final price is :- "<<finalPrice<<endl;
}
if(countryName=="canada"){
discountP=(ticketPrice*45)/100;
finalPrice=ticketPrice-discountP;
cout<<"Your final price is :- "<<finalPrice<<endl;
}}
}