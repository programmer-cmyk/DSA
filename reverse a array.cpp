#include <iostream>
#include<vector>
using namespace std;

void printarr(int arr[],int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}


void reverse(int arr[],int n) {
	int ans[n];
	for(int i=n-1; i>=0; i--) {
		ans[i] = arr[n-i-1];
	}
	printarr(ans, n);

}



int main()
{
	int n = 5;
	int arr[] = {1,2,3,4,5};
	reverse(arr,n);
	return 0;

}