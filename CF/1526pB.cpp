//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
bool used[1100];
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	used[1]=1;
	used[2]=1;
	used[3]=1;
	used[4]=1;
	used[5]=1;
	used[6]=1;
	used[7]=1;
	used[8]=1;
	used[9]=1;
	used[10]=1;
	used[12]=1;
	used[13]=1;
	used[14]=1;
	used[15]=1;
	used[16]=1;
	used[17]=1;
	used[18]=1;
	used[19]=1;
	used[20]=1;
	used[21]=1;
	used[23]=1;
	used[24]=1;
	used[25]=1;
	used[26]=1;
	used[27]=1;
	used[28]=1;
	used[29]=1;
	used[30]=1;
	used[31]=1;
	used[32]=1;
	used[34]=1;
	used[35]=1;
	used[36]=1;
	used[37]=1;
	used[38]=1;
	used[39]=1;
	used[40]=1;
	used[41]=1;
	used[42]=1;
	used[43]=1;
	used[45]=1;
	used[46]=1;
	used[47]=1;
	used[48]=1;
	used[49]=1;
	used[50]=1;
	used[51]=1;
	used[52]=1;
	used[53]=1;
	used[54]=1;
	used[56]=1;
	used[57]=1;
	used[58]=1;
	used[59]=1;
	used[60]=1;
	used[61]=1;
	used[62]=1;
	used[63]=1;
	used[64]=1;
	used[65]=1;
	used[67]=1;
	used[68]=1;
	used[69]=1;
	used[70]=1;
	used[71]=1;
	used[72]=1;
	used[73]=1;
	used[74]=1;
	used[75]=1;
	used[76]=1;
	used[78]=1;
	used[79]=1;
	used[80]=1;
	used[81]=1;
	used[82]=1;
	used[83]=1;
	used[84]=1;
	used[85]=1;
	used[86]=1;
	used[87]=1;
	used[89]=1;
	used[90]=1;
	used[91]=1;
	used[92]=1;
	used[93]=1;
	used[94]=1;
	used[95]=1;
	used[96]=1;
	used[97]=1;
	used[98]=1;
	used[100]=1;
	used[101]=1;
	used[102]=1;
	used[103]=1;
	used[104]=1;
	used[105]=1;
	used[106]=1;
	used[107]=1;
	used[108]=1;
	used[109]=1;
	used[112]=1;
	used[113]=1;
	used[114]=1;
	used[115]=1;
	used[116]=1;
	used[117]=1;
	used[118]=1;
	used[119]=1;
	used[120]=1;
	used[123]=1;
	used[124]=1;
	used[125]=1;
	used[126]=1;
	used[127]=1;
	used[128]=1;
	used[129]=1;
	used[130]=1;
	used[131]=1;
	used[134]=1;
	used[135]=1;
	used[136]=1;
	used[137]=1;
	used[138]=1;
	used[139]=1;
	used[140]=1;
	used[141]=1;
	used[142]=1;
	used[145]=1;
	used[146]=1;
	used[147]=1;
	used[148]=1;
	used[149]=1;
	used[150]=1;
	used[151]=1;
	used[152]=1;
	used[153]=1;
	used[156]=1;
	used[157]=1;
	used[158]=1;
	used[159]=1;
	used[160]=1;
	used[161]=1;
	used[162]=1;
	used[163]=1;
	used[164]=1;
	used[167]=1;
	used[168]=1;
	used[169]=1;
	used[170]=1;
	used[171]=1;
	used[172]=1;
	used[173]=1;
	used[174]=1;
	used[175]=1;
	used[178]=1;
	used[179]=1;
	used[180]=1;
	used[181]=1;
	used[182]=1;
	used[183]=1;
	used[184]=1;
	used[185]=1;
	used[186]=1;
	used[189]=1;
	used[190]=1;
	used[191]=1;
	used[192]=1;
	used[193]=1;
	used[194]=1;
	used[195]=1;
	used[196]=1;
	used[197]=1;
	used[200]=1;
	used[201]=1;
	used[202]=1;
	used[203]=1;
	used[204]=1;
	used[205]=1;
	used[206]=1;
	used[207]=1;
	used[208]=1;
	used[211]=1;
	used[212]=1;
	used[213]=1;
	used[214]=1;
	used[215]=1;
	used[216]=1;
	used[217]=1;
	used[218]=1;
	used[219]=1;
	used[223]=1;
	used[224]=1;
	used[225]=1;
	used[226]=1;
	used[227]=1;
	used[228]=1;
	used[229]=1;
	used[230]=1;
	used[234]=1;
	used[235]=1;
	used[236]=1;
	used[237]=1;
	used[238]=1;
	used[239]=1;
	used[240]=1;
	used[241]=1;
	used[245]=1;
	used[246]=1;
	used[247]=1;
	used[248]=1;
	used[249]=1;
	used[250]=1;
	used[251]=1;
	used[252]=1;
	used[256]=1;
	used[257]=1;
	used[258]=1;
	used[259]=1;
	used[260]=1;
	used[261]=1;
	used[262]=1;
	used[263]=1;
	used[267]=1;
	used[268]=1;
	used[269]=1;
	used[270]=1;
	used[271]=1;
	used[272]=1;
	used[273]=1;
	used[274]=1;
	used[278]=1;
	used[279]=1;
	used[280]=1;
	used[281]=1;
	used[282]=1;
	used[283]=1;
	used[284]=1;
	used[285]=1;
	used[289]=1;
	used[290]=1;
	used[291]=1;
	used[292]=1;
	used[293]=1;
	used[294]=1;
	used[295]=1;
	used[296]=1;
	used[300]=1;
	used[301]=1;
	used[302]=1;
	used[303]=1;
	used[304]=1;
	used[305]=1;
	used[306]=1;
	used[307]=1;
	used[311]=1;
	used[312]=1;
	used[313]=1;
	used[314]=1;
	used[315]=1;
	used[316]=1;
	used[317]=1;
	used[318]=1;
	used[322]=1;
	used[323]=1;
	used[324]=1;
	used[325]=1;
	used[326]=1;
	used[327]=1;
	used[328]=1;
	used[329]=1;
	used[334]=1;
	used[335]=1;
	used[336]=1;
	used[337]=1;
	used[338]=1;
	used[339]=1;
	used[340]=1;
	used[345]=1;
	used[346]=1;
	used[347]=1;
	used[348]=1;
	used[349]=1;
	used[350]=1;
	used[351]=1;
	used[356]=1;
	used[357]=1;
	used[358]=1;
	used[359]=1;
	used[360]=1;
	used[361]=1;
	used[362]=1;
	used[367]=1;
	used[368]=1;
	used[369]=1;
	used[370]=1;
	used[371]=1;
	used[372]=1;
	used[373]=1;
	used[378]=1;
	used[379]=1;
	used[380]=1;
	used[381]=1;
	used[382]=1;
	used[383]=1;
	used[384]=1;
	used[389]=1;
	used[390]=1;
	used[391]=1;
	used[392]=1;
	used[393]=1;
	used[394]=1;
	used[395]=1;
	used[400]=1;
	used[401]=1;
	used[402]=1;
	used[403]=1;
	used[404]=1;
	used[405]=1;
	used[406]=1;
	used[411]=1;
	used[412]=1;
	used[413]=1;
	used[414]=1;
	used[415]=1;
	used[416]=1;
	used[417]=1;
	used[422]=1;
	used[423]=1;
	used[424]=1;
	used[425]=1;
	used[426]=1;
	used[427]=1;
	used[428]=1;
	used[433]=1;
	used[434]=1;
	used[435]=1;
	used[436]=1;
	used[437]=1;
	used[438]=1;
	used[439]=1;
	used[445]=1;
	used[446]=1;
	used[447]=1;
	used[448]=1;
	used[449]=1;
	used[450]=1;
	used[456]=1;
	used[457]=1;
	used[458]=1;
	used[459]=1;
	used[460]=1;
	used[461]=1;
	used[467]=1;
	used[468]=1;
	used[469]=1;
	used[470]=1;
	used[471]=1;
	used[472]=1;
	used[478]=1;
	used[479]=1;
	used[480]=1;
	used[481]=1;
	used[482]=1;
	used[483]=1;
	used[489]=1;
	used[490]=1;
	used[491]=1;
	used[492]=1;
	used[493]=1;
	used[494]=1;
	used[500]=1;
	used[501]=1;
	used[502]=1;
	used[503]=1;
	used[504]=1;
	used[505]=1;
	used[511]=1;
	used[512]=1;
	used[513]=1;
	used[514]=1;
	used[515]=1;
	used[516]=1;
	used[522]=1;
	used[523]=1;
	used[524]=1;
	used[525]=1;
	used[526]=1;
	used[527]=1;
	used[533]=1;
	used[534]=1;
	used[535]=1;
	used[536]=1;
	used[537]=1;
	used[538]=1;
	used[544]=1;
	used[545]=1;
	used[546]=1;
	used[547]=1;
	used[548]=1;
	used[549]=1;
	used[556]=1;
	used[557]=1;
	used[558]=1;
	used[559]=1;
	used[560]=1;
	used[567]=1;
	used[568]=1;
	used[569]=1;
	used[570]=1;
	used[571]=1;
	used[578]=1;
	used[579]=1;
	used[580]=1;
	used[581]=1;
	used[582]=1;
	used[589]=1;
	used[590]=1;
	used[591]=1;
	used[592]=1;
	used[593]=1;
	used[600]=1;
	used[601]=1;
	used[602]=1;
	used[603]=1;
	used[604]=1;
	used[611]=1;
	used[612]=1;
	used[613]=1;
	used[614]=1;
	used[615]=1;
	used[622]=1;
	used[623]=1;
	used[624]=1;
	used[625]=1;
	used[626]=1;
	used[633]=1;
	used[634]=1;
	used[635]=1;
	used[636]=1;
	used[637]=1;
	used[644]=1;
	used[645]=1;
	used[646]=1;
	used[647]=1;
	used[648]=1;
	used[655]=1;
	used[656]=1;
	used[657]=1;
	used[658]=1;
	used[659]=1;
	used[667]=1;
	used[668]=1;
	used[669]=1;
	used[670]=1;
	used[678]=1;
	used[679]=1;
	used[680]=1;
	used[681]=1;
	used[689]=1;
	used[690]=1;
	used[691]=1;
	used[692]=1;
	used[700]=1;
	used[701]=1;
	used[702]=1;
	used[703]=1;
	used[711]=1;
	used[712]=1;
	used[713]=1;
	used[714]=1;
	used[722]=1;
	used[723]=1;
	used[724]=1;
	used[725]=1;
	used[733]=1;
	used[734]=1;
	used[735]=1;
	used[736]=1;
	used[744]=1;
	used[745]=1;
	used[746]=1;
	used[747]=1;
	used[755]=1;
	used[756]=1;
	used[757]=1;
	used[758]=1;
	used[766]=1;
	used[767]=1;
	used[768]=1;
	used[769]=1;
	used[778]=1;
	used[779]=1;
	used[780]=1;
	used[789]=1;
	used[790]=1;
	used[791]=1;
	used[800]=1;
	used[801]=1;
	used[802]=1;
	used[811]=1;
	used[812]=1;
	used[813]=1;
	used[822]=1;
	used[823]=1;
	used[824]=1;
	used[833]=1;
	used[834]=1;
	used[835]=1;
	used[844]=1;
	used[845]=1;
	used[846]=1;
	used[855]=1;
	used[856]=1;
	used[857]=1;
	used[866]=1;
	used[867]=1;
	used[868]=1;
	used[877]=1;
	used[878]=1;
	used[879]=1;
	used[889]=1;
	used[890]=1;
	used[900]=1;
	used[901]=1;
	used[911]=1;
	used[912]=1;
	used[922]=1;
	used[923]=1;
	used[933]=1;
	used[934]=1;
	used[944]=1;
	used[945]=1;
	used[955]=1;
	used[956]=1;
	used[966]=1;
	used[967]=1;
	used[977]=1;
	used[978]=1;
	used[988]=1;
	used[989]=1;
	used[1000]=1;
	used[1011]=1;
	used[1022]=1;
	used[1033]=1;
	used[1044]=1;
	used[1055]=1;
	used[1066]=1;
	used[1077]=1;
	used[1088]=1;
	used[1099]=1;
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		if (x >= 1100) cout << "YES\n";
		else{
			cout << ((used[x])? "NO\n" : "YES\n");
		}
	}
}




/*//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
bool used[11112];
signed main() 
{ 
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		for (int i = 0; i <= 10; i++){
			for (int j = 0; j <= 100; j++){
				for (int k = 0; k <= 1010; k++){
					if (used[x]==0 && i*1111 + j*111 + k*11 == x){
						used[x] = 1;
						cout << "YES\n";
						cout << "x="<< x << " "<< i << " " << j << " " << k << "\n";
						break;
					}
					if (used[x]) break;
				}
				if (used[x]) break;
			}
			if (used[x]) break;
		}
	}
	for (int i = 1; i <= 11111; i++){
		if (used[i] == 1)cout << i << "\n";
	//	else cout << "------------------";
	}
	for (int i = 1; i <= 11111; i++){
		if (used[i] == 0)cout << i << "\n";
	//	else cout << "===================\n";
	}
} */

