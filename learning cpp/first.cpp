#include <iostream>
using namespace std;

int main()
{
    string name;
    string &name2=name;
    int age;
    getline(cin, name); // to read a full line.
    cin >> age;
    cout << "\n\n";

    // not recommended.
    // printf("My name is %s and i am %d years old.\n",name.c_str(),age);

    // c++ style output.
    cout << "My name is " << name << " and i am " << age << " years old.\n";

    cout<< name2;
}