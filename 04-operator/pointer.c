//
// Created by Sam Sune on 2020/10/18.
//

#include "stdio.h"

void pointerDemo() {
    // 定义int类型的变量num
    int num = 1;
    // 定义了一个指针，指向变量num的内存地址，指针变量前增加*号
    int *point = &num;

    // 通过point变量取出的是指针对应的地址
    // 输出point对应的地址=0x7ffee0042aec，这里的地址每次运行程序时自动分配，并不会一致
    // 指针变量在内存也有自己的内存地址，可以通过&point打印指针变量的内存地址
    // 打印指针需要使用%p格式
    printf("point指针本身的内存地址: %p, point指针指向的内存地址: %p", &point, point);
    // 输出point指针指向的地址所对应的内存中的值，这里就是num变量的值1
    printf("\npoint指针对应的值: %d", *point);

    // 通过指针修改内存存储的值
    *point = 100;
    printf("\npoint指针本身的内存地址: %p, point指针指向的内存地址: %p", &point, point);
    printf("\npoint指针对应的值: %d", *point);
}

void practise1() {
    int a = 100;
    int b = 300;
    int *ptr = &a;
    *ptr = 200; // a = 200
    ptr = &b; // ptr指针指向了b变量的内存地址
    *ptr = 400; // b = 400
    printf("a=%d, b=%d, *ptr=%d", a, b, *ptr);
    // a=200, b=400, *ptr=400
}

int main() {
    pointerDemo();
    printf("\n-----------------\n");
    practise1();
}