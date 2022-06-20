#include<iostream>
using namespace std;


int main() {

    /*  Read input as specified in the question.
    * Print output as specified in the question.
    */

    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        int num = i;
        while (j <= n) {
            if (j <= n - i)cout << " ";
            else {
                cout << num;
                num++;
            }
            j++;
        }
        cout << endl;
        i++;
    }

}