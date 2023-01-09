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

// test
// A社
// A社は0~N-1の番号を持つ
// 0は組織のトップ
// 親組織は必ず存在し、子組織は複数ありえる
// 子組織の報告を受けたら、自身の報告も添えて親組織に提出する
#include <bits/stdc++.h>
using namespace std;

// x番の組織について、子組織からの報告書が揃う時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int>> &children, int x) {
  // ベースケース
  if (children.at(x).size() == 0) {
    return 0;  // 子組織が無いような組織について、報告書が揃う時刻は0
  }

  // 再帰ステップ
  int max_receive_time = 0;  // 受け取った時刻の最大値
  // x番の組織の子組織についてループ
  for (int c : children.at(x)) {

    // (子組織 c のもとに揃った時刻 + 1) の時刻に c からの報告書を受け取る
    int receive_time = complete_time(children, c) + 1;

    // 受け取った時刻の最大値 = 揃った時刻 なので最大値を求める
    max_receive_time = max(max_receive_time, receive_time);
  }
  return max_receive_time;
}

// これ以降の行は変更しなくてよい

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作る
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }

  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}
