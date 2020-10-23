/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

// 斐波那契数列, 1,1,2,3,5,8,13,...
// 即：长度小于3时，值为1，大于等于3时，后边的数是其前边量个数的和
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int i;
    for (i = 1; i < 10; i++) {
        printf("\n 第%d个数 = %d", i, fibonacci(i));
    }
}