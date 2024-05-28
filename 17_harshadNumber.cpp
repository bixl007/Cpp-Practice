#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    int tempNum = x, sum = 0;
    while (tempNum != 0)
    {
        int lastDigit = tempNum % 10;
        sum += lastDigit;
        tempNum /= 10;
    }
    if (x % sum == 0)
    {
        cout << "The result is: " << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}