#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
string ans = "Danil", ans2 = "Olya", ans3 = "Slava", ans4 = "Ann", ans5 = "Nikita";
string s;
int n;
int32_t main()
{
    MTK;
    cin >> s;
    n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            string ss = "";
            for (int k = i; k <= j; k++)
            {
                ss += s[k];
                if (ss.size() > 7)
                    break;
            }
            // cout << ss << '\n';
            if (ss.size() >= 3 and ss.size() <= 6)
            {
                int flag = 0, fl = 0;
                if (ss == ans || ans2 == s || ans3 == ss || ans4 == ss || ans5 == ss)
                {
                    fl = 1;
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'D')
                        {
                            if (s[i - 1] == '_')
                                flag = 1;
                            else if (s[i + 5] == '_')
                                flag = 1;
                        }
                        if (s[i] == 'N')
                        {
                            if (s[i - 1] == '_')
                                flag = 1;
                            else if (s[i + 6] == '_')
                                flag = 1;
                        }
                        {
                            if (s[i - 1] == '_')
                                flag = 1;
                            else if (s[i + 4] == '_')
                                flag = 1;
                        }
                        if (s[i] == 'S')
                        {
                            if (s[i - 1] == '_')
                                flag = 1;
                            else if (s[i + 5] == '_')
                                flag = 1;
                        }
                        if (s[i] == 'A')
                        {
                            if (s[i - 1] == '_')
                                flag = 1;
                            else if (s[i + 3] == '_')
                                flag = 1;
                        }
                    }
                }
                if (flag == 0 and fl == 1)
                {
                    cnt = 1;
                }
            }
        }
    }
    if (cnt)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}