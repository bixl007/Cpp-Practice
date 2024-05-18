#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;
    int temp = n, sum = 0;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        sum = sum * 10 + lastDigit;
        temp /= 10;
    }
    if (sum == n)
    {
        cout << n << " The number is a Palindrome." << endl;
    }
    else
    {
        cout << n << " The number is not Palindrome." << endl;
    }
}