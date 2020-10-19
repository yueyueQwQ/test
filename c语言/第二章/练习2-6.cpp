/*
    标准体重
*/
#include  <stdio.h>

int main(void)
{
    int height;
	double weight;
	
	printf("请输入您的身高：");    scanf("%d",&height);
	
	weight=(double)(height-100)*0.9;
	
	printf("您的标准体重是%5.1f公斤。\n",weight);
	
	return 0;
}
	
