#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    int len = s.length();
    vector<bool> tick(len, false); 
    stack<int> st;

    for(int i = 0; i < len; i++){
        if(s[i] == '(') st.push(i);
        else if(!st.empty()){
            tick[i] = true;
            tick[st.top()] = true;
            st.pop();
        }
    }
    int cnt=0;
    int res = 0;
    for(int i = 0; i < len; i++){
        if(tick[i]) cnt++;
        else cnt = 0;
        res = max(res, cnt);
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}
