#include <iostream>
using namespace std;

int main() {
    int num;
    int N;

    cout << "Enter num:" << endl;
    cin >> num;

    while (num != 0) {
        N = num % 10;
        num = num / 10;  
        cout << N << endl;
    }

    return 0;
}

/*
Output:
Enter num:
78695
5
9
6
8
7
    */
