#include<bits/stdc++.h>
using namespace std;
int leftrotate(int a[],int n,int d);
int main(){
int a[10],d,n;
cout<<"enter the size of array"<<endl;
cin>>n;
cout << "enter the elements of array";
for (int i=0;i<n;i++){
cin>>a[i];
}
cout<<"enter the value by which you wnat to rotate an array"<<endl;
cin>>d;
d=d%n;
leftrotate(a, n,d);

cout<<"rotated array is ";
for (int i=0;i<n;i++){
cout<<""<<a[i];
}
return 0;
}
int leftrotate(int a[],int n,int d){
    int temp[d];
    for (int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];

    }
    for (int i=0;i<d;i++){
        a[i+n-d]=temp[i];  //kiu//bhai//////
    }
    
    return 0;
}