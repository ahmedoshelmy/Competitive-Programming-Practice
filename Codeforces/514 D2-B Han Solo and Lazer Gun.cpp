#include <bits/stdc++.h>
using namespace std;

// Round function to 4 Decimal places
float roundd(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 10000 + .5);
    return (float)value / 10000;
}

int main() {
int n,x0,y0,x,y;
float slope,yintercept;
set<pair<float,float>> points ;
cin>>n>>x0>>y0;
    for (int i = 0; i <n; ++i) {
        cin>>x>>y;
        slope = (float)(y-y0)/(x-x0);
        yintercept = y - x*slope;
        slope = roundd(slope);
        yintercept = roundd(yintercept);
        points.insert({slope,yintercept});
    }
    cout<<points.size();
    return  0;

}
