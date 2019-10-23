#include<bits/stdc++.h>
using namespace std;
void inssort(int arr1[], int size){
    int temp,i;
    for(int i=1;i<size;i++){
        temp=arr1[i];
        j=i-1;
        while((temp<arr1[j]) && (j>=0)){
            arr1[j+1]=arr1[j];
            j--;
        }
        arr1[j+1]=temp;
    }
}
void main(){
    const int size=5;
    int arr1[size];
    clrscr();
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    inssort(arr1,size);
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}