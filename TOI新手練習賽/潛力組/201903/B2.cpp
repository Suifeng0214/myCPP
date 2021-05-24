#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
#define INF 0x3fffffff

struct node
{
    int left;
    int right;
    int max;           //維護最大值
    int sum;          //維護區間和
    int min;           //維護最小值
}Tree[MAXN<<2];        //儲存線段樹

signed main()
{
	int n, k;
	while(cin >> n >> k){
		for (int i = 0; i < n; i++){
			cin >> Tree[i];
		}
		cout << max(ans, (int)0) << "\n";
	}
}
void maintain(int root)         //向上調整，使得讓線段樹維護區間最小值最大值區間和
{
    int LC = root<<1;       //此根的左孩子
    int RC = (root<<1)+1;       //此根的右孩子
    Tree[root].sum = Tree[LC].sum + Tree[RC].sum;       //根的區間和
    Tree[root].max = max(Tree[LC].max,Tree[RC].max);        //根的最大值
    Tree[root].min = min(Tree[LC].min,Tree[RC].min);        //根的最小值
}



int Query(int root,int start,int end)                         //查詢區間和（start, end）根節點為1
{
    if(start == Tree[root].left && Tree[root].right == end)         //正好匹配到查詢區間，直接返回區間和
    {
        return Tree[root].sum;
    }
    int mid = (Tree[root].left + Tree[root].right)>>1;                 //分開區間
    int ret = 0;
    if(end <= mid)                                              //查詢結果在左邊區間
        ret += Query(root<<1,start,end);                        //將左區間的查詢結果返回，並記錄在結果和中
    else if(start >= mid+1)                                    //查詢結果在右區間
        ret += Query((root<<1)+1,start,end);
    else                                                        //查詢結果包含在左右兩個區間中
    {
        ret += Query(root<<1,start,mid);            //查左的一部分
        ret += Query((root<<1)+1,mid+1,end);            //查右的一部分
    }
    return ret;                             //返回本次查詢結果
}
