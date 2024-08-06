#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    a.insert(a.begin() + k - 1, x); // Chèn x vào vị trí k
    // Vì k bắt đầu từ 1 nma vector bắt đầu từ 0 nên vị trí chính xác cần chènlà k - 1 nha bé
    for (auto i : a)
    {
        cout << i << " "; // In ra mảng a sau khi chèn x vào vị trí k
    }
    return 0;
}