#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//读取一行，有空格也打印出来“abcd”
//写一个函数，可以逆序一个字符串内容
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;//字符串首元素
//	char* right = str + (len - 1);
//	int i = 0;
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;//解引用
//		*right = tem;
//		left++;//地址++
//		right--;
//	}
//}
//int main()
//{
//	char arr[20]={0};
//	//scanf("%s", arr);//arr就是地址 不用&地址 abcd ef交换的时候只能交换到空格就结束
//	gets(arr);//读取一行，有空格也打印出来
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//求和sum=a+aa+aaa+aaa....
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

//打印水仙花束1-10000
//各个位的n次方之和
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10000; i++)
//	{
//		//1.计算i位数 i/10
//		int n = 1;
//		int sum = 0;
//		int tem = i;
//		while (tem/10)
//		{
//			n++;
//			tem = tem / 10;
//		}
//		//2.各个位数的n次方相加
//		tem = i;
//		while (tem)
//		{
//			sum = sum + (int)pow(tem % 10, n);//tem%10 取位数
//			tem = tem / 10;
//		}
//		//3.判断i和sum是否相等
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////打印菱形
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
//    //上部分
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
//    //下部分
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

//把一个数组的元素前部分放奇数，后部分放偶数
//void reverse(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//    int i = 0;
//    while (left < right)//当左边<右边
//    {
//        //从左边找偶数
//        while (left < right && arr[left] % 2 == 1)//确保当遇到全是奇数或偶数时，左边或右边不重复交换
//        {
//            left++;
//        }
//        //从右边找奇数
//        while (left < right && arr[right] % 2 == 0)
//        {
//            right--;
//        }
//        //判断
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

//旋转字符串
//左旋转k个字符
//暴力求解法
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

//三步求解法
// abcde
// baedc
// cdeab
//1.先转换左边
//2.再旋转右边
///3.最后再旋转整体
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
//	assert(arr);//判断地址是否为空
//	int len = (int)strlen(arr);//求字符串长度就要求地址不为0
//	assert(k<=len);//判断
//	reverse(arr, arr+k - 1);//转换左边
//	reverse(arr+k, arr+len - 1);//转换右边
//	reverse(arr, arr+len - 1);//转换整体
//}
////int main()
////{
////	char arr[] = { "abcdefd" };
////	left_reverse(arr,3);
////	printf("%s", arr);
////	return 0;
////}
//
////判断一个数旋转之后是否等于它
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

//用库函数比较 strncat strstr
//int left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.在str1字符串后面追加一个str1字符串 strncat
//	//strcat不能自己追加自己，只能追加别的数组
//	strncat(str1, str1,6);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串strstr
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

//杨氏矩阵
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
		printf("找到啦\n");
		printf("下标是：%d %d", x, y);
	}
	else
		printf("找不到");
	return 0;
}