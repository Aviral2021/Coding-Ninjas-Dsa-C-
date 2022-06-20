#include<iostream>
using namespace std;


int main() {

    /*  Read input as specified in the question.
    * Print output as specified in the question.
    */
    int startF, stepSize, endF;
    cin >> startF >> endF >> stepSize;

    int i = startF;
    while (i <= endF) {
        int c_value = (i - 32) * 5.0 / 9;
        cout << i << " " << c_value  << endl;
        i += stepSize;

    }
}