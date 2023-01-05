/*
if (条件式1) {
  処理1
}
else if (条件式2) {
  処理2
}
else {
  処理3
}
*/

/*
演算子	意味
x == y	xとyは等しい
x != y	xとyは等しくない
x > y	xはyより大きい
x < y	xはyより小さい
x >= y	xはy以上
x <= y	xはy以下
*/

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	if (x < 10) {
		cout << "xは10より小さい" << endl;
	}

	cout << "end" << endl;
}

// sample2
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  if (x < 10) {
    cout << "xは10より小さい" << endl;
  }

  if (x >= 20) {
    cout << "xは20以上" << endl;
  }

  if (x == 5) {
    cout << "xは5" << endl;
  }

  if (x != 100) {
    cout << "xは100ではない" << endl;
  }

  cout << "終了" << endl;
}

// sample3
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (!(x == y)) {
    cout << "xとyは等しくない" << endl;
  }

  if (x == 10 && y == 10) {
    cout << "xとyは10" << endl;
  }

  if (x == 0 || y == 0) {
    cout << "xかyは0" << endl;
  }

  cout << "終了" << endl;
}

// sample4 if~else if~else
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  if (x < 10) {
    cout << "xは10より小さい" << endl;
  }
  else if (x > 20) {
    cout << "xは10より小さくなくて、20より大きい" << endl;
  }
  else if (x == 15) {
    cout << "xは10より小さくなくて、20より大きくなくて、15である" << endl;
  }
  else {
    cout << "xは10より小さくなくて、20より大きくもなくて、15でもない" << endl;
  }
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
	// 入力
	int A, B;
	string op;
	cin >> A >> op >> B;

	// 処理
	if (op == "+") {
	  cout << A + B << endl;
	}
	else if (op == "-") {
	  cout << A - B << endl;
	}
	else if (op == "*") {
	  cout << A * B << endl;
	}
	else if (op == "/" && B != 0) {
	  cout << A / B << endl;
	}
	else {
		cout << "error" << endl;
	}
}
