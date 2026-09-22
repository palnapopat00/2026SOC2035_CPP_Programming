#include <iostream> 
using namespace std;

class Student {
private:
    int rollno;
    string name;
    float marks[3];
    float totalmarks;
    float percentage;
    string result;

public:
    void getdetails() {
    cout << "enter your roll number:" << endl;
    cin>>rollno;
    cout << "enter your name:" << endl;
    cin>>name;
    cout << "enter the marks of 3 subjects:" << endl;
    for (int i = 0; i < 3; i++) {
        cin>>marks[i];
    }
    }

    void calculateResult() {
        totalmarks = 0;
        for (int i = 0; i < 3; i++) {
            totalmarks += marks[i];
        }
       percentage= totalmarks / 300 * 100;
        if (percentage >= 60)
            result = "First Class";
        else if (percentage >= 50)
            result = "Second Class";
        else if (percentage >= 40)
            result = "Pass";
        else
            result = "Fail";

        cout << "Total Marks: " << totalmarks << endl;
        cout << "Percentage: " << percentage<< endl;
        cout << "Result: " << result << endl;
    }

void display(){
cout<<"the student details are"<<endl;
cout<<"Roll number:"<<rollno<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Marks in 3 subjects:"<<marks[0]<<","<<marks[1]<<","<<marks[2]<<endl;
cout<<"Total marks:"<<totalmarks<<endl;
cout<<"Percentage:"<<percentage<<endl;
cout<<"Result:"<<result<<endl;
}
};

int main() {
    Student s;
    s.getdetails();
    s.calculateResult();
    s.display();
    return 0;
}