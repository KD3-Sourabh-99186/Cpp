#include<iostream>
using namespace std;
class Cylinder{
    private:
    int radius;
    int height;
    static double PI;

    public:
    Cylinder():radius(0),height(0){
       
    }

    Cylinder(int radius,int height):radius(radius),height(height){

    }
    void getRadius(void){
        cout<<"\nRadius is : "<<radius<<endl;
    }
    void setRadius(int r=1){
        radius=r;
    }
    void getHeight(void){
        cout<<"\nHeight is : "<<height<<endl;
    }
    void setHeight(int h=1){
        height=h;
    }
    void calculateVolume(){
        cout<<"\nVolume of cylinder is : "<<PI*radius*radius*height<<endl;
    }

};
double Cylinder::PI=3.14;

int main(){
    Cylinder c1;
    c1.calculateVolume();
    c1.getRadius();
    c1.setRadius(5);
    c1.getHeight();
    c1.setHeight(5);
    c1.calculateVolume();
}
