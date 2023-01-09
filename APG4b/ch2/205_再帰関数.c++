// 「ある関数の中で同じ関数を呼び出す」ことを再帰呼び出しという
// 再帰を行うような関数を再帰関数という
// 再帰呼び出しを行わずに完了できる処理をベースケースという
// 再帰呼出しを行い、その結果を用いて行う処理のことを再帰ステップという
// 再帰関数の実装方法3ステップ
// 1.「引数」「返り値」「処理内容」を決める
// 2.再帰ステップの実装
// 3.ベースケースの実装

//
#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  }

  // sum関数の中でsum関数を呼び出している
  int s = sum(n - 1);
  return s + n;
}

int main() {
  cout << sum(2) << endl;    // 0 + 1 + 2 = 3
  cout << sum(3) << endl;    // 0 + 1 + 2 + 3 = 6
  cout << sum(10) << endl;   // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
}

//
#include <bits/stdc++.h>
using namespace std;

// 0~0の総和を求める
int sum0() {
  return 0;
}
// 0~1の総和を求める
int sum1() {
  int s = sum0();
  return s + 1;  // (0~0の総和) + 1 = 1
}
// 0~2の総和を求める
int sum2() {
  int s = sum1();
  return s + 2;  // (0~1の総和) + 2 = 3
}
// 0~3の総和を求める
int sum3() {
  int s = sum2();
  return s + 3;  // (0~2の総和) + 3 = 6
}

int main() {
  cout << sum3() << endl;  // 6
}

//// sample
// a から b の総和を求める
// range(3, 7)
// a ~ bの総和を計算する (a ≦ b)という前提

// 1. 引数、返り値、処理内容を決める
int sum_range(int a, int b) {
}

// 2. 再帰ステップの実装
int sum_range(int a, int b){
    return sum_range(a, b - 1)
}

// 3. ベースケースの実装
int sum_range(int a, int b){
    if (a == b){
        return a;
    }

    return su_range(a, b - 1) + b;
}

#include <bits/stdc++.h>
using namespace std;

int sum_range(int a, int b){
    if (a == b){
        return a;
    }

    return sum_range(a, b - 1);
}

int main(){
    cout << sum_range(0, 4) << endl;
}

//// sample
// i ~ N - 1 の範囲にNの約数があるかを確認する
bool has_divisor(int N , int i){
}

bool has_divisor(int N, int i){
    // ベースケース
    if (i == N){
    // 対象の整数がないためfalse
        return false;
    }

    if (N % i == 0){
    // i が N の約数
        return true;
    }

    return has_divisor(N, i + 1)
}

bool is_prime(int N){
    if (N == 1){
    // 1は素数でない
        return false;
    }

    else if (N == 2){
    // 2は素数
        return true;
    }

    else {
        return !has_divisor(N, 2);
    }
}

// 例題
// A社
// A社は0~N-1の番号を持つ
// 0は組織のトップ
