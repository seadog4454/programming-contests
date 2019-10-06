#include<stdio.h>
     
#define min(a, b) (a < b? a : b)
     
  int main(void){
  int N = 0;//人数
  int A = 0;//電車(1人あたり)
  int B = 0;//タクシー N人
  scanf("%d %d %d", &N, &A, &B);
      
  int ans = min(A * N, B);
  printf("%d", ans);
}
