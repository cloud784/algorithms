#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, sum;
  n = 8; k = 12;
  int array[n] = {9, 10, 5, 6, 9, 7, 1, 4};

  sort(array, array+n);
  int left_pointer=0, right_pointer=n-1;
  sum = array[left_pointer]+array[right_pointer];
  while (sum!=k && left_pointer!=right_pointer){
    if (sum<k){
      left_pointer++;
      sum += array[left_pointer]-array[left_pointer-1];
    }
    else {
      right_pointer--;
      sum += array[right_pointer]-array[right_pointer+1];
    }
  }
  cout << left_pointer << " " << right_pointer << endl;
}
