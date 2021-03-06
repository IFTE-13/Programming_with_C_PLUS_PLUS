#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T* ptr;
    int size;

public:
    Array(T arr[], int s);
    void print();
};

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T>
void Array<T>::print()
{
    cout<<"Given: "<<endl;
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

int main()
{
    char arr[5] = { 'a', 'b' , 'c' , 'd' , 'e'};
    Array<char> a(arr, 5);
    a.print();
    cout<<"Reverse: "<<endl;
    for(int i=(5-1); i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
