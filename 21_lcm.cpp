#include <iostream>
using namespace std;

int main()
{
    int n1, n2, lcm = 0;
    cout << "Enter two number: " << endl;
    cin >> n1 >> n2;
    int i = n1 > n2 ? n1 : n2;
    while (!lcm)
    {
        if (i % n1 == 0 && i % n2 == 0)
            lcm = i;
        i++;
    }

    cout << "LCM of " << n1 << " and " << n2 << " is " << lcm << endl;
}