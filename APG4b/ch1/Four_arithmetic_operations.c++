/*
+	足し算
-	引き算
*	掛け算
/	割り算
%	割った余り
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << 1 + 1 << endl; // 2
  cout << 3 - 4 << endl; // -1
  cout << 2 * 3 << endl; // 6
  cout << 7 / 3 << endl; // 2
}

// 優先順位
/*
優先順位	高い	低い
演算子	   * / %	+ -
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << (1 + 2) * 3 << endl; // 9
}

// test
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << (100 * (100 + 1)) / 2 << endl;
}
