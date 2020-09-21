#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
using namespace std;

#define int long long

signed main() { 
    int c;
    cin >> c;
    vector<vector<int>> v(c, vector<int> (3));
    for(int i = 0; i < c; i++) cin >> v[i][0] >> v[i][1] >> v[i][2];

    for(int i = 0; i < c; i++) sort(v[i].begin(), v[i].end());
    
    int n_max = 0;
    int m_max = 0;
    int l_max = 0;
    for(int i = 0; i < c; i++) {
        n_max = max(n_max, v[i][0]);
        m_max = max(m_max, v[i][1]);
        l_max = max(l_max, v[i][2]);
    }

    int volume = n_max * m_max * l_max;

    cout << volume << endl;
    return 0;
}