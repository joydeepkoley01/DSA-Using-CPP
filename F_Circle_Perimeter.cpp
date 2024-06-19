#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;
        int ans = 0;
        for (int x = 1; x <= r; x++) {
            int y = floor(sqrt(r*r - x*x));
            ans += y;
        }
        ans *= 4;
        ans++;
        if (r == 1) {
            ans = 4;
        }
        cout << ans << "\n";
    }
    return 0;
}
