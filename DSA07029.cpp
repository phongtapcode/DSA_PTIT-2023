#include<bits/stdc++.h>
 
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        stack<char> st;
        string num, tmp, a, ans;
        ans = "";
        for(char &i : s)
        {
            if(i == ']')
            {
                num = tmp = "";
                while(st.size() and st.top() != '[')
                {
                    tmp += st.top();
                    st.pop();
                }
                if(st.size())
                    st.pop();
                while(st.size() and isdigit(st.top()))
                {
                    num = st.top() + num;
                    st.pop();
                }
                a = "";
                if(num == "")
                    num = "1";
                int limit = stoi(num);
                for(int j = 1; j <= limit; ++j)
                    a += tmp;
                for(int j = a.size() - 1; j>=0; --j)
                    st.push(a[j]);
            }
            else
                st.push(i);
        }
        while(st.size())
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}

