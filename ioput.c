#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "config.h"


char *get_str(int i){
    char str_array[1024];
    printf("请输入第%d个整数： ",i);
    scanf("%s",str_array);
    printf("\n");
    char *num_temp;
    num_temp = &str_array;
    return num_temp;
}

int is_int(char *str_temp){
    int flag = 1;
    int len = strlen(str_temp);
    for (int i = 0; i < len;i++){
        if(str_temp[i]>57||str_temp[i]<48){
            flag = 0;
            break;
        }
    }
    return flag;
}

double str2dbl(char *num_temp){
    double temp;
    temp = atof(num_temp);
    return temp;
}

double *input(){
    int i = 1;
    double nums[2];
    double *num_array;
    while (i<=2){
        char *num_temp = get_str(i);
        if(is_int(num_temp)){
            nums[i - 1] = str2dbl(num_temp);
            i++;
        }else{
            printf("输入格式有误！\n\n");
        }
    }
    num_array = &nums;
    return num_array;
}

void output(double num1,double num2,double out,int type){
    switch(type){
        case SUM:
            printf("两数之和：%lf + %lf = %lf\n\n",num1,num2,out);
            break;
        case DIFFER:
            printf("两数之差：%lf - %lf = %lf\n\n",num1,num2,out);
            break;
        case PROD:
            printf("两数之积：%lf × %lf = %lf\n\n",num1,num2,out);
            break;
        case QUOT:
            printf("两数之商：%lf ÷ %lf = %lf\n\n",num1,num2,out);
            break;
        case MOD:
            printf("两数之模：%lf %% %lf = %lf\n\n",num1,num2,out);
            break;
    }
}

// int main()
// {
//     int *nums;
//     nums = input();
//     printf("%d,%d", nums[0], nums[1]);
//     scanf("%d", nums);
//     return 0;
// }
