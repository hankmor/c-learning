//
// Created by Sam Sune on 2020/10/19.
//

#include <stdio.h>

void fun1() {
    double score = 70;//成绩
    if (score >= 60 && score <= 80) {
        printf("\nok1");
    } else {
        printf("\nok2");
    }
}

void fun2() {
    int a = 10, b = 99;
    //说明：
    //1. 在进行 && 操作时, 如果第一个条件为false ,则后面的条件不在判断
    //2. 该现象称为 短路现象，所以 逻辑与 也称为 短路逻辑与
    if (a < 2 && ++b > 99) {  //
        printf("\nok100");
    }
    printf("\nb=%d", b); //b=99
}

void fun3() {
    int a = 10, b = 99;
    //说明
    //1. 在进行逻辑或(||)时，如果第一个条件为真，则不再执行后面的条件，整个结果为真
    //2. 该现象称为 逻辑或短路现象，因此 逻辑或也称为 短路逻辑或
    if (a > 5 || b++ > 100) { //
        printf("\nok100");
    }
    printf("\nb=%d", b); // b= 99
}

void fun4() {
    int score = 100;
    int res = score > 199;   // res = 0
    if (res) {
        printf("\nhello, tom\n");
    }
    if (!res) { // !res = 1
        printf("\nhello,jack\n");
    }
}

int main() {
    printf("\n----func1----");
    fun1();
    printf("\n----func2----");
    fun2();
    printf("\n----func3----");
    fun3();
    printf("\n----func4----");
    fun4();
}