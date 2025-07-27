#include <iostream>
using namespace std;

int main() {
    int num;
    int N;

    cout << "Enter num:" << endl;
    cin >> num;

    while (num != 0) {
        N = num % 10;
        num = num / 10;  // <- This line must update num
        cout << N << endl;
    }

    return 0;
}
