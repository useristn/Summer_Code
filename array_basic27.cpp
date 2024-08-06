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
    // Đếm phân phối
    map<int, int> m;
    for (auto i : a)
    {
        m[i]++;
    }
    for (auto i : m) // Bé in ra bảng phân phối tần số của map theo thứ tự tăng dần của key nha
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}