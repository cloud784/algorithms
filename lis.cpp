//Longest Increasing Subsequence

#include <bits/stdc++.h>
using namespace std;

int LIS1(int *array, int n){
  int maxi = 0;
  int dp[n];
  for (int i=0; i<n; i++){
    dp[i] = 1;
    for (int j=0; j<i; j++){
      if (array[j] < array[i]){
        dp[i] = max(dp[i], dp[j]+1);
        maxi = max(maxi, dp[i]);
      }
    }
  }
  return maxi;
}

int main(){
  int n = 16;
  int array[n] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};

  cout << LIS1(array, n) << endl;
  cout << LIS(array, n) << endl;
  return 0;
}
