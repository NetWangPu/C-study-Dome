#include<stdio.h> //预处理命令
#include<windows.h>//预处理命令
int main()   //主函数
{  //主函数开始
	HANDLE consolehwnd;//创建句柄
	consolehwnd = GetStdHandle(STD_OUTPUT_HANDLE);//实例化句柄
	SetConsoleTextAttribute(consolehwnd, FOREGROUND_RED);//设置字体颜色
	int a, b, c, d,x;  //此数值用来判断用户选择加减乘除
	for (int x = 1; x < 8;x++)printf("*\t");
	for (int x = 1; x < 10; x++)printf("*\t\t\t\t\t\t\t*\n");
	for (int x = 1; x < 9; x++)printf("*\t");
	printf("\n");
	printf("\t\t选择你的计算类型,输入1，2，3，4\n");  //输出选项并提示用户
	printf("\t\t\t1.加法\n");
	printf("\t\t\t2.减法\n");
	printf("\t\t\t3.乘法\n");
	printf("\t\t\t4.除法\n");
	scanf_s("%d", &a);  //调用函数scanf并赋值给a
	printf("输入数值并用逗号隔开\n");  //提示用户输入数值
	scanf_s("%d%d", &b, &c);   //调用scanf输入数值并赋值给b，c
	if (a == 1)  //如果a的值是1调用函数add并获取返回值
	{
		d = add(b, c);  //调用函数add并把返回值赋值给d
		printf("相加的结果是%d", d);  //输出相加的结果
	}
	if (a == 2)  //如果a的值是2调用函数subtract并获取返回值
	{
		d = subtract(b, c);  //调用函数subtract并把结果赋值给d
		printf("相减的结果是%d", d);  //输出相减的结果
	}
	if (a == 3)  //如果a的值是3调用函数cheng并获取返回值
	{
		d = cheng(b, c);  //调用将函数cheng并把返回结果值赋值d
		printf("相乘结果是%d",d);  //输出相乘结果
	}
	if (a == 4)  //如果a的值是4调用函数chu并获取返回结果
	{
		d = chu(b, c);   //调用函数chu并把返回结果赋值给d
		printf("相除结果是%d", d);  //输出想除结果
	}
	return 0;  //主函数返回值为0
}  //主函数结束
int add(int x, int y)  //函数add
{  //函数开始
	return x + y;  //计算x加y并将结果返回给主函数
}  //函数结束
int subtract(int x, int y)  //函数subtract
{  //函数开始
	return x - y;  //计算x减y并将结果返回给主函数
}  //函数结束
int cheng(int x, int y)  //函数cheng
{  //函数开始
	return x * y;  //计算x乘y结果并返回给主函数
}  //函数结束
int chu(int x, int y)  //函数chu
{  //函数开始
	return x / y;   //计算x除y的结果并返回给主函数
}  //函数结束

