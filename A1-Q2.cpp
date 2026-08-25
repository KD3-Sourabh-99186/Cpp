#include<iostream>
#include<string>
using namespace std;

class Date{
    private:
      string day;
      int month;
      int year;
    
    public:
      void initData(){
           day="sunday";
           month=1;
           year=2000;
      }

      void printDateOnConsole(){
        cout<<day<<" : "<<month<< " : "<<year<<endl;
      };

      void acceptDateFromConsole(){
           cout<<"enter day : ";
           cin>>day;
           cout<<"\nenter month : ";
           cin>>month;
           cout<<"\nenter year : ";
           cin>>year;
           cout<<endl;
      }

      bool isLeapYear(){
        if((year%4==0 && year%100!=0) || year%400==0){
            return 1;
        }
        else{
            return 0;
        }
      };

};

int main(){
    int x;
    Date D;
    D.initData();

    //creating menu 
    do{
    cout<<"For Printing date Enter 1\n";
    cout<<"For giving date Enter 2\n";
    cout<<"For checking is it leap year Enter 3\n";
    cout<<"To exit Enter 4\n";
    cin>>x;
    cout<<endl;

    switch(x){
        case 1:
           D.printDateOnConsole();
           break;
        case 2:
           D.acceptDateFromConsole();
           break;
        case 3:
            if(D.isLeapYear())
              cout<<"it is leap year"<<endl;
            else
              cout<<"it is not leap year"<<endl;
            break;
        default :
           cout<<"THANK YOU "<<endl;
        }
    }while(x!=4);
    return 0;
}