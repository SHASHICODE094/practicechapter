#include <iostream>
using namespace std;

int main()

{
  int i;
  int j, count=0;
  int sum = 0, a = 1, b = 2;
  for ( j= 1; j < 10; j++)
  {
    for ( i= 1; i < 10; i++)
    {
      if (j % i == 0)
      {
        cout << "I " << i <<", ";
        
      }
      
    }
    cout<< "\n";
   
  }

  return 0;
}