#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ʮ�����������ֵ
int main() {
	int arr[10] = {0};//��ֵ��ʼ��
	//����ʮ������
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
//		printf("�������%d�����֣�", i+1);
//		inputCount=scanf("%d",&arr[i]);
//		if (inputCount != 1) {
//			printf("д�����ݴ���\n");
//		}
//		else
//		{
//			printf("д�����ݳɹ�\n");
//		}
//	
//	}
//	for (i = 0; i < 10; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		
//	}
//	printf("�����ɵ����ֵΪ��");
//	printf("%d", max);
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("�������%d�����֣�", i+1);
//		scanf("%d", &arr[i]);
//	}
//	//���
//	float sum = 0;
//	for (i = 0; i < 10; i++) {
//		sum = sum + arr[i];
//	}
//	//��ƽ��ֵ
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

