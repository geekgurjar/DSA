#include<bits/stdc++.h>
using namespace std;
int leftrotate(int a[],int n);
int main(){
int a[10],n;
cout<<"enter the size of array"<<endl;
cin>>n;
cout << "enter the elements of array";
for (int i=0;i<n;i++){
cin>>a[i];
}
leftrotate(a, n);

cout<<"rotated array is ";
for (int i=0;i<n;i++){
cout<<""<<a[i];
}
return 0;
}
int leftrotate(int a[],int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];

    }
    a[n-1]=temp;
    return 0;
}
