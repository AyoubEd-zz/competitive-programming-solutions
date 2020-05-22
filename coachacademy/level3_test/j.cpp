#include<iostream>
using namespace std;

int main(){
	int w, h, n, x1, y1, x2, y2, a, b, c, d;
	while(cin >>w>>h>>n && !(w==0&&h==0&&n==0)){
	    int arr[h+1][w+1];
	    int res = h*w;
	    while(n--){
		cin >>x1>>y1>>x2>>y2;
		a = min(x1, x2);
		c = max(x1, x2);
		b = min(y1, y2);
		d = max(y1, y2);
		for(int i=b;i<=d;i++){
		    for(int j=a;j<=c;j++){
			if(arr[i][j]==1) continue;
			res--;
			arr[i][j] = 1;
		    }
		}
	    
	    }
	    if(res==0){
	    	cout << "There is no empty spots." << endl;
	    } else if(res == 1){
	    	cout << "There is one empty spot." << endl;
	    } else {
	    	cout << "There are " <<res<< " empty spots." << endl;
	    }
	}
}
