
#include<iostream>
#include<string>

using namespace std;

class student
{
private:
     string name;
     string id;
public:
     float cgpa;
     int course;

    void getstudent( )
    {
        cout<<"Enter student's name:"<<endl;
        cin>>name;
        cout<<"Enter student's id:"<<endl;
        cin>>id;
        cout<<"Enter amount of courses:"<<endl;
        cin>>course;
        cout<<"Enter student's cgpa:"<<endl;
        cin>>cgpa;
    }
    void ShowStudentInfo()
    {
        cout<< "Name is: "<<name<<endl;
        cout<< "ID is: "<<id<<endl;
        cout<<"Course amount is: "<< course<<endl;
        cout<<"CGPA is"<<cgpa<<endl;


    }

    void RankStudent(student stu1, student stu2,student stu3)
    {
        cout<<stu1.cgpa<<endl;
        cout<<stu2.cgpa<<endl;
        cout<<stu3.cgpa<<endl;

        if(stu1.cgpa > stu2.cgpa && stu1.cgpa > stu3.cgpa)
        {
            if(stu2.cgpa > stu3.cgpa)
            {
                cout<<stu1.id <<" "<< stu2.id <<" "<< stu3.id<<endl;
            }
            else
            {
                cout<<stu1.id <<" "<< stu3.id <<" "<< stu2.id<<endl;
            }

        }

        else if(stu2.cgpa > stu1.cgpa && stu2.cgpa > stu3.cgpa)
        {
            if(stu3.cgpa > stu1.cgpa)
            {
                cout<<stu2.id <<" "<< stu3.id <<" "<< stu1.id<<endl;
            }
            else
            {
                cout<<stu2.id <<" "<< stu1.id <<" "<< stu3.id<<endl;
            }

        }
          else if(stu3.cgpa> stu1.cgpa && stu3.cgpa > stu2.cgpa)
        {
            if(stu2.cgpa > stu1.cgpa)
            {
                cout<<stu3.id <<" "<< stu2.id <<" "<< stu1.id<<endl;
            }
            else
            {
                cout<<stu3.id  <<" "<< stu1.id <<" "<< stu2.id<<endl;
            }

        }

    }


};

int main() {

cout<<"First Student"<<endl;
student stu1;
stu1.getstudent();
stu1.ShowStudentInfo();
cout<<"Second Student"<<endl;
student stu2;
stu2.getstudent();
stu2.ShowStudentInfo();
cout<<"Third Student"<<endl;
student stu3;
stu3.getstudent();
stu3.ShowStudentInfo();
cout<<"Calling Cgpa serial : "<<endl;
stu2.RankStudent(stu1,stu2,stu3);
}
