#include <iostream>
#include<vector>
using namespace std;

int sortArr(vector<int>& arr1){
    
    sort(arr1.begin(),arr1.end());
    return arr1[0];
}



int main()
{
   vector<int> arr1 = {2,7,1,5};
   int ans = sortArr(arr1);
   cout<<ans;
   return 0;
   
   
   
}