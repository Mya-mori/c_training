/*
500円 A枚
100円 B枚
50円  C枚

上記の硬貨を組み合わせてX円にする
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int count = 0;

    for (int i = 0; i <= A; i++){ // 500円
        for (int j = 0; j <= B; j++){ // 100円
            for (int k = 0; k <= C; k++){ // 50円
                if (500 * i + 100 * j + 50 * k == X){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}