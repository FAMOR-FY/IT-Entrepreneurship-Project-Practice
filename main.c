#include<stdio.h>
#include<string.h>
#include "config.h"
#include "ioput.h"
#include "ui.h"
#include "calculator.h"

int main(){
    double *num_array;
    double num1;
    double num2;
    int type;
    double out;
    welcome();
    while(1){
        type=get_type();
        num_array = input();
        num1 = num_array[0];
        num2 = num_array[1];
        if(is_legal(num1,num2,type)){
            out=calculator(num1, num2, type);
            output(num1, num2, out, type);
        }
        if(is_again()==0)
            break;
    };
    bye();
    system("PAUSE");
    return 0;
}