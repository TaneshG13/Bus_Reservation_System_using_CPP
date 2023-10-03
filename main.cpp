#include<iostream>
using namespace std;

int p=0;
class bus{
  char pname[20], from[10], to[10], departure[5], arrival[5];
  int busnum, total_seats, s, avail;
public:
  void install();
  void available();
  void reserve();
}b[30];

void bus::install(){
  cout<<endl;
  cout<<"1.Bus Number: ";
  cin>>busnum;
  cout<<"2.From: ";
  cin>>from;
  cout<<"3.To: ";
  cin>>to;
  cout<<"4.Arrival: ";
  cin>>arrival;
  cout<<"5.Departure: ";
  cin>>departure;
  cout<<"6.Total seats: ";
  cin>>total_seats;
  avail=total_seats;
  p++;
  cout<<"\nBus Information Added!"<<endl;
  cout<<endl;
}

void bus::available(){
  cout<<endl;
  cout<<"Buses Available: "<<endl;
  cout<<endl;
  if(p==0){
    cout<<"Sorry! No Buses Available."<<endl;
    cout<<endl;
  }
  else{
    for(int i=0; i<p; i++){
    cout<<"Bus no: "<<b[i].busnum<<endl;
    cout<<"From: "<<b[i].from<<endl;
    cout<<"To: "<<b[i].to<<endl;
    cout<<"Arrival: "<<b[i].arrival<<endl;
    cout<<"Departure: "<<b[i].departure<<endl;
    cout<<"Seats Available: "<<b[i].avail<<endl;
    cout<<endl;
  }
  }
}

void bus::reserve(){
  int number;
  cout<<"Enter Bus Number: ";
  cin>>number;
  int n;
  for(n=0;n<p;n++){
    if(b[n].busnum==number){
      if(b[n].avail<=0){
        cout<<"Sorry!"<<endl;
        cout<<"no seats avalaible."<<endl;
        cout<<endl;
      }
      else{
        cout<<"Enter Passenger's name: ";
        cin>>pname;
        cout<<"Enter Number of Seats: ";
        cin>>s;
        cout<<endl;
        if(s>b[n].avail){
          cout<<"Sorry! we have only "<<b[n].avail<<" Seats Available."<<endl;
          cout<<endl;
        }
        else{
          cout<<"Your Reservation is Succsessful!"<<endl;
          cout<<endl;
          cout<<"Passenger's Name: "<<pname<<endl;
          cout<<"Number of Seats: "<<s<<endl;
          cout<<"Bus number: "<<b[n].busnum<<endl;
          cout<<"From: "<<b[n].from<<endl;
          cout<<"To: "<<b[n].to<<endl;
          cout<<"Arrival: "<<b[n].arrival<<endl;
          cout<<"Departure: "<<b[n].departure<<endl;
          cout<<endl;
          cout<<"Thank You!"<<endl;
          cout<<endl;
          b[n].avail=b[n].avail-s;
        }
    }
  }
  }
}

int main(){
  cout<<"Bus Resrevation System: "<<endl;
  cout<<endl;
  int R;
  while(R){
  cout<<"1.Install Bus Information.\n";
  cout<<"2.Buses Available.\n";
  cout<<"3.Book Ticket.\n";
  cout<<"4.Exit.\n";
  cout<<endl;

  int choice;
  cout<<"Enter your choice: ";
  cin>>choice;
  switch(choice){
    case 1:
      b[p].install();
      break;
    case 2: 
      b[p].available();
      break;
    case 3:
      b[p].reserve();
      break;
    case 4:
      exit(0);
  }
  }
}