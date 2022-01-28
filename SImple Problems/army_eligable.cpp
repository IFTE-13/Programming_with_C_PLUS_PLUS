#include<iostream>

using namespace std;

int main ()

{
    int i;
    int m=1;
    int f=0;
    cout<<"Select Gender (m=1 or f=0)"<<endl;
    cin>>i;
    if(i==1)
    {
        float h,w,a;
        cout<<"Enter Height"<<endl;
        cin>>h;
        cout<<"Enter Weight"<<endl;
        cin>>w;
        cout<<"Enter Age"<<endl;
        cin>>a;
        if(h>=5.6)
        {
           if(w<=60)
           {
               if(a>=18 && a<=21)
                cout<<"Eligible"<<endl;
               else
                cout<<"Not Eligible"<<endl;
           }
           else
            cout<<"Not Eligible"<<endl;
        }
        else
            cout<<"Not Eligible"<<endl;
        }

    else if(i==0)
    {
        float h,w,a;
        cout<<"Enter Height"<<endl;
        cin>>h;
        cout<<"Enter Weight"<<endl;
        cin>>w;
        cout<<"Enter Age"<<endl;
        cin>>a;
        if(h>=5.3)
        {
           if(w<=55)
           {
               if(a>=18 && a<=20)
                cout<<"Eligible"<<endl;
               else
                cout<<"Not Eligible"<<endl;
           }
           else
            cout<<"Not Eligible"<<endl;
        }
        else
            cout<<"Not Eligible"<<endl;
        }
    }

