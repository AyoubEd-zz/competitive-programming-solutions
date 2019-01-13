#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, n;
  while (cin >> N >> n && N && n) {
    string ARR[N];
    string arr[n];
    string arr_temp[n];
    for (int i = 0; i < N; i++) {
      cin >> ARR[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      arr_temp[i] = arr[i];
    }
    ////////////////////////////
    int som = 0;
    for (int i = 0; i <= N - n; i++) {
      int k = 0;
      while (ARR[i].find(arr[0], k) != string::npos) {
        k = ARR[i].find(arr[0], k);
        bool f = true;
        for (int j = i + 1; j < i + n; j++) {
          if (ARR[j].substr(k, n) != arr[j - i]) {f = false;}
        }
        if (f) {
          som++;
        }
        k++;
      }
    }
    cout << som << " ";
    ////////////Rotate///////////////
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        arr_temp[i][j] = arr[n - 1 - j][i];
      }
    }
    som = 0;
    for (int i = 0; i <= N - n; i++) {
      int k = 0;
      while (ARR[i].find(arr_temp[0], k) != string::npos) {
        k = ARR[i].find(arr_temp[0], k);
        bool f = true;
        for (int j = i + 1; j < i + n; j++) {
          if (ARR[j].substr(k, n) != arr_temp[j - i]) f = false;
        }
        if (f) {
          som++;
        }
        k++;
      }
    }
    cout << som << " ";
    ////////////Rotate///////////////
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        arr[i][j] = arr_temp[n - 1 - j][i];
      }
    }
    som = 0;
    for (int i = 0; i <= N - n; i++) {
      int k = 0;
      while (ARR[i].find(arr[0], k) != string::npos) {
        k = ARR[i].find(arr[0], k);
        bool f = true;
        for (int j = i + 1; j < i + n; j++) {
          if (ARR[j].substr(k, n) != arr[j - i]) f = false;
        }
        if (f) {
          som++;
        }
        k++;
      }
    }
    cout << som << " ";
    ////////////Rotate///////////////
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        arr_temp[i][j] = arr[n - 1 - j][i];
      }
    }
    som = 0;
    for (int i = 0; i <= N - n; i++) {
      int k = 0;
      while (ARR[i].find(arr_temp[0], k) != string::npos) {
        k = ARR[i].find(arr_temp[0], k);
        bool f = true;
        for (int j = i + 1; j < i + n; j++) {
          if (ARR[j].substr(k, n) != arr_temp[j - i]) f = false;
        }
        if (f) {
          som++;
        }
        k++;
      }
    }
    cout << som;
    cout << endl;
  }
  return 0;
}
