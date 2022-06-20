
#include<iostream>
using namespace std;


int main() {

    /*
    Read input as specified in the question.
    Print output as specified in the question.
    */
    int n;
    cin >> n;
    int evenSum = 0;
    int i = 0;
    while (i <= n) {
        if (i % 2 == 0) evenSum += i;
        i++;
    }
    cout << evenSum << endl;

}