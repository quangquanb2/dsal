int arr[n] = {...};
int pre[n+1];

void buildPresum()
{
    pre[0] = 0;
    
    for (int i=1; i<=n; i++)
    {
        pre[i] += (pre[i-1] + arr[i-1]);
}
