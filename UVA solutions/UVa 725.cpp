#include <iostream>
using namespace std;
int main(){
	int N = 62;
	for(int a = 1234; a <= 98765 / N; a++) {
		
	int b = a * N;
	int t, u = (a < 10000);
	 t = a; while (t) { u |= 1 << (t % 10); t /= 10; }
	 t = b; while (t) { u |= 1 << (t % 10); t /= 10; }
	if (u == (1 << 10) - 1) { cout << a << " " << b << " " << N << endl;}
	}
	
	return 0;
}