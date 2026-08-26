#include<iostream>
using namespace std;
class tollbooth{
    private:
    unsigned int cars;
    double amount;

    public:
    //constructor
    tollbooth(void):cars(0),amount(0.0){

    }
    void payingCar(){
        cars++;
        amount+=0.5;
    }
    void nopayCar(){
        cars++;
    }
    //printing details
    void printOnConsole(){
        cout<<"Total cars passed : "<<cars<<endl;
        cout<<"Total amount : "<<amount<<endl;
        cout<<"Paying cars : "<<amount/0.5<<endl;
        cout<<"non paying cars : "<<((cars*0.5)-amount)/0.5<<endl;
    }
};

int menu(){
    cout<<"1. Paying Car"<<endl;
    cout<<"2. non paying car"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. Exit "<<endl;
    int x;
    cin>>x;
    return x;
}
int main(){
    tollbooth t;
    int choice;
    while((choice =menu())!=4){
        switch(choice){
            case 1:
              t.payingCar();
              break;
            case 2:
              t.nopayCar();
              break;
            case 3:
              t.printOnConsole();
        }
    }
    cout<<"thank you";
}