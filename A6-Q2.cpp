#include<iostream>
using namespace std;
class employee{
      private:
      int id;
      double salary;

      public:
      employee(){

      }
      employee(int id,double salary):id(id),salary(salary){

      }
      void setId(int Id){
           this->id=Id;
      }
      int getId(){
            return this->id;
      }
      void setSalary(double salary){
            this->salary=salary;
      }
      double getSalary(){
            return this->salary;
      }
      void accept(){
            cout<<"enter id : ";
            cin>>this->id;
            cout<<"enter salary : ";
            cin>>this->salary;
      }
      void display(){
            cout<<"ID : "<<this->id<<" Salary : "<<this->salary<<" ";
      }
};
class manager: virtual public employee{
    protected:
    double bonus;

    public:
    manager(){

    }
    manager(int id ,double salary, double bonus):employee(id,salary),bonus(bonus){
        
    }
    void setBonus(double bonus){
         this->bonus=bonus;
    }
    double getBonus(){
      return this->bonus;
    }
    void accept(){
      employee::accept();
      cout<<"enter bonus : ";
      cin>>this->bonus;
    }
    void display(){
      employee::display();
      cout<<"bonus : "<<bonus<<" ";
    }
    
    protected:
    void acceptManager(){
      this->accept();
    }
    void displayManager(){
      this->display();
    }
};
class salesman:virtual public employee{
    protected:
    double commision;

    public:
    salesman(){

    }
    salesman(int id ,double salary, double commision):employee(id,salary),commision(commision){
        
    }
    void setcommision(double commision){
         this->commision=commision;
    }
    double getcommision(){
      return this->commision;
    }
    void accept(){
      employee::accept();
      cout<<"enter commision : ";
      cin>>this->commision;
    }
    void display(){
      employee::display();
      cout<<"commision : "<<commision<<" ";
    }
    
    protected:
    void acceptSalesman(){
      this->accept();
    }
    void displaySalesman(){
      this->display();
    }
};
class salesManager:public manager,public salesman{
    public:
    salesManager(){

    }
    salesManager(int id,double salary,double bonus,double commision):employee(id,salary),manager(id,salary,bonus),salesman(id,salary,commision){

    }
    void accept(){
      //employee::accept(); this is amguity. solved using virtual
      employee::accept();
      cout<<"enter bonus : ";
      double x;
      cin>>x;
      manager::setBonus(x);
      cout<<"enter commision : ";
      cin>>x;
      salesman::setcommision(x);
    }
    void display(){
      employee::display();
      double x=manager::getBonus();
      cout<<"Bonus : "<<x<<" ";
      double y=salesman::getcommision();
      cout<<"Commision : "<<y<<endl;
    }
};
int main(){
    salesManager s1(775,20000,5000,3000);
    s1.display();
    salesManager s2;
    s2.accept();
    s2.display();
}