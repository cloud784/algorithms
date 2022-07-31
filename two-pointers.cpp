#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, sum;
  n = 8; k = 8; //k - target sum
  int array[n] = {1, 3, 2, 5, 1, 1, 2, 3};

  int left_pointer=0, right_pointer=0;
  sum = array[0];
  while (sum!=k && right_pointer!=n-1){
    if (sum<k){
      right_pointer++;
      sum += array[right_pointer];
    }
    else {
      left_pointer++;
      sum -= array[left_pointer-1];
    }
  }
  cout << left_pointer << " " << right_pointer << endl;
}
