#include<iostream>
#include<conio.h>
using namespace std;

int noOfRikshow=0,noOfBus=0,noOfCar=0,noOfCycle=0,totAmount=0,totVehicle=0;

int menu();
void bus();
void cycle();
void rikshaw();
void showData();
void Delete();
void car();


int main(){
 int b; 
do  {
 switch(menu()){
   
    case 1:
    bus();
    break;
    case 2:
    cycle();
    break;
    case 3:
    rikshaw();
    break;
    case 4:
    showData();
    break;
    case 5:
    Delete();
    break;
    case 6:
    car();
    break;
    default:
    cout<<" You selected wrong choice"<<endl;
  }
  cout<<"To add more vehicle details please press 0  else any number to exit"<<endl;
  cout<<"Enter yout chioce"<<endl;
  cin>>b;
 }
 while(b==0);
 cout<<"Thank you please visit again"<<endl;
 getch();
}
int menu(){
    int ch=0;
     cout<<"****************************************"<<endl;
     cout<<" Press 1 For Bus and Charge is 100 Rs"<<endl;
     cout<<" Press 2 For Cycle and Charge is 20 Rs"<<endl;
     cout<<" Press 3 For Rikshaw and Charge is 50 Rs"<<endl;
     cout<<" Press 4 to see the vehicle record"<<endl;
     cout<<" Press 5 to delete the record"<<endl;
     cout<<" Press 6 For Bus and Charge is 70 Rs "<<endl;
     cout<<" Press 7 to exit"<<endl;

     cout<<"****************************************"<<endl;
     cout<<" Please enter your choice:-"<<endl;
     cin>>ch;
     return ch;
}

void bus(){
   noOfBus++;
   totAmount+=100;
   totVehicle++;
}
void car(){
   noOfCar++;
   totAmount+=70;
   totVehicle++;
}
void cycle(){
    noOfCycle++;
    totAmount+=20;
    totVehicle++;
}
void rikshaw(){
    noOfRikshow++;
    totAmount+=50;
    totVehicle++;
}
void showData(){
    cout<<"The no. of buses in the parking:-"<<noOfBus<<endl;
    cout<<"The no. of cycle in the parking:-"<<noOfCycle<<endl;
    cout<<"The no. of rikshaw in the parking:-"<<noOfRikshow<<endl;
    cout<<"The no. of vehicle in the parking:-"<<totVehicle<<endl;
    cout<<"the total collection from the parking is:-"<<totAmount<<endl;
}
void Delete(){
    noOfBus=0;
    noOfCycle=0;
    noOfRikshow=0;
    totAmount=0;
    totVehicle=0;
}



