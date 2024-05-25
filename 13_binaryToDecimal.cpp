#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a binary number: " << endl;
    cin >> n;
    int decimal = 0, i = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        i++;
    }
    cout << "The decimal representation of the binary number is: " << decimal << endl;
}