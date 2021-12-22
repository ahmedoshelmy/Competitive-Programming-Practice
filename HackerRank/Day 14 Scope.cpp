#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(vector<int> input){
        elements=input;
    }
    void computeDifference(){
        int maxx=-9999999;
        for(int i=0;i<elements.size()-1;i++){
            for(int j=1;j<elements.size();j++){
                maxx=max(maxx,abs(elements[i]-elements[j]));
            }
        }
        maximumDifference=maxx;
    }

}; // End of Difference class
