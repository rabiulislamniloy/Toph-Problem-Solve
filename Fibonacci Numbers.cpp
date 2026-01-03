#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1;
    } else {
        long long a = 1, b = 1;
        for (int i = 3; i <= n; i++) {
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << b;
    }

    return 0;
}
