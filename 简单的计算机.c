#include<stdio.h> //Ԥ��������
#include<windows.h>//Ԥ��������
int main()   //������
{  //��������ʼ
	HANDLE consolehwnd;//�������
	consolehwnd = GetStdHandle(STD_OUTPUT_HANDLE);//ʵ�������
	SetConsoleTextAttribute(consolehwnd, FOREGROUND_RED);//����������ɫ
	int a, b, c, d,x;  //����ֵ�����ж��û�ѡ��Ӽ��˳�
	for (int x = 1; x < 8;x++)printf("*\t");
	for (int x = 1; x < 10; x++)printf("*\t\t\t\t\t\t\t*\n");
	for (int x = 1; x < 9; x++)printf("*\t");
	printf("\n");
	printf("\t\tѡ����ļ�������,����1��2��3��4\n");  //���ѡ���ʾ�û�
	printf("\t\t\t1.�ӷ�\n");
	printf("\t\t\t2.����\n");
	printf("\t\t\t3.�˷�\n");
	printf("\t\t\t4.����\n");
	scanf_s("%d", &a);  //���ú���scanf����ֵ��a
	printf("������ֵ���ö��Ÿ���\n");  //��ʾ�û�������ֵ
	scanf_s("%d%d", &b, &c);   //����scanf������ֵ����ֵ��b��c
	if (a == 1)  //���a��ֵ��1���ú���add����ȡ����ֵ
	{
		d = add(b, c);  //���ú���add���ѷ���ֵ��ֵ��d
		printf("��ӵĽ����%d", d);  //�����ӵĽ��
	}
	if (a == 2)  //���a��ֵ��2���ú���subtract����ȡ����ֵ
	{
		d = subtract(b, c);  //���ú���subtract���ѽ����ֵ��d
		printf("����Ľ����%d", d);  //�������Ľ��
	}
	if (a == 3)  //���a��ֵ��3���ú���cheng����ȡ����ֵ
	{
		d = cheng(b, c);  //���ý�����cheng���ѷ��ؽ��ֵ��ֵd
		printf("��˽����%d",d);  //�����˽��
	}
	if (a == 4)  //���a��ֵ��4���ú���chu����ȡ���ؽ��
	{
		d = chu(b, c);   //���ú���chu���ѷ��ؽ����ֵ��d
		printf("��������%d", d);  //���������
	}
	return 0;  //����������ֵΪ0
}  //����������
int add(int x, int y)  //����add
{  //������ʼ
	return x + y;  //����x��y����������ظ�������
}  //��������
int subtract(int x, int y)  //����subtract
{  //������ʼ
	return x - y;  //����x��y����������ظ�������
}  //��������
int cheng(int x, int y)  //����cheng
{  //������ʼ
	return x * y;  //����x��y��������ظ�������
}  //��������
int chu(int x, int y)  //����chu
{  //������ʼ
	return x / y;   //����x��y�Ľ�������ظ�������
}  //��������

