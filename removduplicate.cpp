#include<bits/stdc++.h>
using namespace std;
int main ( ){
int a[10], n,i=0;
cout<<"enter the ssize of array";
cin>>n;
cout<<"enter the elements ";
for (int l=0;l<n;l++){
    cin>>a[l];
}

    for(int j=1;j<n;j++){
        if (a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }

    for(int k=0;k<i+1;k++){
        cout<<" "<<a[k];
    }
return 0;
}