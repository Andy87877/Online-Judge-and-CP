#include<bits/stdc++.h>
using namespace std;
vector<int> a(2000100);
int findroot(int i){
	if(a[i]==i)return i;
	int root=findroot(a[i]);
	a[i]=root;
	return root;
}
void connect(int A,int b){
	int root1=findroot(A);
	int root2=findroot(b);
	a[root1]=root2;
	return;
}
int main(){
	int N,K;
	cin>>N>>K;
	for(int i=1;i<=N;i++){
		a[i]=i;
	}
	for(int i=1;i<=N;i++){
		int A;
		cin>>A;
		connect(i,A);
		A=findroot(i);
	}
	vector<int> use;
	sort(a.begin(),a.begin()+N);
	vector<int>::iterator A=a.begin()+1;
	while(A-(a.begin()+N)<0){
		use.push_back(upper_bound(A,a.begin()+N+1,*A)-A);
		A=upper_bound(A,a.begin()+N+1,*A);
	}
	sort(use.begin(),use.end());
	int answer=0;
	int tmp=use.size();
	if(N<K){
		cout<<-1;
	}else if(tmp>=K){
		for(int i=0;i<tmp-K;i++){
			answer+=use[i];
		}
		cout<<answer;
	}else{
		cout<<K-tmp;
	}
	return 0;
} 