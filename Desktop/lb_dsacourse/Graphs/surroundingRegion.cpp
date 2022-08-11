#include <bits/stdc++.h>
using namespace std;
int n, m;
void dfs(vector<vector<char>> &grid, int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 'X' || grid[i][j] == '#')
        return;

    grid[i][j] = '#';
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    // corner pe --> O covert to -> # then back later to O to print output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0 || i == n - 1 || j == 0 || j == m - 1) && grid[i][j] == 'O')
            {

                dfs(grid, i, j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'O')
            {
                grid[i][j] = 'X';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '#')
            {
                grid[i][j] = 'O';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}