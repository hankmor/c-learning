/*
 * Created by Sam Sune on 2020/10/28.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

int n = 10;    //全局变量
void func1() {
    int n = 20;    //局部变量
    printf("func1 n: %d\n", n); //
}

void func2(int n) {
    printf("func2 n: %d\n", n); // n是形参n
}

void func3() {
    printf("func3 n: %d\n", n); // n是全局变量n
}

int main() {
    int n = 30;    //局部变量(main 函数)
    func1(); // 20
    func2(n); // 30
    func3(); // 10
    // 代码块由{}包围
    {
        int n = 40;    // 局部变量{}
        printf("block n: %d\n", n); // 40
    }
    printf("main n: %d\n", n); // 30
}