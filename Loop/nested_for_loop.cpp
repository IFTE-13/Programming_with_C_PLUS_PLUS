#include<iostream>

using namespace std;

int main()

{

int i,j;

	for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

return 0;


}



\\changed condition



#include<iostream>

using namespace std;

int main()

{

int i,j;

	for(i=1;i<4;i++)
    {
        for(j=i;j<4;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

return 0;


}
