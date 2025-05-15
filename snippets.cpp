#include <bits/stdc++.h>
using namespace std;

void sieve(){
    int n;cin >> n;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 1; i <= n; i++){
        if(!is_prime[i])continue;
        for(int j = i+i; j <= n; j+=i){
            is_prime[j] = false;
        }
    }


int gcd(int a, int b){
    if(a == 0)return b;
    return gcd(b%a, a);
}

long long binpow(long long a, long long b){
    // a^b = (a ^ (b/2)) * (a ^ (b/2)) --> b is even
    // a^b = (a ^ (b/2)) * (a ^ (b/2)) * a;
    if(b == 0){
        return 1;
    } 
    long long res = binpow(a, b / 2);
    if(b%2 == 0){
        return res * res;
    }
    else{
        return res * res * a;
    }
}

void count_divisor(){
    int n;cin >> n;
    int div = 0;
    for(int i = 1; i * i <= n; i++){
        if(n%i == 0){
            div++;
            if(i != n/i){
                div++;
            }
        }
    }
}



int main(void){
        
}