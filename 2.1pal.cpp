#include <iostream>
using namespace std;

class employee{
private:
string empid;
string name;
int salary;
int bonus;
int totalSalary;
public:
employee() : empid(""), name("username"), salary(0), bonus(0), totalSalary(0) {}
public:
int fullSalary(){
totalSalary = salary + bonus;
return totalSalary;
}

void display(){
cout << "Employee ID: " << empid << endl;
cout << "Name: " << name << endl;
cout << "Salary: " << salary << endl;
cout << "Bonus: " << bonus << endl;
cout << "Total Salary: " << totalSalary << endl;
}

};
int main(){
employee e;
e.fullSalary();
e.display();
return 0;

}
