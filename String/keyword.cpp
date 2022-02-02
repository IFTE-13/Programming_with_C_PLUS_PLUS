#include<iostream>
using namespace std;

int main()
{
     string keyword[32]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   };
   bool flag = true;
   string input = "iftekhar";
   for(int i = 0; i<32; i++){
    if(keyword[i] == input){
        flag = false;
    }
   }
   if(flag){
    cout<<input<<" is not a keyword";
   }
   else{
    cout<<input<<" is a keyword";
   }
}
