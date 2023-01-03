#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // 入力
    cin >> a >> b;
    int ans = 1;

    // b回計算を回す
    for (int i = 0; i < b; i++){
    // ansにaをかける
        ans *= a;
    }

    cout << ans << '\n';
}