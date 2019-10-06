#include<stdio.h>
    
#define min(a,b) (a < b ? a : b)
typedef unsigned long int ul;
   
int main(void){
    ul L, R;
    int m = 2019;
    scanf("%lld %lld", &L, &R);
    ul ans = 1000000000;
    int cnt[2] = {0, 0};
    int t = 0;
    for(ul i = L; (i < R) && (cnt[0] < 5000); i++, cnt[0]++){
        cnt[0] = 0;
        for(ul j = i + 1; (j <= R) && (cnt[1] < 5000); j++, cnt[1]++){
            ans = min( (i * j) % m, ans);
        }
    }
    printf("%lu", ans);
    return 0;
}
