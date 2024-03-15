#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void rHanoi(int n,int s,int f);
 
int pMove(int s, int f);
 
int main(){
 
	int n,t;
	
	cin >> n;
	t = pow(2,n) - 1;
	
	cout << t << endl;
	rHanoi(n,1,3);
 
 return 0;
}
 
int pMove(int s,int f){
	cout << s << ' ' << f << endl;
	return 0;
}
 
void rHanoi(int n,int s,int f){	
	if(n==1){
		pMove(s,f);	
		return;
	}
	else{
		int m = 6 - (s + f);
		rHanoi(n-1,s,m);
		pMove(s,f);
		rHanoi(n-1,m,f);
	}
}