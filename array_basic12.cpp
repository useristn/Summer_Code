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
    // Bé khởi tạo 2 biến nmin và nmax để lưu giá trị nhỏ nhất cuối cùng và lớn nhất đầu tiên trong mảng a nha
    int nmin = INT_MAX, nmax = INT_MIN;
    // Bé khởi tạo thêm 2 biến pmin và pmax để lưu vị trí của phần tử nhỏ nhất cuối cùng và lớn nhất đầu tiên trong mảng a
    int pmin = 0, pmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (nmin >= a[i]) // Phần tử nhỏ nhất cuối cùng trong mảng a thì bé xét điều kiện có dấu = nha
        {
            nmin = a[i];
            pmin = i;
        }
        if (nmax < a[i]) // Còn phần tử lớn nhất đầu tiên trong mảng a thì bé không cần xét điều kiện có dấu = nha
        {
            nmax = a[i];
            pmax = i;
        }
    }
    cout << pmin << " " << pmax;
    return 0;
}