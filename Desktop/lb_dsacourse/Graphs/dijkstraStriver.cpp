#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4, m = 5, source = 0;
    vector<pair<int, int>> g[n + 1]; // assuming 1 based indexing of graph
    // Constructing the graph

    g[3].push_back({1, 2});
    g[3].push_back({2, 6});
    g[2].push_back({0, 8});
    g[2].push_back({1, 9});
    g[2].push_back({3, 6});
    g[1].push_back({0, 5});
    g[1].push_back({2, 9});
    g[1].push_back({3, 2});
    g[0].push_back({1, 5});
    g[0].push_back({2, 8});

    // Dijkstra's algorithm begins from here
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distTo(n + 1, INT_MAX); // 1-indexed array for calculating shortest paths
    distTo[source] = 0;
    pq.push(make_pair(0, source)); // (dist,source)
    while (!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        vector<pair<int, int>>::iterator it;
        for (it = g[prev].begin(); it != g[prev].end(); it++)
        {
            int next = it->first;
            int nextDist = it->second;
            if (distTo[next] > distTo[prev] + nextDist)
            {
                distTo[next] = distTo[prev] + nextDist;
                pq.push(make_pair(distTo[next], next));
            }
        }
    }
    cout << "The distances from source " << source << " are : \n";
    for (int i = 1; i <= n; i++)
        cout << distTo[i] << " ";
    cout << "\n";
    return 0;
}
