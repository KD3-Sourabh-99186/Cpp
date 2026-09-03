#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inches;

    public:
    Distance():feet(0),inches(0){

    }

    Distance(int feet,int inches):feet(feet),inches(inches){
        if(this->inches>=12){
            this->feet=this->feet+this->inches/12;
            this->inches=this->inches%12;
        }
    }

    Distance operator +(Distance d){
        Distance temp;

        temp.feet=this->feet+d.feet;
        temp.inches=this->inches+d.inches;

        if(temp.inches>=12){
            temp.feet=temp.feet+temp.inches/12;
            temp.inches=temp.inches%12;
        }

        return temp;
    }

    Distance operator ++(){
        this->inches++;

        if(this->inches>=12){
            this->feet++;
            this->inches=0;
        }

        return *this;
    }

    friend Distance operator --(Distance &d);

    friend ostream& operator <<(ostream &out,Distance d);
    friend istream& operator >>(istream &in,Distance &d);
};

Distance operator --(Distance &d){
    if(d.inches>0){
        d.inches--;
    }
    else if(d.feet>0){
        d.feet--;
        d.inches=11;
    }

    return d;
}

ostream& operator <<(ostream &out,Distance d){
    out<<d.feet<<" feet "<<d.inches<<" inches";
    return out;
}

istream& operator >>(istream &in,Distance &d){
    cout<<"Enter feet : ";
    in>>d.feet;

    cout<<"Enter inches : ";
    in>>d.inches;

    if(d.inches>=12){
        d.feet=d.feet+d.inches/12;
        d.inches=d.inches%12;
    }

    return in;
}

int main(){

    Distance d1,d2;

    cout<<"Enter first distance : "<<endl;
    cin>>d1;

    cout<<"Enter second distance : "<<endl;
    cin>>d2;

    cout<<"\nFirst distance : "<<d1<<endl;
    cout<<"Second distance : "<<d2<<endl;

    Distance d3=d1+d2;

    cout<<"\nAddition : "<<d3<<endl;

    ++d1;

    cout<<"After incrementing first distance : "<<d1<<endl;

    --d2;

    cout<<"After decrementing second distance : "<<d2<<endl;
}
