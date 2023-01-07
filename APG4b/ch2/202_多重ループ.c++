// 多重ループ
int main() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "i:" << i << ", j:" << j << endl;
    }
  }
}

// 3重ループ
#include <bits/stdc++.h>
using namespace std;

int main() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << "i:" << i << ", j:" << j << ", k:" << k << endl;
      }
    }
  }
}

//
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(3), B(3);

  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }

  for (int i = 0; i < 3; i++) {
    cin >> B.at(i);
  }

  // 答えを保持する変数
  bool answer = false;

  // ここにプログラムを追記
  bool answer = false;

  for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
          if (A.at(i) == B.at(j)){
              answer = true;
          }
      }
  }

  if (answer) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}

// sample
bool answer = false;

if (A.at(0) == B.at(0) || A.at(0) == B.at(1) || A.at(0) == B.at(2) ||
    A.at(1) == B.at(0) || A.at(1) == B.at(1) || A.at(1) == B.at(2) ||
    A.at(2) == B.at(0) || A.at(2) == B.at(1) || A.at(2) == B.at(2)){
    ans = true;
}

is (answer){
    cout << "YES" << endl;
}
else {
    cout << "NO" << endl;
}

// loop
for (int i = 0; i < 3; i++){

    if (A.at(i) == B.at(0) || A.at(i) == B.at(1) || A.at(i) == B.at(2)){
        answer = true;
    }
}

// 2loop
bool answer = false;

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        if (A.at(i) == B.at(j)){
            answer = true;
        }
    }
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++) {
      cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
      cin >> P.at(i);
    }

    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    // ここにプログラムを追記
    // カウントの初期化
    int count = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (A.at(i) + P.at(j) == S){
                count++;
            }
        }
    }

    cout << count << endl;
}
