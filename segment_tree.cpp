#include <bits/stdc++.h>
using namespace std;

void buildSum(int node, int l=1, int r=n)
{
    if (l == r) st[node] = arr[l];
    else {
        int mid = (l+r)>>1;
        build(node*2, l, mid);
        build(node*2+1, mid+1, r);
        
        st[node] = st[node*2] + st[node*2+1]; 
    }
}

int querySum(int node, int l, int r, int tl, int tr)
{
    if (l <= tl && tr <= r) return st[node];
    if (tl > r || tr < l) return 0;
    int mid = (tl+tr)>>1;
    return querySum(node*2, l, r, tl, mid) + querySum(ode*2+1, l, r, mid+1, tr);
}

void update(int node, int tl, int tr, int k, int vl)
{
    if (tl == tr) st[node] = vl;
    else {
        int mid = (tl+tr)>>1;
        if (k <= mid) update(node*2, tl, mid, k, vl);
        else update(node*2+1, mid+1, tr, k, vl);
        
        st[node] = st[node*2] + st[node*2+1];
    }
}
    
