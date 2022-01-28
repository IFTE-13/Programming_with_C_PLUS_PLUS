#include<iostream>

using namespace std;

int main()

{
    int n=4,k=3;
    for(int i=0;i<3;i=i+1)
    {
        cout<<--n<<endl;
        cout<<++n<<endl;
        cout<<k--<<endl;
        cout<<-k+2<<endl;
        cout<<k<<endl;
    }
}
