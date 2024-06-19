#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ones = 0, zeros = 0, ans = 0;
        for (char c : s) {
            if (c == '0') {
                zeros++;
            } else {
                ones++;
            }
            ans = min(zeros, ones);
        }
        cout << ans << "\n";
    }
    return 0;
}
