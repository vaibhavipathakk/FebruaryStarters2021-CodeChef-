#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t--){
	       long n, k;
	       cin>>n>>k;
	       
	       long a[k];
	       for(int i=0; i<k;i++){
	             cin>>a[i];
	       }
	       
	       string s[n];
	       for(int i=0; i<n; i++){
	             cin>>s[i];
	       }
	       
	       long sum;
	       for(long i=0; i<n; i++){
	             sum=0;
	             for(long j=0; j<k; j++){
	                   if(s[i][j] == '1'){
	                         sum+=a[j];
	                   }
	             }
	             cout<<sum<<endl;
	       }
	}
	return 0;
}
