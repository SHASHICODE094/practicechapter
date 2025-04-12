#include<iostream>
using namespace std;

int main()
{int num1, num2, a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        cout<<"b"<<b;  
    }
    cout<<"a"<<a;
 return 0;
}