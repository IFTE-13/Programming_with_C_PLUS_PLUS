#include<iostream>

using namespace std;

class Account //inside class
{
    private:
      float amount;

    public:
     float balance;
     float withdraw1;

         Account()
     {
        balance = 0;
        withdraw1 = 0;
     }
  void deposit(float num){
   cout<<"You are depositing money "<<endl;
   cout<<"Enter the amount you want to deposit : "<<endl;
   cin>>balance;
  }
  void withdraw(float num)
  {
   cout<<"You are withdrawing money "<<endl;
   cout<<"Enter the amount to withdraw : "<<endl;
   cin>>withdraw1;
               if (balance>=withdraw1)
               {
                 cout<<"Transaction is successful"<<endl;
               }
               else{
                 cout<<"Transaction not Possible"<<endl;
               }
  }
void CurrentAmount(){
    if(balance - withdraw1>=0)
        {
        cout<<"The current balance of your Account is : "<<balance - withdraw1;
        }

    else
        {
         cout<<"Please try again"<<endl;
        }
}

};
int main()
{
  Account acc;
 int num;
  acc.deposit(num);
  acc.withdraw(num);
  acc.CurrentAmount();
 cout<<endl;
 cout<<"Thank You"<<endl;
 return 0;
}
