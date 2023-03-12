// T812.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class university
{
private:

    string name_user;

public:

    void SetName(string valueName)
    {

        name_user = valueName;
    }

    void PrintStudent()
    {
        cout << "Hello\t" << name_user << endl;
        cout << "You are a student.\nA 10% discount is available to you in the canteen." << endl;
    }

    void PrintTeacher()
    {
        cout << "Hello\t" << name_user << endl;
        cout << "You are a teacher.\nAccess to the <<A>> and <<B>> corpus is allowed." << endl;
    }

    void PrintScientist()
    {
        cout << "Hello\t" << name_user << endl;
        cout << "You are an employe. \nAccess to all buildings is unlocked.\nAccess to the university database is unlocked." << endl;
    }
};

void main()
{
    string name;
    int pass;

    cout << "Hello , what is your name?" << endl;
    cin >> name;
    cout << "Who you are?" << endl;
    cout << "1 - Stundet.\n2 - Teacher.\n3 - Scientist." << endl;
    cin >> pass;

    university person;
    person.SetName(name);

    if (pass == 1)
    {
        person.PrintStudent();
    }
    if (pass == 2)
    {
        person.PrintTeacher();
    }
    if (pass == 3)
    {
        person.PrintScientist();
    }
}