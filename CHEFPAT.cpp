#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<long int, long int> &a, const pair<long int, long int> &b){
      
      if(a.second == b.second) {
            return a.first < b.first;
      }
      return a.second > b.second;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	      long n;
	      cin>>n;
	      long a[n];
	      vector<pair<long int, long int>> v;
	      
	      for(long i=0;i<n; i++){
	            cin>>a[i];
	            v.push_back(make_pair(i,a[i]));
	      }
	      sort(v.begin(), v.end(), cmp);
	      long ans[n];
	      int k=1;
	      for(long i=0; i<n; i++){
	            ans[v[i].first] = k++;
	      }
	      
	      for(long i=0; i<n; i++){
	            cout<<ans[i]<<" ";
	      }
	      cout<<endl;
	      
	}
	return 0;
}
