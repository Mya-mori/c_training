/*
- { }で囲われた部分のところをブロックという
- 変数が使える範囲のことをスコープという
- 変数のスコープは「変数が宣言されてからそのブロックが終わるまで」
- スコープが重なっている場合は最も内側のブロックで宣言された変数が選ばれる
*/

// sample
// errorを吐く
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 5; // xのスコープはこの行からmain関数のブロックの終わりまで

  if (x == 5) {
    int y = 10; // yのスコープはこの行からif文のブロックの終わりまで
    cout << x + y << endl;
  }

  cout << x << endl;
  cout << y << endl; // yはスコープ外になる

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 10;

  if (x == 5) {
    int y = 10;
    cout << x + y << endl;

    // string y = "hello" 同じブロックに変数yがあるので宣言できない
  }

  if (x == 10) {
    string y = "hello"; // ブロックが違うので変数yを宣言できる
    cout << x << y << endl;
  }
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }

  int price, N;
  cin >> price >> N;
  cout << price * N << endl;
}
