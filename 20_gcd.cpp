#include <iostream>
using namespace std;

int main()
{
    int n1, n2, gcd;
    cout << "Enter two number: " << endl;
    cin >> n1 >> n2;
    int limit = n1 > n2 ? n1 : n2;

    for (int i = 1; i < limit; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
            gcd = i;
    }
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd << endl;
}