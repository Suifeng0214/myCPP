#include <iostream>
using namespace std;

int main(void)
{
    int n, k , i,
        left, right, middle;

    cin >> n >> k; //n為數列長度(以備第二次輸入) k為要輸入幾組(第三次輸出)
    int listA[n],
        asks[k],
        ans[k] = {0};
    for (i = 0; i < n; i++){
        cin >> listA[i];
    }
    for (i = 0; i < k; i++){
        cin >> asks[i];
    }

        for (i = 0; i < k; i++){
            left = 0;
            right = n - 1;
            while (left <= right){
                middle = (left + right) / 2;
                if (asks[i] == listA[middle]){
                    ans[i] = middle + 1;
                    break;
                }
                if (asks[i] < listA[middle]){
                    right = middle - 1;
                }else{
                    left = middle + 1;
                }
            }
        }
        for (i = 0; i < k; i++){
            cout << ans[i] << endl;
        }


}
