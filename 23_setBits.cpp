#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int k = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
            k++;
        n = n >> 1;
    }
    return k;
}

int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    cout << "The total set bits are : " << countSetBits(a) + countSetBits(b);
    cout << endl;
    return 0;
}