#include <iostream>
using namespace std;
class Time{
    private:
    int hour;
    int min;
    int second;

    public:
    Time(void):min(0),hour(0),second(0){

    }
    Time(int hour,int min,int second):min(min),hour(hour),second(second){

    }
    void getHour(){
        cout<<hour;
    }
    void getMin(){
        cout<<min<<endl;
    }
    void getSeconds(){
        cout<<second<<endl;
    }
    void setHour(){
        cout<<"enter hour : ";
        cin>>this->hour;
        cout<<endl;
    }
    void setMinute(){
        cout<<"enter min : ";
        cin>>this->min;
        cout<<endl;
    }
    void setSeconds(){
        cout<<"enter second : ";
        cin>>this->second;
        cout<<endl;
    }
    void acceptTime(){
        cout<<"enter Hours Minutes Seconds respectively : ";
        cin>>this->hour>>this->min>>this->second;
        cout<<endl;
    }
    void displayTime(){
        cout<<hour<< " : "<<min<<" : "<<second;
    }
};

int menu(){
    cout<<"1. Add time\n";
    cout<<"2. Display All time\n";
    cout<<"3. display only hrs of all time objects\n";
    cout<<"4. exit\n";
    int choice;
    cin>>choice;
    return choice;
}

int main(){
    int x;
    cout<<"enter no of objects you want to create : ";
    cin>>x;
    cout<<endl;
    //dynamically allocating memory
    Time* arr=new Time[x];
    
    int count=0;
    int c;
    while((c=menu())!=4){
        switch(c){
            case 1:
                if(count==x){
                    cout<<"No of object limit exceeds"<<endl;
                    break;
                }
                else{
                    // arr[count];
                    // arr[count].setHour();
                    // arr[count].setMinute();
                    // arr[count].setSeconds();
                    // count++;
                    arr[count].acceptTime();
                    count++;
                }
                break;
            case 2:
                for(int i=0; i<count; i++){
                    // arr[i].getHour();
                    // arr[i].getMin();
                    // arr[i].getSeconds();
                    // cout<<endl;
                    arr[i].displayTime();
                    cout<<endl;
                }
                break;
            case 3:
                for(int i=0; i<count; i++){
                    arr[i].getHour();
                    cout<<endl;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }

    //deallocating memory
    delete[] arr;
    arr=nullptr;

    cout<<"Thank you"<<endl;
}