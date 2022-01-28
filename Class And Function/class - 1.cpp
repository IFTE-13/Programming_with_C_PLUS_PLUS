#include<iostream>
#include<string>
using namespace std;


class Emplyoee
{
private:
   int employeeID;
   string name, designation;
   float salary;

public:
    void getEmployee( ){
        cout<<"Enter the emp ID:";
        cin>>employeeID;
        cout<<"Enter the emp Name:";
        cin>>name;
        cout<<"Enter the emp Desig:";
        cin>>designation;
        cout<<"Enter the emp Salary:";
        cin>>salary;
    }
    void showEmployee( ) {
         cout<< "Id is: "<<employeeID<<endl;
        cout<< "Name is: "<<name<<endl;
        cout<<"Desi Is: "<< designation<<endl;
        cout<<"Salary is: "<<salary<<endl;


    }

    void showOrder(Emplyoee e2, Emplyoee e3)
    {
        cout<<salary<<endl;
        cout<<e2.salary<<endl;
        cout<<e3.salary<<endl;

        if(salary > e2.salary && salary > e3.salary)
        {
            if(e2.salary > e3.salary)
            {
                cout<<designation <<" "<< e2.designation <<" "<< e3.designation<<endl;
            }
            else
            {
                cout<<designation <<" "<< e3.designation <<" "<< e2.designation<<endl;
            }

        }

        else if(e2.salary > salary && e2.salary > e3.salary)
        {
            if(e3.salary > salary)
            {
                cout<<e2.designation <<" "<< e3.designation <<" "<< designation<<endl;
            }
            else
            {
                cout<<e2.designation <<" "<< designation <<" "<< e3.designation<<endl;
            }

        }
          else if(e3.salary > salary && e3.salary > e2.salary)
        {
            if(e2.salary > salary)
            {
                cout<<e3.designation <<" "<< e2.designation <<" "<< designation<<endl;
            }
            else
            {
                cout<<e3.designation <<" "<< designation <<" "<< e2.designation<<endl;
            }

        }

    }


};


int main() {


cout<<"First Object"<<endl;
Emplyoee emp1;
emp1.getEmployee();

cout<<"Second Object"<<endl;
Emplyoee emp2;
emp2.getEmployee();

cout<<"Third Object"<<endl;
Emplyoee emp3;
emp3.getEmployee();

cout<<"In the order method"<<endl;
emp1.showOrder( emp2, emp3);

}
