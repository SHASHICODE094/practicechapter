#include <iostream>
#include <fstream>
using namespace std;
void login();
void registration();
int forgot();
int main()
{

    int n;
    cout << "your menu\n";
    cout << "1. Login\n";
    cout << "2. Registration\n";
    cout << "3. forgot \n";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << " Login\n";
        login();
    }
    break;
    case 2:
    {
        cout << " Registration\n";
        registration();
    }
    break;
    case 3:
    {
        cout << " forgot\n";
        int forgot();
    }
    break;
    default:
    {
        cout << "Enter wrong choice";
    }
    }
    return 0;
}
void login()
{
    int count;
string userid, usercode, id, pass;
cout << "Enter your username\n";
    cin >> userid;
    cout << "Enter your password\n";
    cin >> usercode;
    ifstream f1("registration.txt");
    while(f1>>id>>pass)
    {
        if(id== userid && pass == usercode)
        {
            count =1;

        }

    }
    f1.close();

if(count ==1)
{
    cout<<"succes";
    main();

}
else
{
    cout<<"error;";
    main();
}

}
void registration()
{
    string username, userpassword;
    cout << "Enter your username\n";
    cin >> username;
    cout << "Enter your password\n";
    cin >> userpassword;

    ofstream f2("registration.txt");
    f2 << username << " " << userpassword;
    system("cls");
    cout << "Your login successfull";
}
int forgot()
{

}

// void registration();
// int main()
// {ios::app
//     cout << "2. Registration\n";
//      registration();
// }
// void registration()
// {
//     string username, userpassword;
//         cout << "Enter your username\n";
//         cin >> username;
//         cout << "Enter your password\n";
//         cin >> userpassword;

//         ofstream f2("registration.txt", ios::app);
//         f2 << username << " " << userpassword;
//         system("cls");
//         cout << "Your login successfull";
// }