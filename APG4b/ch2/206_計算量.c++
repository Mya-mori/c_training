// 計算量
// 時間計算量
// 空間計算量

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;
  for (int i = 1; i <= N; i++) {
    sum += i;
  }
  cout << sum << endl;
}

// 時間計算量 N回の入力に依存する → O(N)
// 空間計算量 O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0;

  // O(N^2)
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      sum += i * j;
    }
  }

  // O(N)
  for (int i = 0; i < N; i++) {
    sum += i;
  }

  // O(N)
  for (int i = 0; i < N; i++) {
    sum *= i;
  }

  cout << sum << endl;
}


// N(N^2)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> table(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      table.at(i).at(j) = (i + 1) * (j + 1);  // N×N回実行される
    }
  }

  // 出力
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j != N - 1) {
        cout << " ";
      }
      else {
        cout << endl;
      }
    }
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  // O(N)
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  // O(N log N)
  sort(A.begin(), A.end());

  // O(N)
  for (int i = 0; i < N; i++) {
    cout << A.at(i) << endl;
  }
}

// test
#include <bits/stdc++.h>
using namespace std;

// O(1)
int f0(int N) {
  return 1;
}

// O(N+M)
int f1(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    s++;
  }
  for (int i = 0; i < M; i++) {
    s++;
  }
  return s;
}

// O(NlogN)
int f2(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
      int t = N;
      int cnt = 0;
      while (t > 0) {
        cnt++;
        t /= 2;
      }
      s += cnt;
  }
  return s;
}

// O(1)
int f3(int N) {
  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s++;
    }
  }
  return s;
}

// O(N^2)
int f4(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s += i + j;
    }
  }
  return s;
}

// O(NM     )
int f5(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += i + j;
    }
  }
  return s;
}

int main() {
  int N, M;
  cin >> N >> M;

  int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;

  // 計算量が最も大きいもの1つだけコメントアウトする
  a0 = f0(N);
  a1 = f1(N, M);
  a2 = f2(N);
  a3 = f3(N);
  a4 = f4(N);
  a5 = f5(N, M);

  cout << "f0: " << a0 << endl;
  cout << "f1: " << a1 << endl;
  cout << "f2: " << a2 << endl;
  cout << "f3: " << a3 << endl;
  cout << "f4: " << a4 << endl;
  cout << "f5: " << a5 << endl;
}
