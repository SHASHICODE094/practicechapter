// FIND factorial of a number.using function with parameter and return type.
#include <iostream>
using namespace std;
class factorial
{
private:
    int n;

public:
    void get()
    {
        cout << "Enter the num\n;";
        cin >> n;
    }
    void display()
    {
        cout << "Factorial of " << n << " : " << fact(n);
    }
    int fact(int n)
    {
        if (n <= 0)
        {
            return 1;
        }

        else
        {
            return n * fact(n - 1);
        }
    }
} ;
int main()
{
    //   int n;
    //   cout<<"Enter the num\n;";
    //   cin>>n;
    // //   fact(n);

    // cout << "Factorial of " << n << " : " << fact(n);
    // return 0;

    factorial f;
    f.get();
    f.display();
}
