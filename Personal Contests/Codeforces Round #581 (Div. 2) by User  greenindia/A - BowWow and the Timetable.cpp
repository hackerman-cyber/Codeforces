
1204 A - BowWow and the Timetable.cpp GNU C++17 Accepted

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin>>str;

	bool isallz = true;
    	
    	int pos = 0;
    for (int i = 0; i < str.length(); ++i)
    {
    	/* code */
    	if(str[i] == '1'){
    		isallz = false;
    		pos = i;
    		break;
    	}
    }
    int x = pos;

    pos = str.length() - pos - 1;
    // cout << pos ;

    int ans = (pos % 2 == 0) ? pos/2 : pos/2 + 1 ;

    bool f = false;
    for(int i = x + 1 ; i < str.length(); i++)
    	if(str[i] == '1'){
    		isallz = false;
    		f = true;
    		ans = ans + 1;
    		break;
    	}

    	if(f and (pos%2!=0))
    		ans--;


    	if(isallz)
    		cout << 0 <<endl;
    	else
    	cout << ans <<endl;



 	
 	
 	

	return 0;
}





1204 A - BowWow and the Timetable.cpp GNU C++17 Wrong answer on pretest 9

/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//cout<<fixed<<showpoint<<setprecision(12)<<ans<<endl;
#define dbg(x) cerr << #x << " = " << x << endl
#define endl "\n"
#define int long long int
#define double long double
#define pb push_back
#define mp make_pair
#define PI acos(-1)

//const int INF=1e9+5;//billion
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};
string alpha = "abcdefghijklmnopqrstuvwxyz";
/*----------JU IS LOVE----------*/
//int power(int a,int b,int m){int ans=1;while(b){if(b&1)ans=(ans*a)%m;b/=2;a=(a*a)%m;}return ans;}
//int power(int a, int b){int ans=1;while(b){if(b&1)ans=ans*a;b/=2;a=a*a;}return ans;}


signed main() {
    
	// freopen("input.txt", "r", stdin);
	crap;

	string str;
	cin>>str;

	bool isallz = true;
    	
    	int pos = 0;
    for (int i = 0; i < str.length(); ++i)
    {
    	/* code */
    	if(str[i] == '1'){
    		isallz = false;
    		pos = i;
    		break;
    	}
    }
    int x = pos;

    pos = str.length() - pos - 1;
    // cout << pos ;

    int ans = pos/2;

    for(int i = x + 1 ; i < str.length(); i++)
    	if(str[i] == '1'){
    		isallz = false;
    		ans = ans + 1;
    		break;
    	}

    	if(isallz)
    		cout << 0 <<endl;
    	else
    	cout << ans <<endl;



 	
 	
 	

	return 0;
}




