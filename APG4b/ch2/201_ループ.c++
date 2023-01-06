// ループ時の決め事
// ループ処理を書くときの3ステップ
// 1.ループを使わずに書く
// 2.パターンを見つける
// 3.ループで書き直す
// 配列の要素を取り出しながらループする範囲for文

for (配列の要素の型 変数名 : 配列変数) {
  // 各要素に対する処理
}

// input
// a
// x_1,x_2,x_3,x_4,x_5

// output
// aと同じ値の個数を出力

#include <bits/stdc++.h>
using namespace std;

int main(){
    // input
    int a;
    cin >> a;

    vector<int> data(5);
    for (int i = 0; i < data.size(); i++){
        cin >> data.at(i);
    }

    // 初期化
    int count = 0;
    // 処理
    for (int i = 0; i < data.size(); i++){
        if (a == data.at(i)){
            count++;
        }
    }

    cout << count << endl;
}

// for (配列の要素の型 変数名 : 配列変数) {
//   // 各要素に対する処理
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1,2,3,4};
    for (int x: a){
        cout << x << endl;
    }
}

// 範囲 for で のbreak
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 3, 1, 2, 5, 10};
  for (int x : a) {
    if (x == 1) {
      continue;
    }

    if (x == 5) {
      break;
    }

    cout << x << endl;
  }
}

//
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl;
}

//
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int count = 0;
  while (N > 0) {
    // 2で割り切れなければループを抜ける
    if (N % 2 > 0) {
      break;
    }
    N = N / 2;
    count++;
  }
  cout << count << endl;
}

// test

#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
      cin >> data.at(i);
    }

    bool ans = false;

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
    for (int i = 0; i < 4; i++){
        if (data.at(i) == data.at(i+1)){
            ans = true;
        }

    }

    if (ans) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
