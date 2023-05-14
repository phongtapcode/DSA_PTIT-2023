#include<bits/stdc++.h>
 
using namespace std;


int pos = 0;

inline void print(int inorder[], int preorder[], int l, int r, unordered_map<int, int> &m)
{
    if(l <= r)
    {
        int idx = m[preorder[pos++]];
        print(inorder, preorder, l, idx - 1, m);
        print(inorder, preorder, idx + 1, r, m);
        cout << inorder[idx] << " ";
    }
}

int main()
{
    int t , n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int inorder[n], preorder[n];
        for(int &i : inorder)
            cin >> i;
        for(int &i : preorder)
            cin >> i;
        unordered_map<int, int> m;
        for (int i = 0; i < n; ++i)
            m[inorder[i]] = i;
        pos = 0;
        print(inorder, preorder, 0, n - 1, m);
        cout << endl;
    }
    return 0;
}


