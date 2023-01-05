// True, False は 1, 0 の数値に変換される
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << (5 < 10) << endl; // 真
  cout << (5 > 10) << endl; // 偽
}
/* output
1 - True
0 - False
*/

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {

  // 1は真を表すのでhelloと出力される
  if (1) {
    cout << "hello" << endl;
  }

  // 0は偽を表すのでこのifの中は実行されない
  if (0) {
    cout << "world" << endl;
  }

}

//
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10; // xが10未満のときtrue そうでないときfalseになる
  bool c = false;

  if (a && b) {
    cout << "hello" << endl;
  }
  if (c) { // false
    cout << "world" << endl;
  }
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true; // true または false
  bool b = false; // true または false
  bool c = true; // true または false

  // ここから先は変更しないこと

  if (a) { // need
    cout << "At";
  }
  else {
    cout << "Yo";
  }

  if (!a && b) {
    cout << "Bo";
  }
  else if (!b || c) { // need
    cout << "Co";
  }

  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  else if (!a || c) { // need
    cout << "der";
  }

  cout << endl;
}