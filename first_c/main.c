//
//  main.c
//  first_c
//
//  Created by 叶溪 on 2018/7/8.
//  Copyright © 2018年 叶溪. All rights reserved.
//

#include <stdio.h>

int main1(int argc, const char * argv[]) {
    // insert code here...
    int i = 0;
    int j = 2;
    int z =0;
    
    //char beep = '\007';
    
    float flot;
    
    flot = -1.56E+12;
    double doub = -1.56e+12;
    long double l_doub = -1.56e+12;

    z = i + j;
    //printf("Hello, World!\007\n %d",z);
    printf("%f\n",flot);
    printf("%f\n",doub);
    printf("%Lf\n",l_doub);
    printf("Grammps,\"a \\ is a backslash.\"\n");
    return 0;
}
