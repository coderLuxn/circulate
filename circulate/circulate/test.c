#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//��ȡһ�У��пո�Ҳ��ӡ������abcd��
//дһ����������������һ���ַ�������
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;//�ַ�����Ԫ��
//	char* right = str + (len - 1);
//	int i = 0;
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;//������
//		*right = tem;
//		left++;//��ַ++
//		right--;
//	}
//}
//int main()
//{
//	char arr[20]={0};
//	//scanf("%s", arr);//arr���ǵ�ַ ����&��ַ abcd ef������ʱ��ֻ�ܽ������ո�ͽ���
//	gets(arr);//��ȡһ�У��пո�Ҳ��ӡ����
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//���sum=a+aa+aaa+aaa....
//int main()
//{
//	int n = 0;
//	int a = 0;  //2  3
//	scanf("%d%d",&a, &n);//2 22 22 
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//		//sum +=ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//��ӡˮ�ɻ���1-10000
//����λ��n�η�֮��
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10000; i++)
//	{
//		//1.����iλ�� i/10
//		int n = 1;
//		int sum = 0;
//		int tem = i;
//		while (tem/10)
//		{
//			n++;
//			tem = tem / 10;
//		}
//		//2.����λ����n�η����
//		tem = i;
//		while (tem)
//		{
//			sum = sum + (int)pow(tem % 10, n);//tem%10 ȡλ��
//			tem = tem / 10;
//		}
//		//3.�ж�i��sum�Ƿ����
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////��ӡ����
//       *7
//      ***6
//     *****5
//    *******4
//   *********3
//  ***********2
// *************1
//***************8//1 3 5 7 9 11 13 15
// *************1//13 11 9 7 
//  ***********2
//   *********3
//    *******4
//     *****5
//      ***6
//       *7

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    //�ϲ���
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j <n-i-1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2*i+1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //�²���
//    for (i = 0; i < n-1; i++)
//    {
//        int j = 0;
//        for (j = 0; j <=i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2*(n-1-i)-1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//��һ�������Ԫ��ǰ���ַ��������󲿷ַ�ż��
//void reverse(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//    int i = 0;
//    while (left < right)//�����<�ұ�
//    {
//        //�������ż��
//        while (left < right && arr[left] % 2 == 1)//ȷ��������ȫ��������ż��ʱ����߻��ұ߲��ظ�����
//        {
//            left++;
//        }
//        //���ұ�������
//        while (left < right && arr[right] % 2 == 0)
//        {
//            right--;
//        }
//        //�ж�
//        if (left < right)
//        {
//            tmp= arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    reverse(arr,sz);
//    print(arr,sz);
//    return 0;
//}

//��ת�ַ���
//����תk���ַ�
//������ⷨ
#include <string.h>
//void reverse(char* arr, int k)
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + (len - 1);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int temp = *left;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(left + j) = *(left + j + 1);
//		}
//		*(arr + (len - 1)) = temp;
//	}
//}
//int main()
//{
//	char arr[10] = { "abcdef" };
//	int k = 2;
//	reverse(arr, k);
//	printf("%s",arr);
//	return 0;
//}

//������ⷨ
// abcde
// baedc
// cdeab
//1.��ת�����
//2.����ת�ұ�
///3.�������ת����
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//}
//
//void left_reverse(char* arr,int k)
//{
//	assert(arr);//�жϵ�ַ�Ƿ�Ϊ��
//	int len = (int)strlen(arr);//���ַ������Ⱦ�Ҫ���ַ��Ϊ0
//	assert(k<=len);//�ж�
//	reverse(arr, arr+k - 1);//ת�����
//	reverse(arr+k, arr+len - 1);//ת���ұ�
//	reverse(arr, arr+len - 1);//ת������
//}
////int main()
////{
////	char arr[] = { "abcdefd" };
////	left_reverse(arr,3);
////	printf("%s", arr);
////	return 0;
////}
//
////�ж�һ������ת֮���Ƿ������
//int test1(char* s1, char* s2)
//{
//	int len = (int)strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_reverse(s1, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = { "abcdef" };
//	char s2[] = { "cdefab" };
//	int ret=test1(s1, s2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no");
//	return 0;
//}

//�ÿ⺯���Ƚ� strncat strstr
//int left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.��str1�ַ�������׷��һ��str1�ַ��� strncat
//	//strcat�����Լ�׷���Լ���ֻ��׷�ӱ������
//	strncat(str1, str1,6);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�strstr
//	char* ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "cdefab";
//	int ret=left_move(s1, s2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no");
//	return 0;
//}

//���Ͼ���
//int FindMun(int arr[3][3],int row,int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
int FindMun(int arr[3][3], int* row, int* col, int k)
{
	int x = 0;
	int y = *col - 1;
	while (x <= *row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int s1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k =7 ;
	int x = 3;
	int y = 3;
	//int ret=FindMun(s1,3,3,k);
	int ret = FindMun(s1, &x,&y, k);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d", x, y);
	}
	else
		printf("�Ҳ���");
	return 0;
}