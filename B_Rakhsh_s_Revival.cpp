#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int s = 0, p, z = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                z++;
        }
        vector<int> vec(z);
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                vec.push_back(i);
            }
        }

        for (int i = 1; i < vec.size(); i++)
        {
            if ((vec[i] - vec[i - 1]) == 1)
            {
                p++;
            }
            if (p == m)
            {
                s++;
                p = 0;
            }
        }
        cout << s << endl;
    }
    return 0;
}
