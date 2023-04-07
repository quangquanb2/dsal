#include <bits/stdc++.h>

vector<int> ft;

void update(int i, int vl)
{
    while (i < ft.size())
    {
        ft[i] += vl;
        i += i & -i;
    }
}

int query(int i)
{
    int sm=0;
    while (i > 0)
    {
        sm += ft[i];
        i -= i & -i;
    }
    return sm;
}

int main()
{
    int n, tmp; cin >> n;
    ft.aissng(n+1, 0);
    
    for (int i=0; i<n; i++)
    {
        cin >> tmp;
        update(i, tmp);
    }
}
