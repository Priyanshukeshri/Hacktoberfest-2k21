#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


void myfile() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void getparam(string s, vector<string> &pm, string param) {
	if (s.size() == 0) {
		pm.push_back(param);
		return;
	}
	for (int i = 0; i < s.size(); i++) {
		char ch = s[i];
		getparam(s.substr(0, i) + s.substr(i + 1), pm, param + ch);
	}
}

void getparam2(string s, vector<string> &pm, int j) {
	if (s.size() - 1 == j) {
		pm.push_back(s);
		return;
	}
	for (int i = j; i < s.size(); i++) {
		swap(s[i], s[j]);
		getparam2(s, pm, j + 1);
		swap(s[i], s[j]);
	}
}

int main() {
	myfile();
	string s = "abc";
	vector<string> pm;
	getparam2(s, pm, 0);
	for (int i = 0; i < pm.size(); i++) {
		cout << pm[i] << endl;
	}
	return 0;
}
