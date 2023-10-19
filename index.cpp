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

void search(){
    if(total==0){
        cout<<"no data is entered"<<endl;

    }
    else{
        string rollno;
        cout<<"enter the roll no you want to search"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++){
            if(rollno==roll_no[i]){
                cout<<"roll no"<<roll_no[i]<<endl;
                cout<<"name"<<name[i]<<endl;
                cout<<"year"<<Class[i]<<endl;
                cout<<"course"<<course[i]<<endl;
            }
        }
    }
}

void update(){
    if(total==0)
    {
        cout<<"there is no student data"<<endl;
    }
    else{
        string rollno;
        cout<<"enter the roll no of the student whose data is to be updated"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++)
        {
         if(rollno==roll_no[i]){
            cout<<"student's previous data"<<i+1<<endl;
            cout<<"roll no"<<roll_no[i]<<endl;
            cout<<"student name"<<name[i]<<endl;
            cout<<"student class"<<Class[i]<<endl;
            cout<<"course of student"<<course[i]<<endl;
            cout<<"mobile no"<<mobile_no[i]<<endl;
            cout<<"admission year of student"<<admission_year[i]<<endl;
            //enter new data
            cout<<"enter new data of the student"<<endl;
            cout<<"enter new roll no"<<endl;
            cin>>roll_no[i];
            cout<<"enter new name"<<endl;
            cin>>name[i];
            cout<<"enter new course"<<endl;
            cin>>course[i];
            cout<<"enter new class"<<endl;
            cin>>Class[i];
            cout<<"enter new admission year"<<endl;
            cin>>admission_year[i];

            }

        }
    }
}

void Delete(){
    if(total==0)
    {
        cout<<"there is no student data"<<endl;

    }
    else{
        int a;
        cout<<"are you sure that you want to delete your data?"<<endl;
        cout<<"press 1 to delete the entire data"<<endl;
        cin>>a;
        if(a==1){
            total=0;
            cout<<"your data has been deleted"<<endl;
        }
        else{
            cout<<"please press 1 to delete all your data"<<endl;
        }
    }

}

int main()
{
    int value;
    while(true){
    cout<<"press 1 to enter data"<<endl;
    cout<<"press 2 to show student data"<<endl;
    cout<<"press 3 to search for a student"<<endl;
    cout<<"press 4 to update student information"<<endl;
    cout<<"press 5 to delete your data"<<endl;
    cin>>value;
    switch(value){
        case 1:
        enter();
        break;
        case 2:
        show();
        break;
        case 3:
        search();
        break;
        case 4:
        update();
        break;
        case 5:
        Delete();
        break;
        case 6:
        return 0;
    }
    }
}