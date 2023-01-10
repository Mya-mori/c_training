// pair
#include <bits/stdc++.h>
using namespace std;

int main() {
  pair<string, int> p("abc", 3);
  cout << p.first << endl;  // abc

  p.first = "hello";
  cout << p.first << endl;  // hello
  cout << p.second << endl; // 3

  p = make_pair("*", 1);

  string s;
  int a;
  tie(s, a) = p;
  cout << s << endl;  // *
  cout << a << endl;  // 1
}

// tuple
#include <bits/stdc++.h>
using namespace std;

int main() {
  tuple<int, string, bool> data(1, "hello", true);
  get<2>(data) = false;
  cout << get<1>(data) << endl;  // hello

  data = make_tuple(2, "WORLD", true);

  int a;
  string s;
  bool f;
  tie(a, s, f) = data;
  cout << a << " " << s << " " << f << endl;  // 2 WORLD 1
}

// auto
#include <bits/stdc++.h>
using namespace std;

string concat(string a, string b) {
  return a + b;
}

int main() {
  string a = "Hello,";
  string b = "World";
  auto ab = concat(a, b);  // string型
  cout << ab << endl;

  vector<int> c = {1, 2, 3};
  auto d = c;  // vector<int>型

  for (auto elem : d) {
    // elemはint型
    cout << elem << endl;
  }
}
