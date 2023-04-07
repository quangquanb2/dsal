#include <bits/stdc++.h>

void dfs(int node)
{
    if (visited[node]) return;
    visited[node] = true;
    for (auto &e : gr[node])
        dfs(e);
}

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    
    while (!q.empty())
    {
        int u = q.front(); q.pop();
        for (auto &e : gr[u])
        {
            if (!visited[e])
            {    
                q.push(e);
                visited[e] = true;
            }
        }
    }
}
