#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks );
void compareMarks(string namestd1,int ecatMarksStd1,string namestd2, int ecatMarksStd2);
main(){
int matricMarks,interMarks,ecatMarks,ecatMarksStd1,ecatMarksStd2;
string name,namestd1,namestd2;
printMenu();
cout <<"Enter name : ";
cin >>name;
cout <<"Enter Matric marks : ";
cin >>matricMarks;

cout <<"Enter Inter marks : ";
cin >>interMarks;

cout <<"Enter ECAT marks : ";
cin >>ecatMarks;
cout<<"Enter Student 1 name : ";
cin >> namestd1;

cout<<"Enter Student 2 name : ";
cin >> namestd2;

cout<<"Enter Student 1 ECAT Marks : ";
cin >> ecatMarksStd1;
cout<<"Enter Student 2 ECAT Marks : ";
cin >> ecatMarksStd2;
calculateAggregate(name,matricMarks,interMarks,ecatMarks );

compareMarks(namestd1,ecatMarksStd1,namestd2,ecatMarksStd2);
}
void printMenu(){



cout << "    *************************************************************************** " << endl;
cout << "    *                  UNIVERSITY ADMISSION MAIN MENU                         * " <<endl;
cout << "    *************************************************************************** " <<endl;
}
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks ){
int aggregate,Mp,Ep,Ip;
Mp=(matricMarks*30.0)/1100.0;
Ep=(ecatMarks*40.0)/400.0;
Ip=(interMarks*30.0)/550.0;
aggregate=Mp+Ep+Ip;
cout << name << "  Your Aggregate score is : " <<aggregate << endl;



}  
void compareMarks(string namestd1,int ecatMarksStd1,string namestd2, int ecatMarksStd2){
if(ecatMarksStd1>ecatMarksStd2){cout << "The first roll no will be Student 1 "<<endl;}
if(ecatMarksStd1<ecatMarksStd2){cout << "The first roll no will be Student 2 "<<endl;}


}

