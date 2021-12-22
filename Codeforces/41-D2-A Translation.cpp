#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char c;
	string s1,s2;
	cin>>s1>>s2;
	deque<char> right;
	deque<char> left;
	deque<char> left2;
    for(int i=0;i<s1.size();i++){
        right.push_front(s1[i]);
        left.push_back(s1[i]);
        left2.push_front(s2[i]);
    }
    if(left==left2) cout<<"YES\n";
    else cout<<"NO\n";
}
