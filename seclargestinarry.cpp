#include<bits/stdc++.h>
using namespace std;
int largestinarray (int a[], int n);
int seclargestinarray (int a[], int n, int largeeest);
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

    int largeeest = largestinarray(a,n);
    cout <<" the largest no is "<<largeeest;
int secondlargest = seclargestinarray(a,n,largeeest);
    cout <<" the seclargest no is "<<secondlargest;



    return 0;
}
int largestinarray(int a[], int n){   
    int largest =0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]>largest){
                largest = a[i];
            }

        }   
    
return largest;
}
int seclargestinarray(int a[], int n, int largeeest){   
    int seclargest =-1;
        for (int i = 0; i < n; i++)
        {
            if (a[i]>seclargest && a[i] != largeeest){
                seclargest = a[i];
            }

        }   
    
return seclargest;
}
