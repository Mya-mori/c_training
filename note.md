## input

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 単体
    int n;
    cin >> n;

    // 横一列
    int A[N];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
}
```


## while

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int A[210];

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    int count = 0;
    while (true){
        bool exist_odd = false;
        for (int i = 0; i < n; i++){
            if (A[i] % 2 != 0){ // 奇数判定
                exist_odd = true;
            }
        }
        if (exist_odd) { // 奇数があったら終わり
            break;
        }

        for (int i = 0; i < n; i++){
            A[i] /= 2;
        }

        count++;
    }

    cout << count << endl;
}
```