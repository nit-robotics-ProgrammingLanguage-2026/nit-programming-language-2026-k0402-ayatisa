#include <stdio.h>

int main(void) {
    double d;          // 入力用の変数を宣言
    double result;     // 計算結果用の変数を宣言
    
    scanf("%lf", &d);q  // double型の入力を受け取る
    
    ; result = d * 1.08; // 1.08倍を計算
    
    printf("%.2f\n", result); // 小数点以下2桁で出力
    
    return 0;
}