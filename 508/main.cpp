#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[];
    for(int i = 1; i <= n; ++i)
    {
       cin >> v[i];
    }
    int m, x;
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> x;
        int st = 1, dr = n;
        bool ok = false;
        while(st <= dr)
        {
           int mij = (st + dr) / 2;
            if(v[mij] == x)
            {
                ok = true;
                break;
            }
        }
            if(v[mij] < x)
            {
                st = mij + 1;
            }
            else
            {
              dr = mij - 1;
            }
        }
        if(ok)
        {
           cout << 1 << ' ';
        }
        else
        {
            cout << 0 << ' '
        }

    return 0;
}
