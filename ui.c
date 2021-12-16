#include<stdio.h>
#include "config.h"
// 欢迎语
void welcome(){
    printf("Hello! 本程序可进行两个整数的加减乘除及取模运算。\n\n");
}
// 告别语
void bye(){
    printf("Bye!\n");
}
// 获取运算类型
int get_type(){
    int type;
    while (1){
        type = 0;
        printf("=================================\n");
        printf("=                               =\n");
        printf("=       加法运算：      1       =\n");
        printf("=       减法运算：      2       =\n");
        printf("=       乘法运算：      3       =\n");
        printf("=       除法运算：      4       =\n");
        printf("=       取模运算：      5       =\n");
        printf("=                               =\n");
        printf("=================================\n");
        printf("请输入运算功能所对应的序号： ");
        fflush(stdin);
        scanf("%d", &type);
        printf("\n");
        if(type==1||type==2||type==3||type==4||type==5){
            break;
        }else{
            printf("非法输入！\n\n");
        }
    }
    return type;
}
// 是否继续运算
int is_again(){
    char again_str = "";
    while (1){
        printf("是否需要继续计算？[y/n] ");
        scanf("%s", &again_str);
        printf("\n");
        switch(again_str){
            case 'y':
                return 1;
            case 'n':
                return 0;
            // �����ʽ�������ӡ��ʾ��������ѯ���Ƿ����ִ��
            default:
                printf("非法输入！\n\n");
        }
    }
}
