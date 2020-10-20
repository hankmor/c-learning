/*
 * Created by Sam Sune on 2020/10/20.
 */

#include <stdio.h>

int main() {
    // += 的案例，其它的类似 -= *= /= %=

    // 有两个变量，a 和 b，要求将其进行交换，最终打印结果
    // 思路是通过一个临时变量来实现 a , b 值的交换
    int a = 10;
    int b = 20;
    int c = 12;
    int a2 = 10;
    int temp = a; // temp = 10
    a = b; // a = 20
    b = temp; // b = 10

    c += 3; // 等价 c = c + 3; c = 15
    c += b;// 等价 c = c + b; c = 25
    a2 += 1.7; // 等价于 a2 = a2 + 1.7，a2为int，则小数部分舍去, a2 = 11

    printf("\n a=%d b=%d c=%d a2=%d", a, b, c, a2);// a=20, b = 10 c = 25 a2=11
}