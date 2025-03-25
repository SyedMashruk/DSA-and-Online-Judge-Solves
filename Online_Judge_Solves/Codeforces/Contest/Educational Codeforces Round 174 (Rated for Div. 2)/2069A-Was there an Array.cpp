#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n,flag =1;
    cin>>n;
    int b[n-2];
    for(int i=0;i<n-2;i++){
      cin>>b[i];
    }
    for(int i=1;i<n-3;i++){
      if(b[i]==0 &&b[i-1]==1&&b[i+1]==1){
        flag =0;
      }
    }
    if(flag==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
