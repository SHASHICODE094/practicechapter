#include <iostream>
#include <fstream>
using namespace std;
void registration();
int main()
{
    cout << "2. Registration\n";
     registration();
}
void registration()
{
    string username, userpassword;
        ifstream f1("registration.txt");
       f1>>username>>userpassword;
       cout<<" username "<<username<<"\n";
       cout<<" userpassword "<<userpassword<<"\n";

}