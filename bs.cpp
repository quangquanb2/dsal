bool check(int vl, x)
{
    return vl >= x;
}

void solve()
{
    int arr[] = {...};
    int x, l=arr[0], r=arr[n-1];
    
    while (l < r)
    {
        int mid = (l+r)>>1;
        if (check(mid,x)) r = mid;
        else l = mid+1;
    }
}
