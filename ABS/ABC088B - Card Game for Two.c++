#include <bits/stdc++.h>
using namespace std;

// 得点カードをsortする取得する
// A, Bの順に大きいほうからカードを取得する
// 各合計の差を出力

int main(){
    // input
    int N;
    int A[100];
    cin >> N;
    for (int i; i < N; i++){
        cin >> A[i];
    }

    sort(A, A + N, generater<int>());
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            Alice += A[i];
        }
        else {
            Bob += A[i];
        }
    }

    cout << Alice - Bob << endl;
}