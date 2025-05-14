#include <iostream>
#include <vector>


//使用快指针，和慢指针，将快指针的值赋给慢指针，如果遇到不是要删除的数时，慢指针不动，
//快指针走到下一个，这样判断到不是该删除的元素时，将值赋给慢指针所在数组位置，这样就能做到覆盖掉
//该删除的值，然后，用这种赋值方式，可以做到元素往前移动的效果 
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
