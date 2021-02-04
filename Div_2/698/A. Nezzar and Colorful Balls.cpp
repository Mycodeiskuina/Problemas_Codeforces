#include<bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
const int N = 1e2+10;
int cont[N];
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mx=0;
		for(int i=0;i<n;i++) {
			int x;
			cin>>x;
			cont[x]++;
			mx=max(mx,cont[x]);
		}
		for(int i=0;i<=n;i++) cont[i]=0;
		cout<<mx<<'\n';
	}
 	return 0;
}