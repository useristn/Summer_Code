#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7; // Bé khai báo mod = 10^9 + 7 là hằng số nha
int main()
{
    int n;
    cin >> n;
    int x;
    long long sum = 0;
    long long pro = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = (sum + x) % mod; // Mỗi lần tính tổng từng phần tử thì bé đều lấy dư sum cho mod nha
        pro = (pro * x) % mod; // Tương tự với tính nhân
    }
    cout << sum << endl
         << pro;
    return 0;
}