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
    for (int i = 0; i < n / 2; i++) // Bé dùng vòng lặp for để kiểm tra xem phần bên trái có đối xứng với phần bên phải hay không
    {
        if (a[i] != a[n - i - 1]) // Phần đối xứng của a[i] là a[n - i - 1] á bé
        {
            // Nếu mà mảng không đối xứng thì bé in ra NO rồi return 0 luôn để kết thúc chương trình nha
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}