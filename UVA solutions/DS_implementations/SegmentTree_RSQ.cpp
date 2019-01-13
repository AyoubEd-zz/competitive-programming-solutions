#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

class segmentTree{
private :
	int n;
	vi st, A;

	int left(int p) {return p<<1;}
	int right(int p){return (p<<1)+1;}

	void build(int p, int L, int R){
		if(L==R) st[p]=A[L];
		else{
			build(left(p), L, (L+R)/2);
			build(right(p), ((L+R)/2)+1 , R);
			int p1=st[left(p)], p2=st[right(p)];
			st[p] = p1+p2;
		}
	}

	int rsq(int p, int L, int R, int i, int j){
		if(i>R || j<L) return -1;
		if(L>=i && R<=j) return st[p];
		int p1 = rsq(left(p), L, (L+R)/2, i, j), p2 = rsq(right(p), ((L+R)/2)+1, R, i, j);
		if(p1==-1) return p2;
		if(p2==-1) return p1;
		return p1+p2;
	}

	void update(int p, int L, int R, int i, int diff){
		if(L==R) {st[p]+=diff;}
		else{
			if(i>=L && i<=(L+R)/2) {
						st[p]+=diff;
						update(left(p), L, (L+R)/2, i, diff);
					}
			else if(i>=((L+R)/2)+1 && i<=R){
						st[p]+=diff;
						update(right(p), ((L+R)/2)+1, R, i, diff);
			}
		}
	}

public:
	segmentTree(const vi &_A){
		A=_A;
		n = (int) A.size();
		st.assign(4*n, 0);
		build(1, 0, n-1);
	}

	int rsq(int i, int j){
		return rsq(1, 0, n-1, i, j);
	}
	void update(int i, int val){
		int diff_val = val-A[i];
		update(1, 0, n-1, i, diff_val);
		A[i]=val;
	}
};

int main()
{
    int arr[]=  {18, 17, 13, 19, 15, 11, 20};
    vi A(arr, arr+7);
    segmentTree st(A);
    cout<<st.rsq(0,3)<<'\n';
    cout<<st.rsq(0,6)<<'\n';
    st.update(2,0);
    cout<<st.rsq(0,3)<<'\n';
    cout<<st.rsq(0,6)<<'\n';
    return 0;
};

