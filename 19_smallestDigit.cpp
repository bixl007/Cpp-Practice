#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int digit, min = 10;
    while (n)
    {
        digit = n % 10;
        if (digit < min)
        {
            min = digit;
        }
        n /= 10;
    }
    cout << "The smallest digit is: " << min << endl;
}