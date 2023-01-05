// string
// 文字列型
// string.size() 文字列の長さ
// string.at(i)  i文字目にアクセス

#include <bits/stdc++.h>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1;
  str2 = ", world!";

  cout << str1 << str2 << endl;
}


// input Hello
// output Hello World

#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";
  cout << str.size() << endl;
}

// output 5

#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "hello";
  cout << str.at(0) << endl; // h
  cout << str.at(4) << endl; // o
}


// output h, o

// char
// 文字型
// 1文字のデータのみを保持

#include <bits/stdc++.h>
using namespace std;

int main() {
  char c = 'a';
  cout << c << endl; // a
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";

  char c = str.at(0); // char型の値が得られる

  cout << c << endl; // H
}

// 文字列の書き換えと比較
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";

  str.at(0) = 'M'; // char型の'M'
  cout << str << endl; // Mello

  if (str.at(1) == 'e') {
    cout << "AtCoder" << endl;
  }
}

/* output
Mello
AtCoder
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  int count = 0;
  // 文字列の長さ分ループする
  for (int i = 0; i < str.size(); i++) {
    // oのみカウントを行う
    if (str.at(i) == 'O') {
      count++;
    }
  }

  cout << count << endl;
}

// input  LOOOOL
// output 4

// 注意点
#include <bits/stdc++.h>
using namespace std;

int main() {
  string x = "hello";
  cout << x.at(10) << endl;
}

// error
// terminate called after throwing an instance of 'std::out_of_range'
// what():  basic_string::at: __n (which is 10) >= this->size() (which is 5)

// 全角文字
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "こんにちは";
  cout << s.at(0) << endl;

  char c = 'あ';
  cout << c << endl;
}

// 全角文字は文字化けとして出力される


// "文字列"s.size()とする必要がある
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";
  cout << str.size() << endl; // 5
  cout << "Hello"s.size() << endl; // 5（sを末尾につける）
  cout << "Hello".size() << endl; // できない
}

// string と char は結合できる
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";

  char c = str.at(0);
  cout << str + c << endl; // HelloH
}

// string を 1文字ずつ char に抜き出す
#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b;
  cin >> a >> b;

  cout << a << endl;
  cout << b << endl;
}

// エスケープシーケンス
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "こんにちは\nAtCoder";
}

// \n で改行を行う
/* output
こんにちは
AtCoder
*/

// 行単位での入力
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る

  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
}

/* input
I have a pen.
I have an apple.
*/

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int count = 1;
  // ループ処理 S.size()
  for (int i = 0; i < S.size(); i++){

    // プラスの処理
    if (S.at(i) == '+'){
      count++;
    }
    // マイナスの処理
    else if (S.at(i) == '-') {
      count--;
    }
  }

  cout << count << endl;
}

// input
// 1+1+1-1
