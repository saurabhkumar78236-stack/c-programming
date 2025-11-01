#include<stdio.h>
int main(){
    int i,n,m,loc,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter value in array: ");
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        m=a[i];
        loc=i+1;
        for(int j=1;j<n;j++){
            if(m>a[j]){
                m=a[j];
                loc=j;
            }
        }
        if(a[loc]<a[i]){
            temp=a[loc];
            a[loc]=a[i];
            a[i]=temp;
        }
    }
}
