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
        m[i]++; // Bé tạo một map với key là giá trị của mảng a, value là số lần xuất hiện của giá trị đó
    }
    cout << m.size(); // Kích thước của map cũng chính là số lượng phần tử khác nhau trong mảng a nha bé
    return 0;
}