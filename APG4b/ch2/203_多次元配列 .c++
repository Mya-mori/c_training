// point
// 2次元配列は2次元の表を扱うときに便利
// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))で宣言できる
// 初期値は省略可能
// 変数名.at(i).at(j)でi行目j列目へアクセスできる
// 変数名.size()で縦の大きさを取得できる
// 変数名.at(0).size()で横の大きさを取得できる

// 初期化の例
vector<vector<int>> data = {
  {7, 4, 0, 8},
  {2, 0, 3, 5},
  {6, 1, 7, 0},
};

// 2次元以上の配列を多次元配列
// 3*4 の行列を考える
// 7 4 0 8
// 2 0 3 5
// 6 1 7 0

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {

  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> data(3, vector<int>(4));

  // 入力 (2重ループを用いる)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data.at(i).at(j);
    }
  }

  // 0の個数を数える
  int count = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {

      // 上からi番目、左からj番目の画素が0かを判定
      if (data.at(i).at(j) == 0) {
        count++;
      }

    }
  }

   cout << count << endl;

}

// 宣言
vector<vector<要素の型>> 変数名(縦の要素数, vector<要素の型>(横の要素数));

// アクセス
変数名.at(上から何番目か).at(左から何番目か)

// サイズの取得
vector<vector<int>> data(3, vector<int>(4));

data.size();  // 3 (縦の要素数) (12ではないことに注意!)
data.at(0).size();  // 4 (横の要素数)

変数名.at(i)  // i番目の1次元配列
変数名.at(i).at(j)  // i番目の1次元配列 のj番目の要素

// N*0
vector<vector<型>> 変数名(N);  // 「要素数0の配列」の配列

// ジャグ配列
vector<vector<int>> data(3);  // 3×0の配列

data.at(0).push_back(1);
data.at(0).push_back(2);
data.at(0).push_back(3);
// data.at(0)は3要素の配列

data.at(1).push_back(4);
data.at(1).push_back(5);
data.at(1).push_back(6);
data.at(1).push_back(7);
// data.at(1)は4要素の配列

data.at(2).push_back(8);
data.at(2).push_back(9);
// data.at(2)は2要素の配列

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  // N × (3 × 3)要素の配列を宣言
  vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

  // 入力
  for (int i = 0; i < N; i++) {
    // i番目の状態を読む
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cin >> data.at(i).at(j).at(k);
      }
    }
  }

  // 'o'の数を数える
  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {

        // 「i番目の状態」「上からj番目」「左からk番目」の要素が'o'か判定
        if (data.at(i).at(j).at(k) == 'o') {
          count++;
        }

      }
    }
  }

   cout << count << endl;
}

//
vector<vector<vector<int>>> data = {
  {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
  },
  {
    {13, 14, 15, 16},
    {17, 18, 19, 20},
    {21, 22, 23, 24},
  },
};

int size1 = data.size();
cout << size1 << endl;  // 2

int size2 = data.at(0).size();
cout << size2 << endl;  // 3

int size3 = data.at(0).at(0).size();
cout << size3 << endl;  // 4

cout << size1 * size2 * size3 << endl;  // 24

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // N×Nのchar型の2次元配列のすべての要素を'-'で初期化
  vector<vector<char>> table(N, vector<char>(N, '-'));

  for (int i = 0; i < M; i++) {
    // 1〜N → 0〜N-1 に変換
    A.at(i)--; B.at(i)--;
    table.at(A.at(i)).at(B.at(i)) = 'o';  // AはBに勝った
    table.at(B.at(i)).at(A.at(i)) = 'x';  // BはAに負けた
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N - 1) {
        cout << endl;  // 行末なら改行
      }
      else {
        cout << " ";  // 行末でないなら空白を出力
      }
    }
  }
}
