#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <short int> moods;
string askStr[30010];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int testData, students, ask, asks;
	int i, j;
	cin >> testData;
	
	while(testData--){
		cin >> students; 
		moods.clear();
		moods.reserve(students);
		for (i = 0; i < students; i++){
			cin >> moods[i];
		}
		cin >> ask;
	//Handle  
		for (i = 0; i < 30010; i++){
            askStr[i] = "So Bad!\n";
        }
		for (i = 0; i < students; i++){
			for (j = i+1; j < students; j++){
				if ((moods[i] && moods[j]) != 0){
					askStr[moods[i] + moods[j]] = "Good!\n";
				}
			}
		}
		
		//sort(moodsPair.begin(), moodsPair.end()); 
		while(ask--){
			cin >> asks;
			cout << askStr[asks];
		}
		
	}
	return 0;
}
/*¶W¯ÅºCªº¸Ñªk
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <bool> mood(30010);
vector <bool> askBool(30010);
vector <short int> moods;
vector <short int> moodsPair;
string askStr[30010];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int testData, students, ask, asks;
	int i, j;
	cin >> testData;
	
	while(testData--){
		cin >> students; 
		moodsPair.clear();
		moods.clear();
		moods.reserve(students);
		moodsPair.reserve(students);
		for (i = 0; i < students; i++){
			cin >> moods[i];
		}
		cin >> ask;
	//Handle  
		for (i = 0; i < students; i++){
			for (j = i+1; j < students; j++){
				//moodsPair.push_back(moods[i] + moods[j]);
				if (mood[moods[i] + moods[j]] == false && (moods[i] && moods[j]) != 0){
					moodsPair.push_back(moods[i] + moods[j]);
					mood[moods[i] + moods[j]] = true;
				}else{
					continue;
				}
			}
		}
		
		//sort(moodsPair.begin(), moodsPair.end()); 
		while(ask--){
			cin >> asks;
			if (askBool[asks] == false){
				askBool[asks] = true;
				for (i = 0; i < moodsPair.size(); i++){
					if (asks == moodsPair[i]){
						askStr[asks] = "Good!\n";
						cout << "Good!\n";
					break;	
					}else if (i == moodsPair.size()-1){
						askStr[asks] = "So Bad!\n";
						cout << "So Bad!\n";
					}
				}
			}else{
				cout << askStr[asks];
			}
		}
		for (i = 0; i < 30010; i++){
            mood[i] = 0;
            askBool[i] = 0;
        }
	}
	return 0;
} 
