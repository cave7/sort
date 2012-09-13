#include <stdio.h>

int heapsort(int *a,int len){
    build_heap(a,len);
    int tmp;
    int newlen=len;
    while(newlen>1){
        //swap head with last
        tmp=a[0];
        a[0]=a[newlen-1];
        a[newlen-1]=tmp;
        newlen--;
        //heapify new heap
        heaplify(a,newlen,0);
        
    }
    return 0;
}

int build_heap(int *a,int len){
    int i;
    for (i=len-1; i>=0; i--) {
        if(2*i+1>len-1) continue;
        heaplify(a,len,i);
    }
    return 0;
}
int heaplify(int *a,int len, int index){
    int left=2*index+1;
    int right=2*index+2;
    int tmp;
    if (left>len-1) {
        return 0;
    }
    else if(left==len-1){
        if(a[index]<a[left]){
            //swap
            tmp=a[index];
            a[index]=a[left];
            a[left]=tmp;
        }
        return 0;
    }
    else{
        if (a[index]<a[left]||a[index]<a[right]) {
            if (a[left]<a[right]) {
                //swap right with parent
                tmp=a[index];
                a[index]=a[right];
                a[right]=tmp;
                heaplify(a,len,right);
            }
            else{
                //swap left with parent
                tmp=a[index];
                a[index]=a[left];
                a[left]=tmp;
                heaplify(a,len,left);
            }
        }
    }
}

int main(){
    int a[10]={2,1,4,7,5,8,9,20,0,3};
    int len=10;
    heapsort(a,len);
    int i;
    for (i=0; i<len; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}