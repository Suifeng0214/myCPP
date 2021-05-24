#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> data;
        int temp;
        while(n--)
        {
            cin>>temp;
            data.push_back(temp);
        }
        sort(data.begin(),data.end());
        vector<int> answer;
        while(data.size())
        {
            answer.push_back(data.at(data.size()-1));
            data.erase(data.begin()+data.size()-1);
            if(data.size()==0)
                break;
            answer.push_back(data.at(0));
            data.erase(data.begin());
        }
        reverse(answer.begin(),answer.end());
        for(int i=0;i<answer.size();i++)
            cout<<answer.at(i)<<' ';
        cout<<endl;
    }

}
