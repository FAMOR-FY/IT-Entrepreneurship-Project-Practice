#include<stdio.h>
#include "config.h"

void welcome(){
    printf("Hello! ������ɽ������������ļӼ��˳���ȡģ���㡣\n\n");
}

void bye(){
    printf("Bye!\n");
}

int get_type(){
    int type;
    while (1){
        type = 0;
        printf("=================================\n");
        printf("=                               =\n");
        printf("=       �ӷ����㣺      1       =\n");
        printf("=       �������㣺      2       =\n");
        printf("=       �˷����㣺      3       =\n");
        printf("=       �������㣺      4       =\n");
        printf("=       ȡģ���㣺      5       =\n");
        printf("=                               =\n");
        printf("=================================\n");
        printf("���������㹦������Ӧ����ţ� ");
        fflush(stdin);
        scanf("%d", &type);
        printf("\n");
        if(type==1||type==2||type==3||type==4||type==5){
            break;
        }else{
            printf("�Ƿ����룡\n\n");
        }
    }
    return type;
}

int is_again(){
    char again_str = "";
    while (1){
        printf("�Ƿ���Ҫ�������㣿[y/n] ");
        scanf("%s", &again_str);
        printf("\n");
        switch(again_str){
            case 'y':
                return 1;
            case 'n':
                return 0;
            // �����ʽ�������ӡ��ʾ��������ѯ���Ƿ����ִ��
            default:
                printf("�Ƿ����룡\n\n");
        }
    }
}
