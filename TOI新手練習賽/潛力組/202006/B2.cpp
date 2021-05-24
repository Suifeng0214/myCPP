#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
#define INF 0x3fffffff

struct node
{
    int left;
    int right;
    int max;           //���@�̤j��
    int sum;          //���@�϶��M
    int min;           //���@�̤p��
}Tree[MAXN<<2];        //�x�s�u�q��

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
void maintain(int root)         //�V�W�վ�A�ϱo���u�q����@�϶��̤p�ȳ̤j�Ȱ϶��M
{
    int LC = root<<1;       //���ڪ����Ĥl
    int RC = (root<<1)+1;       //���ڪ��k�Ĥl
    Tree[root].sum = Tree[LC].sum + Tree[RC].sum;       //�ڪ��϶��M
    Tree[root].max = max(Tree[LC].max,Tree[RC].max);        //�ڪ��̤j��
    Tree[root].min = min(Tree[LC].min,Tree[RC].min);        //�ڪ��̤p��
}



int Query(int root,int start,int end)                         //�d�߰϶��M�]start, end�^�ڸ`�I��1
{
    if(start == Tree[root].left && Tree[root].right == end)         //���n�ǰt��d�߰϶��A������^�϶��M
    {
        return Tree[root].sum;
    }
    int mid = (Tree[root].left + Tree[root].right)>>1;                 //���}�϶�
    int ret = 0;
    if(end <= mid)                                              //�d�ߵ��G�b����϶�
        ret += Query(root<<1,start,end);                        //�N���϶����d�ߵ��G��^�A�ðO���b���G�M��
    else if(start >= mid+1)                                    //�d�ߵ��G�b�k�϶�
        ret += Query((root<<1)+1,start,end);
    else                                                        //�d�ߵ��G�]�t�b���k��Ӱ϶���
    {
        ret += Query(root<<1,start,mid);            //�d�����@����
        ret += Query((root<<1)+1,mid+1,end);            //�d�k���@����
    }
    return ret;                             //��^�����d�ߵ��G
}
