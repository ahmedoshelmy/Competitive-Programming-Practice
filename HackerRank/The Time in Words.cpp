#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {
map<int,string> numbers;
string toorpast = "past";
numbers[1]="one";numbers[2]="two";numbers[3]="three";numbers[4]="four";numbers[5]="five";
numbers[6]="six";numbers[7]="seven";numbers[8]="eight";numbers[9]="nine";numbers[10]="ten";numbers[11]="eleven";numbers[12]="twelve";numbers[13]="thirteen";numbers[18]="eighteen";numbers[20]="twenty";
if(m==0){
    return numbers[h] + " o' clock";
}
if(m==30){
    return "half past "+ numbers[h];
}
if(m>30){ toorpast="to";
m=60-m;
h++;
// if(h==13) h=1;
}
if(m==15) return "quarter "+ toorpast + " "+numbers[h];
if(m==18) return  numbers[m] +" minutes "+toorpast+" "+numbers[h]; 
if(m==1) return  numbers[m] +" minute "+toorpast+" "+numbers[h]; 
if(m<14) return numbers[m] +" minutes "+toorpast+" "+numbers[h]; 
if(m>=14 && m<20) return numbers[m%10] +"teen minutes "+toorpast+" "+numbers[h]; 
if(m==20) return  numbers[m] + " minutes "+toorpast+" "+numbers[h]; 
else return "twenty " + numbers[m%10] +" minutes "+toorpast+" "+numbers[h]; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

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
