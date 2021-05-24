#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    vector<pair<int,int>> C;
    cin >> n >> m;
    bool r[n + 2][m + 2];
    int data[n + 2][m + 2];
    memset(data, 0, sizeof(data));
    memset(r, 0, sizeof(r));
    for (int i = 1; i <= n; i++)
        for (int k = 1; k <= m; k++) {
            char t;
            cin >> t;
            if (t == '.')
                data[i][k] = 0;
            else if (t == 'P')
                data[i][k] = 1;
            else
            {
                C.push_back(pair<int,int>(i,k));
                data[i][k] = 2;
            }

        }
/*
    for(int i=1;i<=n;i++,cout<<endl)
        for(int k=1;k<=m;k++)
            cout<<data[i][k]<<' ';
            */
    int answer=0;
    for(int i=0;i<C.size();i++)
    {
        //cout<<C[i].first<<' '<<C[i].second<<endl;
        for(int a=-1;a<2;a++)
            for(int b=-1;b<2;b++)
                if(a==0&&b==0)
                {

                } else
                {
                    if(!r[C[i].first - a][C[i].second - b])
                    {
                        if(data[C[i].first+a][C[i].second+b]==1)
                            answer++;
                        r[C[i].first-a][C[i].second-b]=true;
                    }
                }











    }
    cout<<answer<<"\n";
}
