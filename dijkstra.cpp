#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n = 5, m = 6, source = 1;
    // vector<pair<int, int>> adj[n + 1];
    // adj[1].push_back({2, 2});
    // adj[1].push_back({4, 1});
    // adj[2].push_back({1, 2});
    // adj[2].push_back({5, 5});
    // adj[2].push_back({3, 4});
    // adj[3].push_back({2, 4});
    // adj[3].push_back({4, 3});
    // adj[3].push_back({5, 1});
    // adj[4].push_back({1, 1});
    // adj[4].push_back({3, 3});
    // adj[5].push_back({2, 5});
    // adj[5].push_back({3, 1});

    int n = 6, m = 8, source = 0;
    vector<pair<int, int>> adj[n + 1];
    adj[0].push_back({1, 4});
    adj[0].push_back({2, 4});
    adj[1].push_back({0, 4});
    adj[1].push_back({2, 2});
    adj[2].push_back({0, 4});
    adj[2].push_back({1, 2});
    adj[2].push_back({3, 3});
    adj[2].push_back({4, 1});
    adj[2].push_back({5, 6});
    adj[3].push_back({2, 3});
    adj[3].push_back({5, 2});
    adj[4].push_back({2, 1});
    adj[4].push_back({5, 3});
    adj[5].push_back({2, 6});
    adj[5].push_back({3, 2});
    adj[5].push_back({4, 3});

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distTo(n + 1, INT_MAX);
    distTo[source] = 0;
    pq.push(make_pair(0, source));
    while (!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        vector<pair<int, int>>::iterator it;
        for (it = adj[prev].begin(); it != adj[prev].end(); it++)
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

    cout << "The distance from source " << source << " are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << distTo[i] << endl;
    }
    cout << endl;

    return 0;
}