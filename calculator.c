#include<stdio.h>
#include <math.h>
#include "config.h"


double Sum(double num1,double num2){
    return num1 + num2;
}

double Differ(double num1,double num2){
    return num1 - num2;
}

double Prod(double num1,double num2){
    return num1 * num2;
}

double Quot(double num1,double num2){
    return num1 / num2;
}

double Mod(double num1,double num2){
    return fmod(num1,num2);
}

int is_legal(double num1,double num2,int type){
    if((type==QUOT||type==MOD)&&num2==0){
        printf("?????0?????????????\n\n");
        return 0;
    }else{
        return 1;
    }
}

double calculator(double num1,double num2,int type){
    switch(type){
    case SUM:
        return Sum(num1, num2);
    case DIFFER:
        return Differ(num1, num2);
    case PROD:
        return Prod(num1, num2);
    case QUOT:
        return Quot(num1, num2);
    case MOD:
        return Mod(num1, num2);
    }
}
