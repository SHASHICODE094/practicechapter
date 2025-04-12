#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  /*  cout<<"HELLO SHASHIKANT"<<"\n";
    ofstream read;
    read.open("firstfile.txt");
    string n;
    cout<<"Enter yuor name";
   getline(cin, n);
   read<<n;
    read.close();*/

     ifstream write;
    write.open("firstfile.txt");
    //string n;
    // write>>n;
    //cout<<"Enter yuor name"<<n ;
     char ch;
     while(!write.eof())
     {
        write.get(ch);
        cout<<ch;
     }
  
    write.close();
}