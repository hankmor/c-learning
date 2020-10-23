/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

//说明
//1. 函 数 名 cal
//2. 有返回值 double
//3. 形参列表为 (int n1, int n2, char oper)
//4. 在函数中，我们使用的变量名需要和形参列表中的变量名一样
double cal(int n1, int n2, char oper) {
    //定义一个变量 res ,保存运算的结果
    double res = 0.0;
    switch (oper) {
        case '+' :
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
        case '%':
            res = n1 % n2;
            break;
        default :
            printf("你的运算符有误~");
    }
    printf("\n%d %c %d = %.2f", n1, oper, n2, res);
    return res;
}

int main() {
    int num1 = 10; //第一个数
    int num2 = 20;//第二个数
    double res;//结果
    char oper = '-'; //运算符
    res = cal(num1, num2, oper); //调用函数，使用函数printf("\n cal 函数返回的结果 res=%.2f", res);

    //我们又要接收两个数和一个运算符
    int num3 = 60;
    int num4 = 80;
    double res2;
    char oper2 = '*';
    res2 = cal(num3, num4, oper2); //调用函数，使用函数printf("\n cal 函数返回的结果 res2=%.2f", res2);

    // 直接调用
    cal(100, 10, '/');
    cal(100, 10, '+');
    cal(100, 10, '-');
    cal(100, 10, '*');
    cal(100, 8, '%');
}