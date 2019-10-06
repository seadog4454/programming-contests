#include<stdio.h>
#include<math.h>
#include<stdlib.h>
    
int main(void){
    int N = 0;//数
    int D = 0;//次元
    scanf("%d %d", &N, &D);
    
    int x[10][10];//最大10*10
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            scanf("%d ", &x[i][j]);
        }
    }
    
    int cnt = 0;
    double rlt_1 = 0.0;
    double rlt_2 = 0.0;
    // 1 2 ・・・1 5,  2 3 ・・・ 2 5,・・・, 4 5
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            //rintf("i = %d, j = %d\n", i, j);
            rlt_1 = 0.0;
            rlt_2 = 0.0;
            for(int k = 0; k < D; k++){
            rlt_2 += pow( abs(x[i][k] - x[j][k]), 2 );
            //printf("%lf ", rlt_2);
            }
            //printf("\n");
            rlt_1 = sqrt(  rlt_2 );
            //printf("rlt_1 = %lf\n", rlt_1);
            //printf("rlt_1^2 = %lf\n",pow(rlt_1, 2) );
            double tmp = 0.0;
            //printf("modlf = %lf, %lf", modf(rlt_1 , &tmp), modf(pow(rlt_1, 2) , &tmp));
            if( modf(rlt_1 , &tmp) == 0.000000 && modf(pow(rlt_1, 2), &tmp) == 0.000000){
            cnt++;
            //printf("cnt = %d\n", cnt);
            }
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
