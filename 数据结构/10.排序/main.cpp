#include <iostream>
#include <ctime>

using namespace std;

const int N = 1e5 + 10;

int n, arr[N];


//�������� 
//void insert_sort()
//{
//	for(int i = 2; i <= n; i++)//ǰ�����źõģ��������ǰ��� 
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


//ѡ������
//void selection_sort()//ǰ�����źõ� 
//{
//	for(int i = 1; i < n; i++)//���������׽Ǳ� 
//	{
//		int pos = i;//pos��С�ĽǱ� 
//		for(int j = i+1; j <= n; j++)
//		{
//			if(arr[j] < arr[pos])
//				pos = j;
//		 } 
//		swap(arr[pos], arr[i]);
//	}
// } 
 
 
//ð������
//void bubble_sort()//�������źõ� 
//{
//	for(int i = n; i > 1; i--)//�����������Ǳ� 
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


//������ 
//void down(int parent, int len)
//{
//	int child = parent * 2;
//	while(child <= len)
//	{
//		if(child + 1 <= len && arr[child + 1] > arr[child])		child++;//child�������
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
//	//���� 
//	for(int i = n/2; i >= 1; i--)
//	{
//		down(i, n); 
//	} 
//	//����
//	for(int i = n; i > 1; i--)//����������Ԫ�� 
//	{
//		swap(arr[1], arr[i]);
//		down(1, i-1);
//	} 
//}


//��������
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
 

//�鲢���� 
int temp[N];
void merge_sort(int left, int right) 
{
	if(left >= right)	return ;
	
	int mid = (left + right) / 2;
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	
	//�ϲ�
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
