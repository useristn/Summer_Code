#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    // Mảng cộng dồn s[i] = a[0] + a[1] + ... + a[i]
    vector<int> s(n);
    s[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        s[i] = s[i - 1] + a[i]; // s[i] = a[0] + a[1] + ... + a[i]
    }
    s[-1] = 0;                       // Để tránh trường hợp i = 0 thì s[i - 1] không tồn tại
    for (int i = 0; i <= n - k; i++) // Dãy con liên tiếp gồm k phần tử xuất phát từ 0 tới n - k á bé
    {
        cout << s[i + k - 1] - s[i - 1] << " "; // In ra tổng của dãy con liên tiếp gồm k phần tử
        // Sau khi bé tạo được mảng cộng dồn, tổng từ a[i] đến a[j] = s[j] - s[i - 1]
        // i + k - 1 là phần tử cuối cùng của dãy con liên tiếp gồm k phần tử
        // Ví dụ: a = {1, 2, 3, 4, 5}, k = 3
        // Bé tạo được s = {1, 3, 6, 10, 15}
        // Dãy con liên tiếp gồm 3 phần tử:
        // 1 2 3 => tổng = s[2] - s[-1] = 6 - 0 = 6
        // 2 3 4 => tổng = s[3] - s[0] = 10 - 1 = 9
        // 3 4 5 => tổng = s[4] - s[1] = 15 - 3 = 12
        // i = 0 => i + k - 1 = 2
    }
    return 0;
}