#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> freq(200001, 0);

    int mx = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
        mx = max(mx, x);
    }

    vector<int> suf(mx + 2, 0);

    for(int i = mx; i >= 1; i--)
        suf[i] = suf[i + 1] + freq[i];

    string ans;
    int carry = 0;

    for(int i = 1; i <= mx; i++) {
        int cur = suf[i] + carry;
        ans.push_back((cur % 10) + '0');
        carry = cur / 10;
    }

    while(carry) {
        ans.push_back((carry % 10) + '0');
        carry /= 10;
    }

    while(ans.size() > 1 && ans.back() == '0')
        ans.pop_back();

    reverse(ans.begin(), ans.end());

    cout << ans;

    return 0;
}