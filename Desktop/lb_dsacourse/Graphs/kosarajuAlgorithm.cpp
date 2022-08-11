#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, bool> &vis, stack<int> st, unordered_map<int, list<int>> &adj)
{
    vis[node] = true;
    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, vis, st, adj);
    }
    st.push(node);
};

void revDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj)
{
    vis[node] = true;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            revDfs(it, vis, adj);
        }
    }
}

int main()
{
    int n = 5;
    int v = 6;
    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 4));
    edges.push_back(make_pair(4, 0));
    edges.push_back(make_pair(1, 2));
    edges.push_back(make_pair(2, 3));
    edges.push_back(make_pair(3, 2));
    // adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    // step1 --> topo sort
    stack<int> st;
    unordered_map<int, bool> vis;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
            dfs(i, vis, st, adj);
    }

    // step2 -->transpose graph
    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < v; i++)
    {
        vis[i] = 0;
        for (auto it : adj[i])
        {
            transpose[it].push_back(i);
        }
    }
    // step 3 --> dfs call using aove ordering
    int count = 0;
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        if (!vis[top])
        {

            count++;
            revDfs(top, vis, transpose);
            cout << "SCC: ";
        }
    }
    return 0;
}