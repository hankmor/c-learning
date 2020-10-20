/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

/*
 * 1)有多种类型的数据混合运算时，系统首先自动将所有数据转换成精度最大的那种数据类型，然后再进行计算(如
 * int 型和 short 型运算时，先把 short 转成 int 型后再进行运算)。
 * 2)若两种类型的字节数不同，转换成字节数大的类型，若两种类型的字节数相同，且一种有符号，一种无符号， 则转换成无符号类型
 * 3)在赋值运算中，赋值号两边量的数据类型不同时，赋值号右边的类型将转换为左边的类型，如果右边变量的数据类型长度比左边长时，
 * 将丢失一部分数据，这样会降低精度，丢失的部分按四舍五入向前舍入
 */
int main() {
    // 举例1
    char c1 = 'a';
    int num1 = c1; // ok, c1提升为int
    double d1 = num1; // ok, int提升为double
    printf("num1=%d, d1=%f", num1, d1);

    //ok
    // 举例2
    short s1 = 10;
    int num2 = 20; // ok, short提升为int
    int num3 = s1 + num2; //ok，结果提升为int
    printf("\nnum2=%d, num3=%d", num2, num3);

    // 举例 3
    float f1 = 1.1f; //ok
    double d2 = 4.58667435;
    f1 = d2; // 出现精度损失 (double -> float)
    printf("\nf1=%.8f", f1); // error, 期望： 4.58667435，实际结果不是

    // 强制类型转换

    double d3 = 1.934;
    int num4 = (int) d3;    //这里注意，不是进行四舍五入，而是直接截断小数后的部分

    //强制转换只对最近的数有效, 如果希望针对更多的表达式转换，使用（）
    int num5 = (int) 3.5 * 10 + 6 * 1.5; //	3.5先转为3在乘以10，3 * 10 + 6 * 1.5 = 30 + 9.0 = 39.0
    int num6 = (int) (3.5 * 10 + 6 * 1.5); // 35.0 + 9.0 = 44.0 -> int = 44
    printf("\n d3=%f, num4=%d", d3, num4); // d1=1.934000, num4=1
    printf("\nnum5=%d num6=%d", num5, num6); // num5=39, num6=44
}