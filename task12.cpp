#include <iostream>
using namespace std;

void fullPrice(float redRose,float whiteRose,float tulip,float redRosePrice,float whiteRosePrice,float tulipPrice,float totalPrice,float discount,float finalPrice);
main()
{
float redRose,whiteRose,tulip,redRosePrice,whiteRosePrice,tulipPrice,totalPrice,discount,finalPrice;
while(true){

cout<<"Enter number of Red Rose : ";
cin>>redRose;
cout<<"Enter number of White Rose : ";
cin>>whiteRose;
cout<<"Enter number of Tulips : ";
cin>>tulip;
redRosePrice=redRose*2;
whiteRosePrice=whiteRose*4.10;
tulipPrice=tulip*2.50;
totalPrice=redRosePrice+whiteRosePrice+tulipPrice;
cout<<"Original Price is : "<<totalPrice<<endl;

fullPrice(redRose,whiteRose,tulip,redRosePrice,whiteRosePrice,tulipPrice,totalPrice,discount,finalPrice);
}

}


void fullPrice(float redRose,float whiteRose,float tulip,float redRosePrice,float whiteRosePrice,float tulipPrice,float totalPrice,float discount,float finalPrice)
{

if(totalPrice>200){
discount=(totalPrice*20)/100;
finalPrice=totalPrice-discount;
cout<<"Payable Price is : "<<finalPrice<<endl;
}}