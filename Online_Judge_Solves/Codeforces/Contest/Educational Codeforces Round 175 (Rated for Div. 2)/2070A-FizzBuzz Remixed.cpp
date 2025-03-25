
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n==0){
 cout<<1<<endl;
        }else if(n==1){
 cout<<2<<endl;
        }else if(n==2){
 cout<<3<<endl;
        }else if(n%15==0){
 n= (n/15)*3+1;
       cout<<n<<endl;
        }else if(n%15==1){
 n= (n/15)*3+2;
       cout<<n<<endl;
        } else{
 n= (n/15)*3+3;
       cout<<n<<endl;
        }
    }
    return 0;
}
