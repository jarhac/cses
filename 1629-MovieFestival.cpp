#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n, {0, 0});
    for(int i = 0; i < n; i++) {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr.begin(), arr.begin() + n);
    int x = 0, l = 0, r = 0, c = 0;
    for(auto i : arr) {
        l = i.second;
        r = i.first;
        if(l < x) continue;
        x = r;
        c++;
    }
    cout << c;
}
