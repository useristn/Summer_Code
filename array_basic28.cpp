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
    for (auto i : a) // Bé in ra bảng phân phối tần số của map theo thứ tự của mảng a nha
    {
        if (m[i] != 0)
        {
            cout << i << " " << m[i] << endl;
            m[i] = 0;
        }
    }
    return 0;
}