#include <iostream>

using namespace std;

#define m 3

#define n 3

int main(void)

{

int i, j, total = 0;

int q[m][n]={{4,5,6,},{10,25,33},{21,32,43}};

float average;

for(i=0; i<m; i++)

for(j=0; j<n; j++)

{

total=total + q[i][j];
}
average = (float)total/(float) (m*n);
cout<<"\nThe Average = "<<average<<endl;
return 0;

}
