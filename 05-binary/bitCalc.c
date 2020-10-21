/*
 * Created by Sam Sune on 2020/10/21.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */
#include <stdio.h>

int main() {
    int a = 1 >> 2; // 0, 1向右位移2位 ,  这里还涉及到二进制中 原码，反码，补码
    int b = -1 >> 2; // -1
    int c = 1 << 2; // 4
    int d = -1 << 2;// -4
    //a,b,c,d,e 结果是多少
    printf("a=%d b=%d c=%d d=%d ", a, b, c, d);
    printf("\n -3 %% 2 = %d, -3 %% 2= %d", -3 % 2, (-3) - (-3/2) * 2);
    printf("\n -4 %% 12 = %d", 10 % 12);
}
