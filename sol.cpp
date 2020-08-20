#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	string s;
	getline(cin, s);
	int cnt=0;
	for(char c : s)
		if(c=='a') 
			cnt++;
	if(cnt>(int)s.size()/2) 
		cout << (int)s.size();
	else
		cout << cnt*2-1;
	cout << "\n";
}
