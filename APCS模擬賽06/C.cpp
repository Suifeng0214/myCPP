#include <bits/stdc++.h>
#define int long long
using namespace std;
unordered_map <int, int> mp;
vector <int> arr;
int cnt[100010];
signed main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    int remain = 0, ans =0;
    for (auto i : mp){
        arr.emplace_back(i.second);
        if (i.second > 3){
            remain +=i.second-3;
        }
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++){
        cnt[arr[i]]++;
    }

    if (cnt[2] == 0){
        if (cnt[1]>=2){
            cnt[2]++;
            cnt[1]-=2;
            ans+=1;
            ans += remain;
        }else{
            cout << remain;
            return 0;
        }

    }else{
        ans += remain;
        ans +=  min(cnt[1], cnt[2]); // 把1都加到2上 變成3個一組
    }
    //for (auto i : arr) cout << i << " ";cout << "\n";
    cout << ans;
    //sort(arr.begin(), arr.end());
    //for (int i:arr)cout << i << " ";
}
