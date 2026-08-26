#include <iostream>
using namespace std;
class boxVolume{
    private:
    int volume;
    public:
    //parameterless costructor
    boxVolume(void):volume(1){
       
    }
    //single parameter
    boxVolume(int value){
        volume=value*value*value;
    }
    //3 parameter
    boxVolume(int l,int b,int h){
        volume=l*b*h;
    }
    //getter 
    void getVolume(){
        cout<<"\n\nvolume of box is : "<<volume<<endl<<endl;
    }
};

int menu(){
    cout<<"1 for Volume with default values : \n";
    cout<<"2 for Volume with same values : \n";
    cout<<"3 for Volume with different values : \n";
    cout<<"4 for Exit : \n";
    int x;
    cin>>x;
    return x;
}
int main(){
    int choice;
    //do while
    do{
      choice=menu();
      switch(choice){
        case 1:{
            boxVolume b1;
            b1.getVolume();
            break;
        }
        case 2:{
            int value;
            cout<<"enter value : ";
            cin>>value;
            boxVolume b2(value);
            b2.getVolume();
            break;
        }
        case 3:{
            int l,br,h;
            cout<<"enter length , breadth , height respectively : "<<endl;
            cin>>l;
            cin>>br;
            cin>>h;
            boxVolume b3(l,br,h);
            b3.getVolume();
            break;
        }
      }
    }while(choice!=4);
    cout<<"thank you";
}