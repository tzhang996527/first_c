//
//  charcode.c
//  first_c
//
//  Created by 叶溪 on 2018/7/10.
//  Copyright © 2018年 叶溪. All rights reserved.
//

#include "charcode.h"
#include "math.h"

/*
 float：
 1bit（符号位） 8bits（指数位） 23bits（尾数位）
 精度是由尾数的位数来决定的
 float：2^23 = 8388608，一共七位，这意味着最多能有7位有效数字，
 但绝对能保证的为6位，也即float的精度为6~7位有效数字；
*/

int main(void){
    double x =2, y = 23;
    double result = pow(x,y);
    //double result = 1.1234561111;
    printf("%f\n",result);
    //printf("%x\n",result);
    
    char ch;
    int i = 1000;
    
    printf("Please enter a chafracter.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.%d\n",ch,ch,i);
    
    printf("Type int has a size of %zd bytes\n",sizeof(int));
    printf("Type char has a size of %zd bytes\n",sizeof(char));
    printf("Type float has a size of %zd bytes\n",sizeof(float));
    printf("Type doule has a size of %zd bytes\n",sizeof(double));
    printf("Type short has a size of %zd bytes\n",sizeof(short));
    printf("Type long double has a size of %zd bytes\n",sizeof(long double));
    
    return 0;
}
