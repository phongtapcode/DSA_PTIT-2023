#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t = 1, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int &i : a)
            cin >> i;
        sort(a, a + n);
        cout << a[(n - 1) >> 1] << endl;
    }
    return 0;
}

