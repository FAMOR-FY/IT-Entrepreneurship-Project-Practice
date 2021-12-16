#include<stdio.h>
#include<string.h>
// 配置头文件
#include "config.h"
// 输入输出头文件
#include "ioput.h"
// 操作提示头文件
#include "ui.h"
// 计算器程序头文件
#include "calculator.h"

int main(){
    double *num_array;
    double num1;
    double num2;
    int type;
    double out;
    // 欢迎
    welcome();
    while(1){
        // 获取运算类型
        type=get_type();
        // 获取输入
        num_array = input();
        num1 = num_array[0];
        num2 = num_array[1];
        // 判断格式是否合法
        if(is_legal(num1,num2,type)){
            // 计算
            out=calculator(num1, num2, type);
            // 输出结果
            output(num1, num2, out, type);
        }
        // 判断是否继续预算：1/0
        if(is_again()==0)
            break;
    };
    // 告别
    bye();
    // 暂停，防止窗体直接关闭
    system("PAUSE");
    return 0;
}
