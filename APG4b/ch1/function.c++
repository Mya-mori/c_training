// 関数

#include <bits/stdc++.h>
using namespace std;

// 関数定義
int my_min(int x, int y) {

  if (x < y) {
    return x;
  }
  else {
    return y;
  }

}

int main() {
  int answer = my_min(10, 5);
  cout << answer << endl; // 5
}

// 関数の定義はmain関数よりも前で行う

// 返り値のない関数
#include <bits/stdc++.h>
using namespace std;

// 返り値が無いのでvoidを指定
void hello(string text) {
  cout << "Hello, " << text << endl;
  return;
}

int main() {
  hello("Tom");
  hello("C++");
}

// 引数なし
#include <bits/stdc++.h>
using namespace std;

// 整数の入力を受け取って返す関数
// 引数なし
int input() {
  int x;
  cin >> x;
  return x;
}

int main() {
  int num = input(); // 引数なし
  cout << num + 5 << endl;
}

// 関数のいいところ
// プログラムの重複が避けられる
// 処理のかたまりに名前をつけられる
// 再帰関数が書ける

// 関数のオーバーロード
#include <bits/stdc++.h>
using namespace std;

// 2つの引数のうち最も小さい値を返す
int my_min(int x, int y) {
  if (x < y) {
    return x;
  }
  else {
    return y;
  }
}

// 3つの引数のうち最も小さい値を返す
int my_min(int x, int y, int z) {
  if (x < y && x < z) {
    return x;
  }
  else if (y < x && y < z) {
    return y;
  }
  else {
    return z;
  }
}

int main() {
  int answer = my_min(10, 5); // 2つの引数
  cout << answer << endl; // 5

  answer = my_min(3, 2, 5); // 3つの引数
  cout << answer << endl; // 2
}

// test
// A, B, C の各々の合計点の積

/* input
2
5 7
4 10
9 2
*/
#include <bits/stdc++.h>
using namespace std;

// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
  // ここにプログラムを追記
  // 合計点を num とする
  int num = 0;

  for (int i = 0; i < scores.size(); i++){
    num += scores.at(i);
  }

  return num;
}

// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
  // ここにプログラムを追記
  cout << sum_a * sum_b * sum_c << endl;
}

// -------------------
// ここから先は変更しない
// -------------------

// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}

int main() {
  // 科目の数Nを受け取る
  int N;
  cin >> N;

  // それぞれのテストの点数を受け取る
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);

  // それぞれの合計点を計算
  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);

  // プレゼントの予算を出力
  output(sum_A, sum_B, sum_C);
}
