#include<iostream>

using namespace std;

int main()

{
    int i;
    float quiz1[5];
    float quiz2[5];
    float bestquiz[5];
    cout<<"Enter marks of quiz 1: "<<endl;
    for(i=0;i<=4;i++)
    {
        cin>>quiz1[i];
    }
      cout<<"Enter marks of quiz 2: "<<endl;
    for(i=0;i<=4;i++)
    {
        cin>>quiz2[i];
    }
    for(i=0;i<=4;i++)
    {
        if(quiz1[i]>quiz2[i])
        {
            bestquiz[i]=quiz1[i];
        }
        else
            bestquiz[i]=quiz2[i];
    }
    for(i=0;i<=4;i++)
    {
        cout<<"Marks of best quiz "<<bestquiz[i]<<endl;
    }
}
