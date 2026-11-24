#include <iostream>
using namespace std;
int main(){
int i,j;
int n=6;
int temp;
int arr[6]={10,3,2,4,57,1};
for(i=0;i<n;i++){
    for(j=0;j<=n-1;j++){
        if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
} for(i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
}