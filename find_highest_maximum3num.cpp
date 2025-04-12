#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
 //const int n = 3;
cout<<"Enter the array size :";
cin>>n;
 vector <int> arr(n);
  for (int i = 0; i < n; i++)
  {
   cin>>arr[i];
   //cout<<"\t";
  }
  for (int i = 0; i < n; i++)
  {
   cout<<arr[i];
  // cout<<"\t";
  } 

 return 0;
}