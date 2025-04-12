#include<iostream>
#include<fstream>
using namespace std;
int main()
{  
    char ch;
    char name[40];
    int age;
    float marks;
    fstream detail;
    detail.open("Student.txt", ios::in );
    detail.get(name,100);
    detail.get(ch);
   // cout<<name;
    detail>>age;
    detail.get(ch);
  //
    detail>>marks;
    detail.get(ch);
     cout<<"Name  : "<<name <<"\n";
       cout<<"Age    : "<<age<<"\n";
    cout<<"Marks : "<<marks;
    detail.close();
    return 0;
}