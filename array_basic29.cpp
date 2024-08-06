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
    int val = 0;
    for (auto i : m)
    {
        val = max(val, i.second); // Giá trị lớn nhất của map cũng chính là giá trị xuất hiện nhiều nhất trong mảng a nha bé
    }
    for (auto i : m)
    {
        if (i.second == val) // Bé tìm giá trị lớn nhất trong map
        {
            cout << i.first << " " << i.second; // Rồi in ra cặp key-value của giá trị lớn nhất trong map nha bé
            break;
        }
    }
    return 0;
}