#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

long summary(long a, long b) {
    return a + b;
}

int main() {
    long a, b;
    cin >> a >> b;
    cout << summary(a, b) << endl;
    cout << multiply(a, b) << endl;

    return 0
}