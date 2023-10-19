#include<iostream>
using namespace std;
string roll_no[30],name[30],Class[30],course[30],mobile_no[30],admission_year[30];
int total=0;
void enter()
{
    int ch=0;
    cout<<"how many students do you want?"<<endl;
    cin>>ch;
    if(total==0)
    {
        total=ch+total;
        for(int i=0;i<ch;i++)
        {
            cout<<"enter the number of students"<<i+1<<endl;
            cout<<"enter the roll no "<<endl;
            cin>>roll_no[i];
            cout<<"enter the names"<<endl;
            cin>>name[i];
            cout<<"enter the class"<<endl;
            cin>>Class[i];
            cout<<"enter mobile number"<<endl;
            cin>>mobile_no[i];
             cout<<"enter admission year"<<endl;
            cin>>admission_year[i];
             cout<<"enter course"<<endl;
            cin>>course[i];

        }
    }
    else{
        for(int i=total;i<total;i++){
              cout<<"enter the number of students"<<i+1<<endl;
            cout<<"enter the roll no "<<endl;
            cin>>roll_no[i];
            cout<<"enter the names"<<endl;
            cin>>name[i];
            cout<<"enter the class"<<endl;
            cin>>Class[i];
            cout<<"enter mobile number"<<endl;
            cin>>mobile_no[i];
             cout<<"enter admission year"<<endl;
            cin>>admission_year[i];
             cout<<"enter course"<<endl;
            cin>>course[i];

        }
        total=ch+total;
    }
}

void show(){
    if(total==0)
    {
        cout<<"no student data entered"<<endl;
    }
    else{
        for(int i=0;i<total;i++)
        {
            cout<<"student data"<<i+1<<endl;
            cout<<"roll no"<<roll_no[i]<<endl;
            cout<<"student name"<<name[i]<<endl;
            cout<<"student class"<<Class[i]<<endl;
            cout<<"course of student"<<course[i]<<endl;
            cout<<"mobile no"<<mobile_no[i]<<endl;
            cout<<"admission year of student"<<admission_year[i]<<endl;

        }
    }
}

int main()
{
    int value;
    while(true){
    cout<<"press 1 to enter data"<<endl;
    cout<<"press 2 to show student data"<<endl;
    cin>>value;
    switch(value){
        case 1:
        enter();
        break;
        case 2:
        show();
        break;
    }
    }
}