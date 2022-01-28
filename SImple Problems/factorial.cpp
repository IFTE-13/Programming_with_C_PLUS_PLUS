#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n = 6;
    cout << "Factorial of " << n << " is " << factorial(n)<<endl;
    return 0;
}

int factorial(int n)
{
    if(n > 1){
            return n * factorial(n - 1);
        }
    else{
            return 1;
        }
}
