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
    for (int i = 0; i < n; i++)
    {
        bool check = false; // Bé khởi tạo biến check để kiểm tra xem có phần tử nào khác dấu với a[i] hay không nha
        // Bé kiểm tra phần bên trái của a[i]
        if (i > 0) // Điều kiện là i > 0 để tránh trường hợp i = 0 mà a[i - 1] là phần tử cuối cùng của mảng
        {
            if ((a[i] < 0 && a[i - 1] >= 0) || (a[i] >= 0 && a[i - 1] < 0))
            {
                check = true;
            }
        }
        // Bé kiểm tra phần bên phải của a[i]
        if (i < n - 1) // Điều kiện là i < n - 1 để tránh trường hợp i = n - 1 khi đó a[i + 1] không tồn tại
        {
            if ((a[i] < 0 && a[i + 1] >= 0) || (a[i] >= 0 && a[i + 1] < 0))
            {
                check = true;
            }
        }
        if (check) // Nếu mà có ít nhất 1 phần tử khác dấu với a[i] thì bé in ra a[i] luôn nha
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}