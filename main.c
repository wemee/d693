#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    return b? gcd(b, a%b) : a;
}

int lcm(int a, int b){
    return a/gcd(a, b)*b; /* "*b"放在後面避免乘法overflow, 如果爆掉那就是題目出錯 */
}

int main(){
    int n, ans, k, i;
    while (scanf("%d", &n) != EOF) {
        if (n==0) break;
        
        scanf("%d", &ans);
        for (i=1; i<n; i++) {
            scanf("%d", &k);
            ans = lcm(ans, k);
        }
        printf("%d\n", ans);
    }
    
    return 0;
}
