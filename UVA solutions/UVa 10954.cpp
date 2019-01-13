#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	while(cin>>n && n!=0){
		priority_queue<int> pq;
		while(n--){
			cin>>d;
			pq.push(-d);
		}
		int h=0;
		while(pq.size()>1){
			int temp = pq.top();
			pq.pop();
			h += -pq.top()-temp;
			pq.push(pq.top()+temp);
			pq.pop();
		}
		cout<<h<<endl;
	}
    return 0;
}
