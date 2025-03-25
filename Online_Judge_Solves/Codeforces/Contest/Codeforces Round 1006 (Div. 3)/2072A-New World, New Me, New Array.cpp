#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>> t;
  while(t--)  {
    int n,k,p, ans;
    cin>> n>> k>> p;
    k = abs(k);
    p = abs(p);
    if(k%p == 0){
      ans = k/p;
    }else{
      ans = k/p + 1;
    }
    if(ans>n){
      cout<< -1<< endl;
    }else{
      cout<< ans<< endl;
    }
  }
}
