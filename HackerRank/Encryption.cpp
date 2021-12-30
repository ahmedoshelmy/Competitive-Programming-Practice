#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
       s.erase(remove(s.begin(), s.end(), ' '), s.end());
       int sizee = s.size();
   
   int rows = floor(sqrt(sizee));
      int cols = ceil(sqrt(sizee));
   if(rows*cols<sizee)rows++;
    string result;
    string x;
    int index;
    for(int j =0;j<cols;j++){
        for(int i=0;i<rows;i++){
            index=i*cols+j;
            if(index<s.size()){
            x= s[index];
         result=result+x;
            }
        }
       if(j<cols-1) result=result+" ";
    }
    return result;
   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
