#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct student
{
  int roll;
  string name;
  int marks;
};
void display(const string &filename)
{
  ifstream file(filename, ios::binary);
  student s;

  if (!file)
  {
    cout << "not found";
    return;
  }
  while (file.read((char *)&s, sizeof(student)))
  {
    cout << "\nRoll No: " << s.roll;
    cout << "\nName: " << s.name;
    cout << "\nMarks: " << s.marks << "\n";
  }
  file.close();
}
void writedata(const string &filename)
{
  student s;
  cout << "enter name";
  cin.ignore();
  getline(cin, s.name);
  cout << "enter roll";
  cin >> s.roll;
  cout << "enter marks";
  cin >> s.marks;
  ofstream file(filename, ios::app | ios::binary);
  file.write((char *)&s, sizeof(student));
  file.close();
  cout << "Data written successfully.\n";
}

void updatedata(const string& filename)
{
  
}
int main()
{
  string filename = "student.dat";
  int ch;
  // student s;
  cout << "menu----------------------\n";
  cout << "1.display detail of student\n";
  cout << "2.write data of student\n";
  cout << "3.update detail of student\n";
  cout << "Enter your choice\n";
  cin >> ch;
  switch (ch)
  {
  case 1:
    display(filename);
    break;
  case 2:
    writedata(filename);
    break;
  case 3:
    updatedata(filename);
    break;
  default:
    break;
  }
  return 0;
}