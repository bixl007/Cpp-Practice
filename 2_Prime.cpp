#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << n << " is Prime number";
    }
}