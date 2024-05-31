#include <iostream>
using namespace std;

int nthTerm(int n){
    int term = n * 3 + 7;
    return term;
}

int  main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    int result = nthTerm(n);
    cout << "The nth-Term is: " << result << endl;

}