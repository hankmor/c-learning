/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>
// 定义常量：
// 1、使用 #define 预处理器
//    #define 常量名 常量值
// 2、使用 const  关键字
//    const 数据类型 常量名 = 常量值;

/*
const 和 #define 的区别
1)const 定义的常量时，带类型，define 不带类型
2)const 是在 编译、运行的时候起作用，而 define 是在编译的预处理阶段起作用
3)define 只是简单的替换，没有类型检查。简单的字符串替换会导致边界效应.
4)const 常量可以进行调试的，define 是不能进行调试的，主要是预编译阶段就已经替换掉了，调试的时候就没它了
5)const 不能重定义，不可以定义两个一样的，而 define 通过 undef 取消某个符号的定义，再重新定义
6)define 可以配合#ifdef、#ifndef、#endif 来使用，可以让代码更加灵活，比如我们可以通过#define来启动或者关闭调试信息。
*/

//#define BOOL 1
#define PI 3.14
const double PI1 = 3.14;

// 简单替换，会产生边界问题，不是预期的结果
#define A 1
#define B A+3
#define C A/B*3 // 结果真的等于3吗？

#define D 1
#define E (D+3)
#define F (D/E)*3 // 加上括号

//const 不能重定义，不可以定义两个一样的，而 define 通过 undef 取消某个符号的定义，再重新定义
//const double PI=3.145; //Error
#define PI2 3.14
#undef PI2  // 取消 PI2 的定义
#define PI2 3.145 // 重新定义PI2常量

#define DEBUG

void demo1() {
    int n1 = 0213; // 八进制，对应十进制的139
    int n2 = 0x4b; // 十六进制，对应十进制的75
    char c1 = 'a';
    char c2 = '\t'; // '\t' 是字符常量

    char str1[20] = "北京 hello"; //	"北京 hello" 字符串常量
    char str2[100] = "hello \
world"; // 等价	"hello world"
    printf("\nn1=%d n2=%d", n1, n2);
    printf("\nstr1=%s str2=%s", str1, str2);
}

void calcArea() {
    // PI = 3.1415 // error, 常量值定义了不能修改
    double area;
    double r = 1.2;//半径
    area = PI * r * r;
    printf("\n面积1 : %.2f", area);
    area = PI1 * r * r;
    printf("\n面积2 : %.2f", area);
}

/*
 * 以下示例演示const和define定义的常量的区别
 */
void diff() {
    // #define预编译处理，其实就是一个简单的替换
    // C其实是A/A+3*3 = 1/1 + 3 * 3 = 1 + 9 = 10
    // TODO 为什么这里不能按照%f格式输出？会出现警告，并且结果不正确
    printf("\nB=%d", B);// B = 4
    printf("\nC=%d", C);// c = 10
    // D其实是A/(A+3)*3 = 1/(1+3) * 3 = 1/4 *3 = ?
    printf("\nE=%d", E);// 4
    printf("\nF=%d", F);// F = 0

    double d1 = 1.0 / 4 * 3; // 0.25 * 3	= 0.75
    printf("\nd1=%.2f", d1);

    //#define DEBUG void main() {
#ifdef DEBUG //如果定义过 DEBUG
    printf("\nok, 调试信息");
#endif
#ifndef DEBUG //如果没有定义过 DEBUF printf("hello, 另外的信息");
#endif
}

int main() {
    demo1();
    calcArea();
    diff();
}