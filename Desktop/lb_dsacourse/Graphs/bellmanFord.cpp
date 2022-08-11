#include <bits/stdc++.h>
using namespace std;

struct node
{
    int u;
    int v;
    int wt;
    node(int first, int second, int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};

int main()
{
    int n = 6;
    int e = 7;
    vector<node> edges;
    edges.push_back(node(0, 1, 5));
    edges.push_back(node(1, 2, -2));
    edges.push_back(node(1, 5, -3));
    edges.push_back(node(2, 4, 3));
    edges.push_back(node(3, 2, 6));
    edges.push_back(node(3, 4, -2));
    edges.push_back(node(5, 3, 1));
    int src = 0;
    int inf = 10000000;

    vector<int> dist(n, 1e9);
    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto it : edges)
        {
            if (dist[it.u] + it.wt < dist[it.v])
            {
                dist[it.v] = dist[it.u] + it.wt;
            }
        }
    }
    // check for -ve cycle
    int fl = 0;
    for (auto it : edges)
    {
        if (dist[it.u] + it.wt < dist[it.v])
        {
            cout << -1;
            fl = 1;
            break;
        }
    }

    if (!fl)
    {
        for (int i = 0; i < n; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;
    }

    return 0;
}