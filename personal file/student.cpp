#include<iostream>
#include<fstream>
using namespace std;
int main()
{   char name[40];
    int age;
    float marks;
    ofstream student;
    student.open("Student.txt");
    cout<<"\n";
    cout<<"Enter your name :"<<"\n";
   // cin>>name;
   cin.get(name,40);
     cout<<"Enter age :"<<"\n";
    cin>>age;
     cout<<"Enter marks :"<<"\n";
    cin>>marks;
    student<<name<<"\n"<<age<<"\n"<<marks;
    student.close();
    return 0;
}