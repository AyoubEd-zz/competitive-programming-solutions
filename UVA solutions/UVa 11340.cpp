//============================================================================
// Name        : UVA11340.cpp
// Author      : AyoubEd
// Description : C++, Ansi-style
//============================================================================
#include <iostream>
#include <iomanip>
#include<cstdio>
#include<string>
#include <cmath>
#include <cfenv>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int k;
        cin>>k;
        unsigned long long price[15000]={0};
        for(int i=0; i<k;i++){
        	unsigned char temp;
        	unsigned long long prc;
        	cin>>temp>>prc;
        	price[temp]=prc;

        }
        unsigned long long sum = 0;
        string s;
        int m;
        cin >>m >> std::ws;
        for(int j=0;j<m;j++){
        	getline(cin, s);
        	for(int i=0;i<s.size();i++){
        		sum+=price[s[i]];
        	}
        }
        double d = (double)sum/100.0;
        cout<< fixed << setprecision(2) <<d<<"$"<<endl;
    }
    return 0;
}
