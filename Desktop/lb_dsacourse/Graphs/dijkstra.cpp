#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int, int>> graphh[N];

void dijkstra(int source)
{
    vector<int> vis(N, 0);
    vector<int> dist(N, INF);

    set<pair<int, int>> st;

    st.insert({0, source});
    dist[source] = 0;

    while (st.size() > 0)
    {
        auto node = *st.begin(); // set ke top elemnt ko nikalne ka trika
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto child : graphh[v])
        {
            int child_v = child.first;
            int wt = child.second;
            if (dist[v] + wt < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
};

int main()
{

    int n, m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        // directed graph
        graphh[x].push_back({y, wt});
    }

    return 0;
}