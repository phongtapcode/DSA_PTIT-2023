#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int heSo, mu;
    Node *next;
};

typedef Node* node;

node createNode(int heSo, int mu)
{
    node res = new Node;
    res -> heSo = heSo;
    res -> mu = mu;
    res -> next = NULL;
    return res;
}

void addBack(node &a, int heSo, int mu)
{
    if(a == NULL)
    {
        a = createNode(heSo, mu);
        return;
    }
    node tmp = a;
    while(tmp -> next != NULL)
        tmp = tmp -> next;
    tmp -> next = createNode(heSo, mu);
}

void init(node &a)
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    while(ss >> s)
    {
        if(s == "+")
            continue;
        int heSo, mu, i;
        heSo = mu = 0;
        for(i = 0; i < s.size(); ++i)
        {
            if(s[i] == '*')
                break;
            heSo = heSo * 10 + s[i] - '0';
        }
        i += 3;
        for(; i < s.size(); ++i)
            mu = mu * 10 + s[i] - '0';
        addBack(a, heSo, mu);
    }
}

int Find(node a, int x)
{
    while(a != NULL)
    {
        if(a -> mu == x)
            return a -> heSo;
        else if(a -> mu < x)
            return 0;
        a = a -> next;
    }
    return 0;
}

void print(node a)
{
    while(a != NULL)
    {
        if(a -> heSo)
            cout << a -> heSo << "*x^" << a -> mu;
        a = a -> next;
        if(a != NULL and a -> heSo)
            cout << " + ";
    }
}

int main()
{
    int t = 1, muMax;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        node A, B, C;
        A = B = C = NULL;
        init(A);
        init(B);
        muMax = max(A -> mu, B -> mu);
        for(int i = muMax; i>=0; --i)
            addBack(C, Find(A, i) + Find(B, i), i);
        print(C);
        cout << endl;
        delete A;
        delete B;
        delete C;
    }
    return 0;
}


