#include<iostream>

using namespace std ;

int linear_search(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
            return i;
    }
    return -1;
}


int main(){
   int arr[] = {1, 2, 3, 4, 5};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 3;
   int result = linear_search(arr, n, x);
   if(result != -1)
       cout << "So can tim la: " << result << endl;
   else
       cout << "-Ko tim thay so can tim-" << endl;
   return 0;
}
