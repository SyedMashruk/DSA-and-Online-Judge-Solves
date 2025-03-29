#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Initialization
	char a[]= "Hello";
	char b[6] = "Hello"; //Extra 1 for '\0'
	char c[]= {'a','b','\0'};
	char d[3]= {'a','b','\0'};
	
	char e[20];
	cin>> e;   // It does not take space. Space break the input
	
	
	cout<<a<<"  Size: "<<strlen(a)<<endl;
	cout<<b<<"  Size: "<<strlen(b)<<endl;
	cout<<c<<"  Size: "<<strlen(c)<<endl;
	cout<<d<<"  Size: "<<strlen(d)<<endl;
	cout<<e<<"  Size: "<<strlen(e)<<endl;
	
	char f[50];
	cin.getline(f, 50, '.'); //cin.getline(Name , Size , Stopping Char); I will take input unless '.'
	
	
	cout<<f<<"  Size: "<<strlen(e)<<endl;
	
	
	// You can also take input using Loops like array;

}
