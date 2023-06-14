#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入十个数字找最大值
int main() {
	int arr[10] = {0};//数值初始化
	//输入十个数字
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		
	}

	int max = arr[0];

	for (i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n",arr[i]);
	}
	printf("%d\n",max);
	return 0;
}

//#include <stdio.h>
//
//int main(){
//	int arr[10] = { 0 };
//	int max = arr[0];
//	int i = 0;
//	int inputCount = 0;
//	for (i = 0; i < 10; i++){
//		printf("请输入第%d个数字：", i+1);
//		inputCount=scanf("%d",&arr[i]);
//		if (inputCount != 1) {
//			printf("写入数据错误\n");
//		}
//		else
//		{
//			printf("写入数据成功\n");
//		}
//	
//	}
//	for (i = 0; i < 10; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		
//	}
//	printf("分析可得最大值为：");
//	printf("%d", max);
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("请输入第%d个数字：", i+1);
//		scanf("%d", &arr[i]);
//	}
//	//求和
//	float sum = 0;
//	for (i = 0; i < 10; i++) {
//		sum = sum + arr[i];
//	}
//	//求平均值
//	float avg = sum / 10.0;
//	printf("acg = %.2f\n", avg);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//		
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++) {
//
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

