#include <bits/stdc++.h> 
using namespace std;
#define int long long
const int MAX = 2e6+10;
int arr[MAX];
int tmp[MAX];
int counts=0, n;
void merge(int left, int right);
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    merge(0, n);
    cout << counts << "\n";
}

void merge(int left, int right){
    if (left+1 == right) return;
    int mid = (left + right) / 2;
    merge(left, mid);
    merge(mid, right);
    int i = left, j = mid, k = left;
    while(i < mid || j < right){
        if (i >= mid){
            tmp[k++] = arr[j++];
        }else if (j >= right){
            tmp[k++] = arr[i++];
        }else{
            if (arr[i] <= arr[j]){
                tmp[k++] = arr[i++];
            }else{
                counts += mid-i;
                tmp[k++] = arr[j++];
            }
        }
    }
    for (int i = left; i < right; i++){
        arr[i] = tmp[i];
    }
}
