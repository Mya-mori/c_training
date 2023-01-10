// オーバーフロー
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a = 2000000000;
  int b = a * 2;
  cout << b << endl;

  int c = (a * 10 + 100) / 100;
  cout << c << endl;
}

// int64_t
#include <bits/stdc++.h>
using namespace std;
int main() {
  int64_t a = 2000000000;
  int64_t b = a * 2;
  cout << b << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  cout << 2000000000 * 2 << endl;     // int * int         -> int
  cout << 2000000000LL * 2LL << endl; // int64_t * int64_t -> int64_t
  cout << 2000000000LL * 2 << endl;   // int64_t * int     -> int64_t
}
