#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void solve(){

    int n;
    cin >> n;
    vector<int> d(n);

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    int min_digit = *min_element(d.begin(), d.end());

    for (int i = 0; i < n; i++)
    {
        if (d[i] == min_digit)
        {
            d[i]++;
            break;
        }
    }
    long long max_product = 1;
    for (int i = 0; i < n; i++)
    {
        max_product *= d[i];
    }

    cout << max_product << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
