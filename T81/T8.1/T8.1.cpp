
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:

    string name;
    int age;
    string gender;
    int weight;

public:

    void SetName(string valueName)
    {
        name = valueName;
    }
    void SetAge(int valueAge)
    {
        age = valueAge;
    }
    void SetGender(string valueGender)
    {
        gender = valueGender;
    }
    void SetWeight(int valueWeight)
    {
        weight = valueWeight;
    }
    void print()
    {
        cout << "Name \t" << name << endl;
        cout << "Age \t" << age << endl;
        cout << "Gender \t" << gender << endl;
        cout << "Weight \t" << weight << endl;
    }
};

class Student : Person
{
private:

    int study_years;

public:

    
    void SetStudy_years(int valueStudy_years)
    {
        study_years = valueStudy_years;
    }
    void print()
    {
        cout << "Study years \t" << study_years << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    string a, c;
    int b, d, f;

    Person human;
    cout << "Введите ваше имя \t";
    cin >> a;
    human.SetName(a);
    cout << "Введите ваш возраст \t";
    cin >> b;
    human.SetAge(b);
    cout << "Введите ваш пол \t";
    cin >> c;
    human.SetGender(c);
    cout << "Введите ваш вес \t";
    cin >> d;
    human.SetWeight(d);
    human.print();

    Student man;

    cout << "Введите год обучения \t" << endl;
    cin >> f;
    man.SetStudy_years(f);
    man.print();
    return 0;
}