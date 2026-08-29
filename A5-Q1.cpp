#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;

    public:
    Date(void):day(0),month(0),year(0){
        //acceptDate();
    }
    Date(int day,int month,int year):day(day),month(month),year(year){

    }

    void printDate(){
        cout<<day<<" : "<<month<< " : "<<year<<endl;
    }
    void acceptDate(){
        //cout<<"enter date"<<endl;
        cout<<"day : ";
        cin>>this->day;
        cout<<"month : ";
        cin>>this->month;
        cout<<"year : ";
        cin>>this->year;
        cout<<endl;
    }

};

class Person{
    private:
    string name;
    string address;
    Date birthDate;

    public:
    Person():name(""),address(""){
        acceptRecord();
    }
    Person(string name,string address,int day,int month,int year ):name(name),address(address),birthDate(day,month,year){

    }
    void acceptRecord(){
        cout<<"enter name : ";
        cin>>this->name;
        cout<<"enter address : ";
        cin>>this->address;
        cout <<"enter DOB : "<<endl;
        birthDate.acceptDate();
    }
    void printRecord(){
        cout<<"name : "<<name<<endl;
        cout<<"address : "<<address<<endl;
        cout<<"birth Date : ";
        birthDate.printDate();
    }
};

class student{
    private:
    int id;
    int marks;
    int course;
    Date joinDate;
    Date endDate;

    public:
    student():id(0),marks(0),course(0){
        acceptRecord();
    }
    student(int id,int marks,int course,int day1,int month1,int year1,int day2,int month2,int year2):id(id),marks(marks),course(course),joinDate(day1,month1,year1),endDate(day2,month2,year2){

    }
    void printDetails(){
        cout<<"id : "<<id<<endl;
        cout<<"marks : "<<marks<<endl;
        cout<<"course : "<<course<<endl;
        joinDate.printDate();
        endDate.printDate();
    }
    void acceptRecord(){
        cout<<"enter id : ";
        cin>>this->id;
        cout<<"enter marks : ";
        cin>>this->marks;
        cout<<"enter course : ";
        cin>>this->course;
        cout <<"enter join date "<<endl;
        joinDate.acceptDate();
        cout <<"enter end date "<<endl;
        endDate.acceptDate();
    }

    void printRecord(){
        cout<<"id : "<<id<<endl;
        cout<<"marks : "<<marks<<endl;
        cout<<"course : "<<course<<endl;
        cout <<"join date : ";
        joinDate.printDate();
        cout <<"end date : ";
        endDate.printDate();
    }
};

int main(){
    student s1;
    s1.printRecord();
    student s2(1234,55,04,2,12,2003,1,8,2024);
    s2.printRecord();
    Person p1;
    p1.printRecord();
    Person p2("sourabh","indore",02,12,2003);
    p2.printRecord();
}