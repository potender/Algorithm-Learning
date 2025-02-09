#include <iostream>
#include <ctime>

using namespace std;

const int N = 1e5 + 10;

int n, arr[N];


//插入排序 
//void insert_sort()
//{
//	for(int i = 2; i <= n; i++)//前面是排好的，后面的往前面插 
//	{
//		int key = arr[i];
//		int j = i-1;
//		while(j >= 1 && arr[j] > key)
//		{
//			arr[j+1] = arr[j];
//			j--; 
//		}
//		arr[j+1] = key;
//	}
//}


//选择排序
//void selection_sort()//前面是排好的 
//{
//	for(int i = 1; i < n; i++)//待排数组首角标 
//	{
//		int pos = i;//pos最小的角标 
//		for(int j = i+1; j <= n; j++)
//		{
//			if(arr[j] < arr[pos])
//				pos = j;
//		 } 
//		swap(arr[pos], arr[i]);
//	}
// } 
 
 
//冒泡排序
//void bubble_sort()//后面是排好的 
//{
//	for(int i = n; i > 1; i--)//待排数组最后角标 
//	{
//		int flag = false;
//		for(int j = 1; j < i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				swap(arr[j], arr[j+1]);
//				flag = true;
//			} 
//		}
//		if(flag == false)
//			return ;
//	}
//} 


//堆排序 
//void down(int parent, int len)
//{
//	int child = parent * 2;
//	while(child <= len)
//	{
//		if(child + 1 <= len && arr[child + 1] > arr[child])		child++;//child是最大孩子
//		if(arr[child] <= arr[parent]) 	return ; 
//		swap(arr[child], arr[parent]);
//		parent = child;
//		child = parent * 2; 
//		
//	}
//}
//
//void heap_sort()
//{
//	//建堆 
//	for(int i = n/2; i >= 1; i--)
//	{
//		down(i, n); 
//	} 
//	//排序
//	for(int i = n; i > 1; i--)//堆里面最后的元素 
//	{
//		swap(arr[1], arr[i]);
//		down(1, i-1);
//	} 
//}


//快速排序
//int get_random(int left, int right)
//{
//	return arr[left + rand() % (right-left+1)];
//}
//
//void quick_sort(int left, int right)
//{
//	if(left >= right)	return ;
//	int p = get_random(left, right);
//	int i = left, l = left-1, r = right+1;
//	while(i < r)
//	{
//		if(arr[i] < p)	swap(arr[i++], arr[++l]);
//		else if(arr[i] == p)		i++;
//		else	swap(arr[i], arr[--r]);
//	}
//	quick_sort(left, l);
//	quick_sort(r, right);
//}
 

//归并排序 
int temp[N];
void merge_sort(int left, int right) 
{
	if(left >= right)	return ;
	
	int mid = (left + right) / 2;
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	
	//合并
	int i = left, j = mid + 1, t = left;;
	while(i <= mid && j <= right)
	{
		if(arr[i] < arr[j])		temp[t++] = arr[i++];
		else		temp[t++] = arr[j++];
	
	}
	while(i <= mid)	 temp[t++] = arr[i++];
	while(j <= right)	temp[t++] = arr[j++];
	for(int i = left; i <= right; i++)
		arr[i] = temp[i]; 
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)		cin >> arr[i];
	
//	insert_sort();

//	selection_sort();

//	bubble_sort();

//	heap_sort(); 

//	srand(time(0));
//	quick_sort(1, n);

	merge_sort(1, n);
	
	for(int i = 1; i <= n; i++)		cout << arr[i] << " "; 
	return 0;
}
