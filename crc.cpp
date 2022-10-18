#include <bits/stdc++.h>
using namespace std;

string xor1(string a, string b)
{
    string result = "";
    int n = b.length();
    // traverse all bits if bits are same return 0 , if diffrent return 1.
    for (int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }
    return result;
}
string mod2div(string divident, string divisor)
{
    int pick = divisor.length();

    // slicing the divident according to the length of pick.
    string tmp = divident.substr(0, pick);

    int n = divident.length();

    while (pick < n)
    {
        if (tmp[0] == '1')
        {
            tmp = xor1(divisor, tmp) + divident[pick]; // divident[pick] = pulling bit down
        }
        else
        {
            // if leftmost bit = '0' we wont procees it thus will move to so that leftmost bit is 1.
            tmp = xor1(std::string(pick, '0'), tmp) + divident[pick];
            pick += 1;
        }
    }
    if (tmp[0] == '1')
        tmp = xor1(divisor, tmp);
    else
        tmp = xor1(std::string(pick, '0'), tmp);

    return tmp;
}

void encodeData(string data, string key)
{
    int l_key = key.length();

    // appending n-1 zero at end since if key length = n , zeros appended = n-1
    string appended_data = (data + std::string(l_key - 1, '0'));
    // cout << appended_data << " ";

    string remainder = mod2div(appended_data, key);
    reverse(remainder.begin(), remainder.end());

    // append remainder in orginal data
    string codeword = data + remainder;
    cout << "Remainder : " << remainder << "\n";
    cout << "Encoded Data (Data + Remainder) :" << codeword << "\n";
}
int main()
{

    string data = "100100";
    string key = "1101";
    // string data = "10011101";
    // string key = "1001";
    // string data;
    // cout << "Enter string data: " << endl;
    // cin >> data;

    // string key;
    // cout << " Enter string key: " << endl;
    // cin >> key;

    encodeData(data, key);
    return 0;
}
