#include <iostream>
#include <vector>


//ʹ�ÿ�ָ�룬����ָ�룬����ָ���ֵ������ָ�룬�����������Ҫɾ������ʱ����ָ�벻����
//��ָ���ߵ���һ���������жϵ����Ǹ�ɾ����Ԫ��ʱ����ֵ������ָ����������λ�ã����������������ǵ�
//��ɾ����ֵ��Ȼ�������ָ�ֵ��ʽ����������Ԫ����ǰ�ƶ���Ч�� 
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5,3,7};
	int n; 
	
	cin >> n; 
	
	for(int fast = 0, slow = 0; fast < sizeof(arr)/sizeof(arr[0]); fast++){
		if(arr[fast] != n){
			arr[slow] = arr[fast];
			slow++;
		}
	}
	for(int i : arr){
		cout << i<<endl;
	}
} 
