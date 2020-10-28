/*
 * Created by Sam Sune on 2020/10/28.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */
#include <stdio.h>

void func1() {
    static int n; //n 就是静态局部变量, 默认初始化值 0
    printf("\n n=%d", n); // 0
}

void fn(void) {
    int n = 10; //普通变量, 每次执行都会初始化，n 在栈区
    printf("\n n=%d", n); // 10
    n++;
    printf("\n n++=%d\n", n); // 11

}

void fn_static(void) {
    static int n = 10; //静态局部变量， 放在静态存储区，全局性质空间
    printf("\n static n=%d\n", n); // 10
    n++; // n = 11
    printf("\n n++=%d\n", n); // 11
}

void main() {
    func1();
    fn();
    printf("\n");
    fn_static();
    printf("\n");
}
