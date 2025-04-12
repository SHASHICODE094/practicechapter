#include<iostream>
#include <fstream>
using namespace std;
void login();

int main()
{
  cout<<"hi!";
  login();
 return 0;
}
void login()
{
int u, h, i,k;
cin>>u>>h>>i;
ofstream f1("t1.txt");
f1<<u<<" "<<h<<" "<<i;

}