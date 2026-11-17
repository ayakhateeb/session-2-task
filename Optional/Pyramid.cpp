#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int star = 1; star <= row; star++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
