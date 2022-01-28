#include<iostream>

using namespace std;

int main()

{
    int i;
    float course[5];
    float marks;
    for(i=0;i<=4;i++)

    {
         cin>>course[i];
    }
    cout<<"Your marks are: "<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<course[i]<<endl;
    }
    float sum=0.0;
    for(i=0;i<=4;i++)
    {
     sum=sum+course[i];
    }
    cout<<"Total marks "<<sum<<endl;

    float average;
    {
        average=sum/i;
        cout<<"Average marks is: "<<average<<endl;
    }
      float max=course[0];
      for(i=0;i<=4;i++)
      {
          if(course[i]>max)
          {
              max=course[i];
          }
      }
      cout<<"Max number is: "<<max<<endl;


      float min=course[0];
      for(i=0;i<=4;i++)
      {
          if(course[i]<min)
          {
              min=course[i];
          }
      }
      cout<<"Min number is: "<<min<<endl;

      return 0;
}
