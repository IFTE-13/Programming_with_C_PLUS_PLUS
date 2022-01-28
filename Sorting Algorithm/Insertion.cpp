#include<iostream>
using namespace std;

void print(int x[], int size) {
  for (int i = 0; i < size; i++) {
    cout << x[i] << " ";
  }
  cout << endl;
}

void insertionSort(int x[], int size) {
  for (int step = 1; step < size; step++) {
    int key = x[step];
    int j = step - 1;

    while (key < x[j] && j >= 0) {
      x[j + 1] = x[j];
      --j;
    }
    x[j + 1] = key;
  }
}

int main() {
  int value[] = {40, 10, 30, 50, 20};
  int size = sizeof(value) / sizeof(value[0]);
  insertionSort(value, size);
  cout << "Sorted array in ascending order:\n";
  print(value, size);
}
