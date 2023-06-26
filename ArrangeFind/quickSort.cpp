#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int left, int right){
    int i = left - 1;
    for (int j = left; j<right;j++){
        if (a[j]<=a[right]){
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[right]);
    return i;
}
void quickSort(int a[],int left, int right){
    if (left<right){
        int pos = partition(a, left, right);
        quickSort(a, left, pos-1);
        quickSort(a, pos+1, right);
    }
}


int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    quickSort(a, 0, n-1);
    for (int x : a) cout << x << " ";
    return 0;
}