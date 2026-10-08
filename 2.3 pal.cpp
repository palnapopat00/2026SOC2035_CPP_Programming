#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    static int count;
    int rollno;

public:
    Student()
    {
        count++;
        rollno = count;
    }

    static void showCount()
    {
        cout << "Total students: " << count << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollno << endl;
    }
};

int Student::count = 0;
class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    friend void compare(Number a, Number b);
};

void compare(Number a, Number b)
{
    cout << "First number: " << a.value << endl;
    cout << "Second number: " << b.value << endl;

    if(a.value > b.value)
        cout << "First number is greater" << endl;
    else if(b.value > a.value)
        cout << "Second number is greater" << endl;
    else
        cout << "Both numbers are equal" << endl;
}
class Data
{
private:
    string name;
    int number;

public:
    Data(string n, int x)
    {
        name = n;
        number = x;
    }

    friend class Display;
};

class Display
{
public:
    void show(Data d)
    {
        cout << "Name: " << d.name << endl;
        cout << "Number: " << d.number << endl;
    }
};


int main()
{
    cout << "=== Static Members ===" << endl;

    Student s1, s2, s3;

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();


    cout << "\n=== Friend Function ===" << endl;

    Number n1(50);
    Number n2(30);

    compare(n1, n2);


    cout << "\n=== Friend Class ===" << endl;

    Data d("friend", 100);
    Display obj;

    obj.show(d);

    return 0;
}
