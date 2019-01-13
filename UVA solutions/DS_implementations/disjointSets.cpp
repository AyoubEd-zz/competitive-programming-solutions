#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;
 
typedef char T;
vector<int> parent;
vector<T> value;
#define setClear() { parent.clear(); value.clear(); }
#define setMake(v) { value.push_back(v); parent.push_back(parent.size()); }
#define setUnion(x, y) { parent[setFind(x)] = setFind(y); }
int setFind(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = setFind(parent[x]);
}
 
int main() {
    char m = 'E';
    for (char c = 'A'; c <= m; ++c)
        setMake(c)
    setUnion(0, 1);
    setUnion(2, 4);
    setUnion(3, 1);
    setUnion(4, 2);
    map<int, int> setSize;
    for (int i = 0; i < parent.size(); ++i)
        setSize[setFind(i)]++;
    printf("%d\n", setSize.size());
    return 0;
}