#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    /*
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    */
    // Bé có thể nhập mảng bằng cách này nha
    for (auto &i : a)
    {
        cin >> i;
    }
    // Khởi tạo mảng f chứa 100 số Fibonacci đầu tiên
    vector<long long> f(100);
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    bool check = true; // Biến check để kiểm tra xem trong mảng a có số Fibonacci không
    for (auto i : a)
    {
        for (auto j : f)
        {
            if (i == j) // Nếu i == j có nghĩa là trong mảng a có a[i] là số Fibonacci
            {
                cout << i << " ";
                check = false;
                break;
            }
        }
    }
    // Bé cũng có thể dùng vòng lặp như này nữa nha
    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (a[i] == f[j])
            {
                cout << a[i] << " ";
                check = false;
                break;
            }
        }
    }
    */
    if (check) // Nếu trong mảng a không có số Fibonacci nào thì bé in ra NONE nha
    {
        cout << "NONE";
        return 0;
    }
    return 0;
}