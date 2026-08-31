#include<iostream>
using namespace std;
class product{
    protected:
    int id;
    string title;
    float price;
    float sellprice;
    public:
    product(void):id(0),title(""),price(0){

    }
    product(int id,string title,float price):id(id),title(title),price(price){

    }
    virtual void acceptRecord(){
        
    }
    virtual float sellAmount()=0;
};
class book:public product{
    private:
    string author;
    public:
    book():author(""){

    }
    book(string author):author(author){

    }
    void acceptRecord(){
        cout<<"enter id ";
        cin>>this->id;
        cout<<endl;
        cout<<"enter title ";
        cin>>this->title;
        cout<<endl;
        cout<<"enter price ";
        cin>>this->price;
        cout<<endl;
        cout<<"enter author name : ";
        cin>>this->author;
        cout<<endl;
    }
    float sellAmount(){
        this->sellprice=price*0.9;
        return sellprice;
    }
};
class tape:public product{
    private:
    string artist;
    public:
    tape():artist(""){

    }
    tape(string author):artist(artist){

    }
    void acceptRecord(){
        cout<<"enter id ";
        cin>>this->id;
        cout<<endl;
        cout<<"enter title ";
        cin>>this->title;
        cout<<endl;
        cout<<"enter price ";
        cin>>this->price;
        cout<<endl;
        cout<<"enter artist name : ";
        cin>>this->artist;
        cout<<endl;
    }
    float sellAmount(){
        this->sellprice=price*0.95;
        return sellprice;
    }
};

int menu(){
    cout<<"enter choice "<<endl;
    cout<<"1. Book"<<endl;
    cout<<"2. Tape"<<endl;
    int x;
    cin>>x;
    return x;
}
int main(){
    product *ptr[3];
    int choice;
    //purchase
    for(int i=0;i<3; i++){
        choice=menu();
        switch(choice){
            case 1:
              ptr[i]=new book;
              ptr[i]->acceptRecord();
              break;
            case 2:
              ptr[i]=new tape;
              ptr[i]->acceptRecord();
              break;
            default:
              cout<<"enter valid no "<<endl;
        }
    }
    //calculate and return ammount
    int amount=0;
    for(int i=0;i<3;i++){
        amount+=ptr[i]->sellAmount();
    }
    cout<<"total amount is : "<<amount<<endl;
    //deallocation
    for(int i=0;i<3;i++){
        delete ptr[i];
        ptr[i]=nullptr;
    }
}