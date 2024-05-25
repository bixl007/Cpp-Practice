#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a binary number: " << endl;
    cin >> n;
    int bit, num = 0, i = 0;

    while (n != 0)
    {
        bit = n & 1;
        num = (bit * pow(10, i)) + num;
        n = n >> 1;
        i++;
    }
    cout << "The binary representation of the decimal number is: " << num << endl;
}