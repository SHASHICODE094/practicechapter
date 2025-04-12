#include<iostream>
#include <fstream>
using namespace std;
void login();

int main()
{
  cout<<"hi!"<<endl;
  login();
 return 0;
}
void login()
{
    int u, h, i,k;
ifstream f2("t1.txt");
f2>>u>>h>>i;
cout<<"u "<<u<<endl;
cout<<"h "<<h<<endl;
cout<<"i "<<i<<endl;

}