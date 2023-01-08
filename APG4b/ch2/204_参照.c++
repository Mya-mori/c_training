// 参照先の型 &参照の名前 = 参照先;で参照を宣言できる
// 通常の変数のように参照を宣言するときは参照先を指定する必要がある
// 関数の引数に参照を用いる場合は、その関数を呼び出す時に渡した変数が参照先になる
// 参照先を後から変更することはできない
// 引数が参照になっている関数を呼び出すことを参照渡しという
// 参照渡しは、無駄なコピーを避けたり複数の結果を返したいときに便利

// 参照
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 3;
  int &b = a;  // bは変数aの参照

  cout << "a: " << a << endl;  // aの値を出力
  cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である3が出力される)

  b = 4;  // 参照先の値を変更(aが4になる)

  cout << "a: " << a << endl;  // aの値を出力
  cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である4が出力される)
}

// 参照の複製
int a = 123;
int &b = a;  // 変数aへの参照
int &c = b;  // 変数aへの参照

//
#include <bits/stdc++.h>
using namespace std;

int f(int x) {
  x = x * 2;  // 2. xを2倍
  return x;   // 3. xの値を返す
}

int main() {
  int a = 3;  // "呼び出す側の変数"
  int b = f(a);  // 1. aの値をfに渡し、4. 結果をbに代入
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
}

//
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 3;  // "呼び出す側の変数"
  int b;
    // int b = f(a); を展開
    {
      int x = a;  // aの値がxにコピーされる(引数)
      x *= 2;     // xが2倍される
      b = x;      // xの値がbに代入される(返り値)
    }
  cout << "a: " << a << endl;  // "a: 3"
  cout << "b: " << b << endl;  // "b: 6"
}

// 複数の返り値
#include <bits/stdc++.h>
using namespace std;

// a,b,cの最大値、最小値をそれぞれminimumの参照先、maximumの参照先に代入する
void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
  minimum = min(a, min(b, c));  // 最小値をminimumの参照先に代入
  maximum = max(a, max(b, c));  // 最大値をmaximumの参照先に代入
}

int main() {
  int minimum, maximum;
  min_and_max(3, 1, 5, minimum, maximum);  // minimum, maximumを参照渡し
  cout << "minimum: " <<  minimum << endl;  // 最小値
  cout << "maximum: " <<  maximum << endl;  // 最大値
}



// test
#include <bits/stdc++.h>
using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
  // 呼び出し側のAの各マスを正しい値に修正する
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
  // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる

  // ここにプログラムを追記
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 9; j++){
        if (A.at(i).at(j) != (i + 1) * (j + 1)){
            A.at(i).at(j) = (i + 1) * (j + 1)
            wrong_count++;
        }
        else {
            correct_count++;
        }
    }
  }
}


// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}
