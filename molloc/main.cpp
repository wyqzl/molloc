//
//  main.cpp
//  molloc
//
//  Created by wyq on 15/12/9.
//  Copyright (c) 2015年 wyq. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *a;
    a=(int *)malloc(4);
    *a=100;
    printf("a=%x  *a=%x\n",a,*a);
    return 0;
}