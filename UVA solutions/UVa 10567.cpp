#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  string s,q; int arr[2],t,l,m,k,h; bool sol;
  cin >> s >> t;
  int f = s.size();
  std::vector<char> v,w;
  copy(s.begin(), s.end(), back_inserter(v));
  w=v;
  sort(v.begin(),v.end());
  while (t--) {
    string q;
    cin >> q;
    l = q.size();
    m=0; bool sol =false;
    for (int i = 0; i < l; i++) {
      vector<char>::iterator low,oh;
      low=lower_bound(v.begin()+m , v.end() , q[i]);
      k=low-v.begin();
      if(v[k]!=q[i]) {
        break;
      }
      m=k+1;
      oh=lower_bound(w.begin(), w.end() , q[i]);
      h=oh-w.begin();
      if(i==0) arr[0]=h;
      if(i==l-1) {
        arr[1]=h;
        sol=true;
      }
    }
    if(sol) cout << "Matched " << arr[0] << " " << arr[1];
    else cout << "Not matched";
    if(t>0) cout << endl;
  }
  return 0;
}
