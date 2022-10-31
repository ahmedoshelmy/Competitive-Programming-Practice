#include <unordered_map> 
#include <algorithm>
#include <iostream>
#include <iterator>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>

 using namespace std::chrono;

using namespace std;
void preprocess(string& str) {
    // Removing punctuation
    for (int i = 0, len = str.size(); i < len; i++)
    {
        // Check whether parsing character is punctuation or not 
        if (ispunct(str[i]))
        {
            str.erase(i--, 1);
            len = str.size();
        }
    }

    // Converting to lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}
vector<string> readFile() {
    ifstream f("words20K.txt"); //taking file as inputstream
    string file;
    if (f) {
        ostringstream ss;
        ss << f.rdbuf(); // reading data
        file = ss.str();
        // Split into tokens on space
        istringstream iss(file);
		string x; vector<string> tokens; 
		while(iss>>x) tokens.push_back(x) ;
        return tokens;
    }

    vector<string> empty;
    return empty;
}
int h1(string s) 	{return 39 * int(s[0]) ;} 
int h2(string s) 	{return 392 * int(s[1]) ; }
int h3(string s) 	{return 393 * int(s[2]) ; }
int h4(string s) 	{return 394 * int(s[3]) ; }
int hashf(string s){
	if(s.size() == 1 ) return h1(s);
	if(s.size() == 2 ) return h1(s) + h2(s);
	if(s.size() == 3 ) return h1(s) + h2(s); + h3(s) ; 
	return h1(s) + h2(s) + h3(s) + h4(s) ; 
}

int main(){
//    Linguini
	int M = 24000;
	int N = 20000;
	vector<string> strings = readFile();
	cout<<strings.size()<<endl;

	vector<string> hash_table (M , ""); // "/" means deleted 
	vector<double> times; 
	long long count  = 0 ; 
	for (int i = 0; i < N; i++)
	{
		if(i%500 ==0){
			times.push_back(count/500.0) ;
			count = 0 ; 
		}
		high_resolution_clock::time_point start = high_resolution_clock::now();
		int hash_function = hashf(strings[i]) % M ; 
		if(hash_table[hash_function] != "" || hash_table[hash_function] != "/" ){
			int j = 0 ; int nj = (hash_function+j)%M ; 
			while(j<M && hash_table[nj]!= "" && hash_table[nj]!="/"){
				j++;
				nj = (hash_function+j)%M ; 
			}
			hash_table[nj] = strings[i] ;  
		}else hash_table[hash_function] = strings[i] ; 
		high_resolution_clock::time_point stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start) ; 
		count+=duration.count() ; 
	}
	int mn = INT32_MAX ; 
	int mx = INT32_MIN ; 
	long long  sum = 0 ; 


	for (int i = 14000; i < 15000; i++)
	{
		int hash_function = hashf(strings[i]) % M ; 
		if(hash_table[hash_function] != strings[i] ){
			int j = 0 ; int nj = (hash_function+j)%M ; 
			while(j<M && hash_table[nj]!= "" && hash_table[nj]!=strings[i]){
				j++;
				nj = (hash_function+j)%M ; 
			}
			hash_table[nj] = "/" ; 
			sum += j ; mx = max(mx , j ) ; mn = min (mn , j ) ;
		}else hash_table[hash_function] = strings[i] ; 

	}
	cout<<"MIN "<<mn<<endl; 
	cout<<"MAx "<<mx<<endl; 
	cout<<"Avg "<<sum/1000.0<<endl; 
	for(auto u : times ) cout<<u<<endl; 
	 system("pause");
}
