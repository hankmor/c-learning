//
// Created by Sam Sune on 2020/10/18.
//

#include "stdio.h"

void main() {
    int num = 1;
    // int类型在本机占用字节数：4
    printf("int类型占用字节数：%lu", sizeof(num)); // sizeof函数能够获取类型占用的字节数
}