#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lcmAndGcd(int a, int b) {
        int a1 = a;  
        int b1 = b;
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        int gcd = (a == 0) ? b : a;  
        int lcm = (a1 * b1) / gcd;  
        vector<int> vec = {lcm, gcd};
        return vec;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

