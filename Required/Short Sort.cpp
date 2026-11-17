#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int wrong = 0;
        if (s[0] != 'a') wrong++;
        if (s[1] != 'b') wrong++;
        if (s[2] != 'c') wrong++;

        cout << (wrong == 0 || wrong == 2 ? "YES" : "NO") << '\n';
    }

    return 0;
}
