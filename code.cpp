// Use the binMul function when a ans M both value are very big like a<10^18, M<10^18
int binMul(ll a, ll b){
    int ans = 0;
    while (b){
        if (b&1){
            ans = (ans + a) % M; // M = 1000000007 (M is Modulo)
        }
        a = (a + a) % M; // M = 1000000007 (M is Modulo)
        b = b >> 1;
    }
    return ans;
}
// If a and M both have value less than 10 ^ 9 Use this function directly
int binExp(ll a, ll b){
    int ans = 1;
    while (b){
        if (b&1){
            ans = binMul(ans, a);
        }
        a = binMul(a, a);
        b = b >> 1;
    }
    return ans;
}
