// for
for (初期化; 条件式; 更新) {
  処理
}

for (int i = 0; i < N; i++) {
  処理
}

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {

  int j = 0;
  while (j < 3) {
    cout << "Hello while: " << j << endl;
    j++;
  }

  for (int i = 0; i < 3; i++) {
    cout << "Hello for: " << i << endl;
  }

}

// break
#include <bits/stdc++.h>
using namespace std;

int main() {

  // breakがなければこのループは i == 4 まで繰り返す
  for (int i = 0; i < 5; i++) {

    if (i == 3) {
      cout << "ぬける" << endl;
      break; // i == 3 の時点でループから抜ける
    }

    cout << i << endl;
  }

  cout << "終了" << endl;
}

// continue
#include <bits/stdc++.h>
using namespace std;

int main() {

  for (int i = 0; i < 5; i++) {

    if (i == 3) {
      cout << "とばす" << endl;
      continue; // i == 3 のとき これより後の処理をとばす
    }

    cout << i << endl;
  }

  cout << "終了" << endl;
}

// nest
#include <bits/stdc++.h>
using namespace std;

int main() {

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "i: " << i << ", j:" << j << endl;
    }
  }

}

// test
/* inpinaut
3
2
+ 1
* 3
/ 2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    int N, A;
    cin >> N >> A;

    // 反復処理
    for (int i = 0; i < N; i++){

        // 初期値
        string op;
        int num;
        cin >> op >> num;

        // +
        if (op == "+"){
            A += num;
        }

        // -
        else if (op == "-"){
            A -= num;
        }

        // *
        else if (op == "*"){
            A *= num;
        }

        // /
        else if (op == "/" && num != 0){
              A /= num;
        }
        else {
            cout << "error" << endl;
            break;
        }

    cout << i + 1 << ":" << A << endl;
    }

}