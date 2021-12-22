#include <bits/stdc++.h>
using namespace  std;

int main() {
    int n;
    int k;
    int x0, y0, x, y, dx, dy, ans;
    int maxSteps;
    cin >> n >> k >> x0 >> y0;
    ans = (n - 1) * 2;
    ans += min(abs(1 - x0), abs(1 - y0));
    ans += min(abs(n - x0), abs(n - y0));
    ans +=(min(abs(x0-1),abs(n-y0)));
    ans +=min(abs(n-x0),abs(y0-1));
    int o1 = 0, o2 = 0, o3 = 0, o4 = 0, o5 = 0, o6 = 0, o7 = 0, o8 =0;
    //o1 up //o2 down //o3 right //o4 left //o5 upright //o6 up left //o7 down right //o8 down left
    vector<pair<int, int>> obstacles;
    for (int i = 0; i < k; ++i) {
        cin >> x >> y;
//        obstacles.push_back({x,y});
        dx = x - x0;
        dy = y - y0;
        if (dx == 0 and dy > 0) {
            o1 = max(o1, n - y+1);
        }
        if (dx == 0 and dy < 0) {

            o2 = max(o2, y );
        }
        if (dx > 0 and dy == 0) {
            o3 = max(o3, n - x+1);
        }
        if (dx < 0 and dy == 0) {
            o4 = max(o4, x );
        }
        if (dx > 0 and dy > 0 and dy == dx) {
            int maxSteps = min(n - y0, n - x0)-dx+1;
            o5 = max(maxSteps, o5);
        }

    if (dx < 0 and dy < 0 and dy == dx) {
        maxSteps = min(y0-1,x0-1)+dx+1;
        o8 = max(o8,maxSteps );
    }
    if (dx < 0 and dy > 0 and abs(dy) == abs(dx)) {
        maxSteps = min(x0-1,n-y0)-abs(dy)+1;
        o6 = max(o6, maxSteps);
    }
    if (dx > 0 and dy < 0 and abs(dy) == abs(dx)) {
        maxSteps = min(n-x0,y0-1)-abs(dx)+1;
        o7 = max(o7, maxSteps);
    }
    }

    ans -=o1;
    ans -=o2;
    ans -=o3;
    ans -=o4;
    ans -=o5;
    ans -=o6;
    ans -=o7;
    ans -=o8;

    cout<<ans;





    return 0;
}
