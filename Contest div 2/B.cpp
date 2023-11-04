#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int v;
        cin >> v;
        int s[v];

        for (int i = 0; i < v; i++)
        {
            cin >> s[i];
        }

        float thoha = -9;
        if (is_sorted(s, s + v))
        {
            cout << "0\n";
            continue;
        }
        int th = -1;
        for (int i = v - 1; i >= 0; i--)
        {
            if (s[i] >= s[i - 1])
            {
                continue;
            }
            else
            {
                th = i;
                break;
            }
        }
        int tries = *max_element(s, s + th);

        cout << tries << endl;
    }

    return 0;
}
