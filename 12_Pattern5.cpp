#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int i = 1, k = 0;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + k;
            cout << ch << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}