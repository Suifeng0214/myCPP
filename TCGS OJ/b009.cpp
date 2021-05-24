#include <iostream>  
#include <vector>  
using namespace std;  

int main() 
{  
    ios::sync_with_stdio(0);  
    cin.tie(0);  
    string ans, origin;  
    bool flag=0;  
    cin >> ans >> origin;  
    int i = 0,j = 0;  
    for (; j < origin.size(); j++){  
        if (origin[j] == ans[i]){  
            if (i == ans.size()-1){  
                flag = 1;  
            }  
            i++;  
        }  
    }  
  
    if (flag){  
        cout << "YES\n";  
    }else{  
        cout << "NO\n";  
    }  
    return 0;  
}  
