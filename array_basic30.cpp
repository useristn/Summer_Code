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
    for (auto i : a) // Bé tìm giá trị lớn nhất (ưu tiên thứ tự trong mảng a nha)
    {
        if (m[i] == val)
        {
            cout << i << " " << m[i]; // Rồi in ra cặp key-value với i là key và m[i] là value của giá trị lớn nhất trong map nha bé
            break;
        }
    }
    return 0;
}