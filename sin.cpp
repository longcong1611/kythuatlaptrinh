#include<bits/stdc++.h>
#define pi 3.14159265358979323846
#define espsilon 0.00001
using namespace std;
void tong(int a){
	int tong=0;
	for(int i=0;i<=a;i++){
		tong+=i;
	}
	return tong;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int x,n;
        cin>>x>>n;
        for(int k=1;k<=n;k++){
        	int s=0;
        	s+=(x^k)/(tong(k));
		}
    }
}