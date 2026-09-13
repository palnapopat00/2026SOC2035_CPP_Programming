#include <iostream>
using namespace std;
int main()
{
    int n, b, rev;
    cout << "Enter a 3 digit number: ";
    cin >> n;
    b= (n % 10) * 100;
    rev = b;
    n = n / 10;
    rev = rev + (n % 10) * 10;
    n = n / 10;
    rev = rev + n;
    cout << "Reverse = " << rev;

    return 0;
}