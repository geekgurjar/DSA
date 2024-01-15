#include<bits/stdc++.h>
using namespace std;
int seclarginarray (int a[], int n);
int main(){
    int a[10],n;
    cout<<"enter the no. of elements ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<< "the elements are";
        for (int i = 0; i < n; i++)
        {  
            cout<<" "<<a[i];
        }

    int seclargest =seclarginarray(a,n);
    cout <<" the seclargest no is "<<seclargest;



    return 0;
}
int seclarginarray(int a[] ,int n ){
    int largest =a[0];
    int seclargest=-9999;
    for (int i = 0; i < n ; i++)
    {
        if (a[i]>largest){
            seclargest = largest;
            largest =a[i];
            
        }
    }
return seclargest;
}