/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

/*
函数注意事项和细节：
1)函数的形参列表可以是多个。
2)C 语言传递参数可以是值传递（pass by value），也可以传递指针（a pointer passed by value）也叫引用传递。
3)函数的命名遵循标识符命名规范，首字母不能是数字，可以采用  驼峰法  或者  下划线法  ，比如	getMax() get_max()。
4)函数中的变量是局部的，函数外不生效【案例说明】
5)基本数据类型默认是值传递的，即进行值拷贝。在函数内修改，不会影响到原来的值。
6)如果希望函数内的变量能修改函数外的变量，可以传入变量的地址&，函数内以指针的方式操作变量。从效果上看类似引用(即传递指针)
7)C 语言 不支持函数重载。
8)C 语言支持可变参数函数
 */

#include <stdio.h>
#include <stdarg.h>

void f2(int n) {
    //函数中的变量是局部的，函数外不生效
    n++;
    printf("\nf2 中的 n=%d", n); // n=10
}

//如果希望函数内的变量能修改函数外的变量，可以传入变量的地址&，
//函数内以指针的方式操作变量。从效果上看类似引用(即传递指针)
void f3(int *p) {
    (*p)++;// 修改会对函数外的变量有影响
}

//说明
//num 表示传递的参数格式
//... 表示可以传递多个参数和 num 一致即可
int f4(int num, ...) { //可变函数，即参数的个数可以不确定, 使用... 表示
    int i, totalSum = 0; //totalSum 一定要初始化
    int val = 0;
    va_list v1;    //v1 实际是一个字符指针，从头文件里可以找到
    va_start(v1, num);    //使 v1 指向可变列表中第一个值，即 num 后的第一个参数
    printf("*v = %d\n", *v1);
    for (i = 0; i < num; i++) {
        val = va_arg(v1, int); //该函数返回 v1 指向的值，并使 v1 向下移动一个 int 的距离，使其指向下一个 int
        printf("val = %d\n", val); // val = 10 val=30 val=60
        totalSum += val;
    }
    va_end(v1); //关闭 v1 指针，使其指向 null return totalSum;
}

void main() {
    // 基本类型进行值传递，函数栈中会拷贝一份到内存，不会影响main函数中的n
    int n = 9;
    f2(n);
    printf("\nmain 函数中 n=%d\n", n); //9

    // 传递指针，改变了内存中的值，main函数中的n也会改变
    f3(&n);
    printf("\nmain 函数中 n=%d\n", n); //10

    // 可变参数
    int res = f4(8, 10, 30, 60, -100, 1, 5, 7, 98);
    printf("\n和是=%d", res);
}
