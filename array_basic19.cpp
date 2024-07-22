#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    // Bé có thể dùng hàm reverse có sẵn của thư viện <algorithm> để đảo ngược mảng a nha
    /*
    reverse(a.begin(), a.end());
    for (auto i : a)
    {
        cout << i << " ";
    }
    */
    // Hoặc là bé có thể dùng 1 mảng b để lưu giá trị của mảng a khi duyệt ngược nha
    vector<int> b;
    for (int i = n - 1; i >= 0; i--)
    {
        b.push_back(a[i]);
    }
    for (auto i : b)
    {
        cout << i << " ";
    }
    return 0;
}