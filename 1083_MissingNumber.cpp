#include <bits/stdc++.h>
using namespace std;
int n, a, x;
int main(){
    cin >> n;
    for(int i = 1; i < n; i++) {
        cin >> x;
        a^=i;
        a^=x;
    }
    a^=n;
    cout << a;
    return 0;
}
