#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle = abs(30*hour-5.5*minutes);
        angle=min(angle,360-angle);
        return angle;
    }
};