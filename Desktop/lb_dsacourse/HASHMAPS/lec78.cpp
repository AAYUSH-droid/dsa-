#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    //creation
    unordered_map<string, int> m;

    //insertion
    //1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    m["messi"] = 100;

    m["leo"] = 2;

    //search
    // cout << m["mera"] << endl;
    // cout << m.at("babbar") << endl;

    // cout << m["unknownKey"] << endl;
    // cout << m.at("unknownKey") << endl;

    // cout << m.size() << endl;

    // //to check if key is present or not
    // cout << m.count("bro") << endl;
    // cout << m.count("love") << endl;

    //erase
    m.erase("love");
    cout << m.size() << endl;

    //iterator
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}

// map output
// babbar 3
// leo 2
// mera 1
// messi 100