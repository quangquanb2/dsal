#include <bits/stdc++.h>
using namespace std;

void build(int node, int l=1, int r=n)
{
    if (l == r) st[node] = arr[l];
    else {
        int mid = (l+r)>>1;
        build(node*2, l, mid);
        build(node*2+1, mid+1, r);
        
        st[node] = st[node*2] + st[node*2+1]; 
    }
}
    
