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
    // Sau khi sắp xếp mảng a theo chiều tăng dần thì phần tử lớn thứ nhất và thứ hai lần lượt là a[n - 1] và a[n - 2] nha bé
    sort(a.begin(), a.end());
    cout << a[n - 1] << " " << a[n - 2];
    return 0;
}