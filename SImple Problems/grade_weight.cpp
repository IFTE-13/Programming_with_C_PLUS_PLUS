#include<iostream>
using namespace std;
class student{

 public:
    float score_mid;
    float score_final;
    float weight_mid;
    float weight_final;
    float total_score;


    calculate()
    {
    cout<<"Enter your mid score"<<endl;
    cin>>score_mid;
    cout<<"How much of the score is going to be taken?"<<endl;
    cin>>weight_mid;
    cout<<"So added amount is :"<<score_mid*(weight_mid/score_mid)<<endl;
    cout<<"Enter your final term score :"<<endl;
    cin>>score_final;
    cout<<"How much of the score is going to be taken?"<<endl;
    cin>>weight_final;
    cout<<"So added amount is :"<<score_final*(weight_final/score_final)<<endl;
    }

    void the_final_score(){


    total_score = (score_mid*(weight_mid/score_mid))+(score_final*(weight_final/score_final));
     cout<<"The final score is :"<<total_score<<endl;

    }
};
int main(){

    student obj ;
    obj.calculate();
obj.the_final_score();
}
