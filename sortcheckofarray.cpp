#include<bits/stdc++.h>
using namespace std;
int main ( ){
int a[10], n,flag=0;
cout<<"enter the ssize of array";
cin>>n;
cout<<"enter the elements ";
for (int i=0;i<n;i++){
    cin>>a[i];
}
for (int i=0;i<n;i++){
    if (a[i]>a[i+1]){
        flag++;
        cout<<"array is not sorted ";
        break;
    }
    
}
if (flag ==0){
    cout<< "array is sorted ";
}

return 0;
}