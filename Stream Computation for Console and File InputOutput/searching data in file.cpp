#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

class student
{
public:
    char Name[30];
    int age;
    long int crn;

    void input()
    {
        cout << "Enter the name of the student:";
        cin >> Name;
        cout << "Enter the age of the student:";
        cin >> age;
        cout << "Enter the crn of the student:";
        cin >> crn;
    }

    void display()
    {
        cout << "Name:" << Name << '\t';
        cout << "Roll:" << age << '\t';
        cout << "Crn:" << crn << endl;
    }
};

int main()
{
    fstream file;
    int n;
    student s[6];
    cout << "Enter the number of student you want to add:" << endl;
    cin >> n;

    file.open("records.txt", ios::in | ios::out);

    // file input
    for (int i = 0; i < n; i++)
    {
        s[i].input();
        file.write((char *) &s[i], sizeof(s[i]));
    }
    file.seekg(0);
    // file output
    cout << "\nOUTPUT\n\n";
    for (int i = 0; i < n; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].display();
    }
    getch();
    file.seekg(0);

    // searching for specific data using crn number
    int search_crn;
    cout << "Enter the crn number to search" << endl;
    cin >> search_crn;

    cout << "The data you are searching is:" << endl;

    for (int i = 0; i < n; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));
        if (s[i].crn == search_crn)
        {
            s[i].display();
        }
    }
    file.close();
}
