/*
 * Created by Sam Sune on 2020/10/28.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

void func1(int n) {
    n = 100;
    printf("\n n = %d", n); // n = 100
}

void func2(int *n) {
    *n = 200; // 更改指针对应的值，即是将原来变量n对应的指针地址中的值更改了
    printf("\n n = %d", *n); // n = 200
}

int main() {
    int n = 10;
    func1(10); // 值传递，会在内存中拷贝一份，方法中更改不影响main中的n
    printf("\n n = %d", n); // n = 10

    func2(&n); // 指针传递，也叫引用传递，传递变量n的指针地址，n的值更改会影响到main中的变量n
    printf("\n n = %d", n); // n = 200
}