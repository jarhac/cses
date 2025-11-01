#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  vector<bool> used(2*n, 0);
  vector<vector<int>> ans(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
    fill(used.begin(), used.end(), 0);
      for(int t = 0; t < j; t++) {
        used[ans[i][t]] = 1;
      }
      for(int t = 0; t < i; t++) {
        used[ans[t][j]] = 1;
      }
      for(int t = 0; t < n * 2; t++) {
        if(used[t] == 0) {
          ans[i][j] = t;
          break;
        }
      }
    }
  }
  for(auto i : ans) {
    for(auto j : i) {
      printf("%d ", j);
    }
    printf("\n");
  }
}