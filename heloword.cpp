#include<iostream>

using namespace std ;

int linear_search(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
            return i;
    }
    return -1;
}

int binary_search(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == x)
            return mid; 
        else if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}


int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/ sizeof(a[0]);

    int x;
    cout <<"Hay nhap vao so ban can tim:"; 
    cin >> x;

    int kq1 = linear_search(a,n,x);
    int kq2 = binary_search(a,n,x);

    if(kq1 != -1 ){
        cout << "Ket qua tim kiem tuyen tinh: " << kq1 << endl;
    } else {
        cout << "Khong tim thay ket qua tuyen tinh." << endl;
    }

    if(kq2 != -1 ){
        cout << "Ket qua tim kiem nhi phan: " << kq2 << endl;
    } else {
        cout << "Khong tim thay ket qua nhi phan." << endl;
    }

    return 0;
}

