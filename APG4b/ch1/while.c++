// sample
while (条件式) {
  処理
}

int i = 0; // カウンタ変数
while (i < N) {
  処理
  i++;
}

// sample 無限ループ
#include <bits/stdc++.h>
using namespace std;

int main() {

  while (true) {
    cout << "Hello" << endl;
    cout << "AtCoder" << endl;
  }

}

// sample 無限ループ
#include <bits/stdc++.h>
using namespace std;

int main() {

  int i = 1;

  while (true) {
    cout << i << endl;
    i++; //ループのたびに1増やす
  }

}

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {

  int i = 1;

  // iが5以下の間だけループ
  while (i <= 5) {
    cout << i << endl;
    i++;
  }

}

// sample 0~4
#include <bits/stdc++.h>
using namespace std;

int main() {

  // iを0からはじめる
  int i = 0;

  // iが5未満の間ループ
  while (i < 5) {
    cout << "Hello" << endl;
    i++;
  }

}

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0; // 合計点を表す変数
  int x;       // 入力を受け取る変数
  int i = 0;   // カウンタ変数

  while (i < N) {
    cin >> x;
    sum += x;
    i++;
  }

  cout << sum << endl;
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  cout << "A:";
  int i = 0;
  while (i < A){
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  int j = 0;
  while (j < B){
    cout << "]";
    j++;
  }
  cout << endl;
}
