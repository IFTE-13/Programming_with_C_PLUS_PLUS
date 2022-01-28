#include<iostream>
#include<fstream>
using namespace std;

//create new file and write data
void writeFile(){
    ofstream MyFile("text.txt");
    MyFile<<"Programming is fun"<<endl;
    cout<<"Created successfully"<<endl;
    MyFile.close();
}

//read an existing file
void readFile(){
    string text;
    ifstream MyFile("text.txt");

    while (getline(MyFile, text)){
           cout<<text;
           }
    MyFile.close();

}

//append new data into existing file
void append(){
    ofstream file_out;
    file_out.open("text.txt", std::ios_base::app);
    file_out<<"Let's learn something everyday"<<endl;
    cout<<"Successful"<<endl;
}

//driver function
int main(){
    writeFile();
    readFile();
    append();
}
