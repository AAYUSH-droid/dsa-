#include <iostream>
#include <stack>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int array[] = {6, 2, 5, 4, 5, 1, 6};
    int n = 7;

    //   FOR NSL
    vector<int> nsl;
    stack<pair <int, int> > s1;

    for (int i = 0; i < n; i++)
    {
        if (s1.size() == 0)
        {
            nsl.push_back(-1);
        }
        else if (s1.size() > 0 && s1.top().first < array[i])
        {
            nsl.push_back(s1.top().second);
        }
        else if (s1.size() > 0 && s1.top().first > array[i])
        {
            while (s1.size() > 0 && s1.top().first > array[i])
            {
                s1.pop();
            }
            if (s1.size() == 0)
            {
                nsl.push_back(-1);
            }
            else
            {
                nsl.push_back(s1.top().second);
            }
        }
        s1.push({array[i], i});
    }
    cout << "NSL: " << endl;
    for (auto i : nsl)
    {
        std::cout << i << std::endl;
    }

    //   FOR NSR
    vector<int> nsr;
    stack<pair <int, int> > s2;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s2.size() == 0)
        {
            nsr.push_back(n);
        }
        else if (s2.size() > 0 && s2.top().first < array[i])
        {
            nsr.push_back(s2.top().second);
        }
        else if (s2.size() > 0 && s2.top().first > array[i])
        {
            while (s2.size() > 0 && s2.top().first > array[i])
            {
                s2.pop();
            }
            if (s2.size() == 0)
            {
                nsr.push_back(n);
            }
            else
            {
                nsr.push_back(s2.top().second);
            }
        }
        s2.push({array[i], i});
    }
    cout << "NSR: " << endl;
    reverse(nsr.begin(), nsr.end());
    for (auto i : nsr)
    {
        std::cout << i << std::endl;
    }

    // FOR WIDTH
    vector<int> width;
    for (int i = 0; i < n; i++)
    {
        width.push_back(nsr[i] - nsl[i] - 1);
    }
    cout << "Width: " << endl;
    for (auto i : width)
    {
        std::cout << i << std::endl;
    }

    // FOR AREA
    vector<int> area;
    for (int i = 0; i < n; i++)
    {
        area.push_back(array[i] * width[i]);
    }
    cout << "Area: " << endl;
    for (auto i : area)
    {
        std::cout << i << std::endl;
    }

    // FOR MAX AREA
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (area[i] > k)
        {
            k = area[i];
        }
    }
    cout << "Max Area: " << k << endl;
}