#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
vector<long> a;

for(int i=0;i<s.size();i++){
    if(s[i]=='a'){
        a.push_back(i+1);
    }
}
if(a.size()==0)return 0;
long ans;
long diff=n%s.size();
// if(a.size()>n){
//     int i=0;
// while(a[i]<=diff){
//     i++;
// }
// ans+=(i);
// return ans;
// }
ans=n/s.size();
ans=ans*a.size();
int i=0;
while(a[i]<=diff&&i<a.size()){
    i++;
}
ans+=(i);
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
