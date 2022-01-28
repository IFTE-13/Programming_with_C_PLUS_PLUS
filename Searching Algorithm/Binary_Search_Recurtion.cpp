#include<iostream>
using namespace std;

int search(int a[], int p, int r, int num) {
   if (p <= r) {
      int x = (p + r)/2;
      if (a[x] == num)
      return x ;
      if (a[x] > num)
      return search(a, p, x-1, num);
      if (a[x] > num)
      return search(a, x+1, r, num);
   }
   return -1;
}
int main() {
   int a[] = {10, 20, 30, 40, 50};
   int n = sizeof(a)/ sizeof(a[0]);
   int num = 30;
   int index = search (a, 0, n-1, num);
   if(index == -1)
   {
       cout <<"Element is not present in array";
   }
   else
   {
        cout <<"Element is at index "<<index<<endl;
   }
   return 0;
}
