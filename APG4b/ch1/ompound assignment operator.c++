// 複合代入演算子
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 5;
  x += 1 + 2; // x += (1 + 2)
  cout << x << endl; // 8
}

// sample
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 5;
  a -= 2;
  cout << a << endl; // 3

  int b = 3;
  b *= 1 + 2;
  cout << b << endl; // 9

  int c = 4;
  c /= 2;
  cout << c << endl; // 2

  int d = 5;
  d %= 2;
  cout << d << endl; // 1
}

// インクリメントとデクリメント
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 5;
  x++;
  cout << x << endl; // 6

  int y = 5;
  y--;
  cout << y << endl; // 4
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // 2.の出力
  x *= a + b;
  cout << x << endl;

  // 3.の出力
  x *= x;
  cout << x << endl;

  // 4.の出力
  x--;
  cout << x << endl;
}
