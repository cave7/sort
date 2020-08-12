#include<bits/stdc++.h>
using namespace std;
int partition(int A[],int lb,int ub)
{
 int pivot=A[lb];
 int start=lb;
 int end=lb+1;
 while(end<=ub)
 {
     if(A[end]>pivot)
     {
     end++;
     start++;
     }
     
     if(pivot>A[end])
     {
         int temp=A[start];
         A[start]=A[end];
         A[end]=temp;
         start++;
         end++;
     }

 }
return start;
}
void quicksort(int A[],int lb,int ub)
{
    if(lb<ub){
    int loc=partition(A,lb,ub);
    quicksort(A,lb,loc-1);
    quicksort(A,loc+1,ub);
    }
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    int lb=0;int ub=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    quicksort(A,lb,ub);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

}
