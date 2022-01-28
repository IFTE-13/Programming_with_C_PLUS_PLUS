#include<iostream>

using namespace std;

struct student
{
    char name [20];
    char id[10];
    float marks;
};

main()
{
    int i;
    struct student s[5];
    for(i=0;i<5;i++)
    {
        cin>>s[i].id;
        cin>>s[i].name;
        cin>>s[i].marks;
    }
    for(i=0;i<5;i++)
    {
        cout<<s[i].id<<"-";
        cout<<s[i].name<<"-";
        cout<<s[i].marks<<endl;
    }
}
