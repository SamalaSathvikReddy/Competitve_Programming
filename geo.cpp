#include <bits/stdc++.h>
using namespace std;

struct Point{
    long long x, y;
    int idx;
};

long long crossProduct(const point &p1, const point &p2){
    return (p1.x * p2.y - p2.x * p1.y);
}

int Quadrant(const point &p){
    if(p.x >= 0 && p.y > 0)return 1;
    if(p.x < 0 && p.y >= 0)return 2;
    if(p.x <= 0 && p.y < 0)return 3;
    return 4;
}

bool polarComp(const point &a, const point &b){
    int a1 = Quadrant(a);
    int b1 = Quadrant(b);
    if(a1 != b1)return b1 > a1;
    return crossProduct(a, b) > 0;
}

int main(void){
    return 0;
}
