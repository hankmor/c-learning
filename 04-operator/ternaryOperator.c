/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

void main() {
    int a = 10;
    int b = 99;
    int res = a > b ? a++ : b--; // a > b为假，执行 b--，先将b的值赋给res，然b减1
    int n1 = a > b ? 1.1 : 1.2; // 警 告 double -> int
    printf("\n a = %d b=%d res=%d n1=%d", a, b, res, n1); // a = 10 , b=98, res = 99 n1=1
}