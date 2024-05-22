#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int temp1 = n, temp2 = n, s = 0, k = 0;
    while (temp1 != 0)
    {
        k++;
        temp1 /= 10;
    }
    while (temp2 != 0)
    {
        int lastDigit = temp2 % 10;
        s += pow(lastDigit, k);
        temp2 /= 10;
    }
    if (s == n)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
}