// 各桁の和を算出する
// 和がA以上B以下を判別
// 上記の条件を満たす場合、合計に加算する

#include <bits/stdc++.h>
using namespace std;

int find(int n){
    int sum = 0;
    while ( n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    cin N >> A >> B;
    int total = 0;

    for (int i = 1; i < N+1; i++){
        int sum = find(i);
        if (sum >= A && sum <= B){
            total += i;
        }
    }
    cout << total << endl;
}