// 配列
// vector<型> 配列変数名;で配列変数を宣言できる
// 配列変数名 = { 要素1, 要素2, ... };で配列変数に値を代入できる
// 配列変数.at(i)でi番目の要素にアクセスできる
// 配列変数.size()で配列の要素数を取得できる
// vector<型> 配列変数名(要素数)と書くと指定した要素数で配列を初期化できる

vector<int> vec(N);
for (int i = 0; i < N; i++) {
  cin >> vec.at(i);
}

// 配列と文字列
#include <bits/stdc++.h>
using namespace std;

int main() {

  // 文字列
  string str; // 文字列変数を宣言

  str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入

  cout << str.at(0) << endl; // 1つ目である'a'を出力

  cout << str.size() << endl; // 文字列の長さである4を出力


  // 配列
  vector<int> vec; // int型の配列変数vecを宣言

  vec = { 25, 100, 64 }; // 25, 100, 64 という整数(int)の列を代入

  cout << vec.at(0) << endl; // 1つめである25を出力

  cout << vec.size() << endl; // 配列の長さである3を出力
}

// 宣言
vector<型> 配列変数名; // 型の配列変数名の配列ができる

// 変数への代入
配列変数 = { 要素1, 要素2, ... };

// 変数のサイズ
配列変数.size();

// 変数の受け取り
// 1, 2は同様の処理
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  cout << a1 + a2 + a3 << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 3個の入力を受け取れるように 3要素の配列 {0, 0, 0} で初期化
  vector<int> vec(3);

  // atを使って1つずつ入力
  cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

  // 和を出力
  cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;
}

// 配列変数への入力
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 100要素の配列で初期化
  vector<int> vec(100);

  // 100個の入力を受け取る
  for (int i = 0; i < 100; i++) {
    cin >> vec.at(i);
  }

}

// 配列のメリット
// 大量のデータを扱うことができる

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> math(N); // 数学点数データ
    vector<int> english(N); // 英語点数データ

    for (int i = 0; i < N; i++){
        cin >> math(i);
    }

    for (int i = 0; i < N; i++){
        cin >> english(i);
    }

    // 合計点
    for (i = 0; i < N; i++){
        cout << math.at(i) + math.at(i) << endl;
    }
}

// 初期値の指定
vector<型> 配列名(要素数, 初期値);
vector<int> vec(3, 5);
vec {5, 5, 5}

// 要素の追加
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec = { 1, 2, 3 };

  vec.push_back(10); // 末尾に10を追加

  // vecの全要素を出力
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}

// 配列同士の比較
// 比較する際は配列変数同士を比べる必要がある
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec1 = { 1, 2, 3 };
  vector<int> vec2 = { 1, 2, 3 };

  if (vec1 == vec2) {
    cout << "OK" << endl;
  }

  /*
  ↓これはコンパイルエラーになる
  if (vec1 == { 1, 2, 3 }) {
    cout << "NG" << endl;
  }
  */
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  // input
  int N;
  cin >> N;

  // 配列
  vector<int> score(N);

  // 各学生のテストを代入する
  for (int i = 0; i < N; i++){
      cin >> score.at(i);
  }

  // 合計点を取得する
  int sum = 0;
  for (int i = 0; i < N; i++){
      sum += score.at(i);
  }

  int avg = 0;
  avg = sum / N;

  // 平均点との乖離を求める
  for (int i = 0; i < N; i++){
    if (score.at(i) - avg > 0){
      cout << score.at(i) - avg << endl;
    }
    else {
      cout << avg - score.at(i) << endl;
    }
  }
}
