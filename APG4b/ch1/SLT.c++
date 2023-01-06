// STL 関数等がまとまっているもの

// 最小の値を取り出す
// 正直に書く
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 5;

    int answer;
    if (a < b) {
        answer = a;
    }
    else {
        answer = b;
    }

    cout << answer << endl;
}

// STL tandard Template Library
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 5;

    int answer = min(a, b); // min関数

    cout << answer << endl;
}

// 関数例
// min
// max
// swap
// reverse
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end()); // {3, 5, 1}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

// sort
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end()); // {1, 2, 2, 5}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

// sort & reverse
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end()); // {1, 2, 2, 5}
    reverse(vec.begin(), vec.end()); // {5, 2, 2, 1}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  cout << max(max(A, B), C) - min(min(A, B), C) << endl;

}
