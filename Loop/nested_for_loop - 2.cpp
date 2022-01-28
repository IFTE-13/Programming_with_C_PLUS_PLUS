#include<iostream>

using namespace std;

int main()

{

int i,j,k;

for(i=1;i<3;i++)

{
    for(j=i;j<3;j++)

    {
        for(k=1;k<j;k++)

        {
            cout<<i<<"  AND  "<<j<<"  AND  "<<k<<endl;
        }
    }


}
}
