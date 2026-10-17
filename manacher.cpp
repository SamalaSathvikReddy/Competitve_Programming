#include <bits/stdc++.h>
using namespace std;

vector<int> manacher(string s){
    int n = s.size();
    string t = "";
    for(int i = 0; i < n; i++){
        t.push_back('#');
        t.push_back(s[i]);
    }
    t.push_back('#');
    return manacherF(t);
}

vector<int> manacherF(string s){
    int n = s.size();
    s = "$" + s + "^";
    vector<int>p(n + 2);

    int l = 0, r = 1;
    for(int i = 1; i <= n; i++){
        p[i] = min(r - i, p[l + (r - i)]);
        while(s[i - p[i]] == s[i + p[i]]){
            p[i]++;
        }
        if(i + p[i] > r){
            r = i + p[i];
            l = i - p[i];
        }
    }

    return vector<int>(begin(p) + 1, end(p) - 1);
}  

int main(void){
}
