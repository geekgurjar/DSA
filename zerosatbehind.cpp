// #include<bits/stdc++.h>
// using namespace std;
// int removezeroes(int a[],int n);
// int main()
// {
// int a[10],n;
// cout<<"enter the size of array"<<endl;
// cin>>n;
// cout << "enter the elements of array";
// for (int i=0;i<n;i++){
// cin>>a[i];
// }
// removezeroes(a,n);
// cout<<"new array is ";
// for (int i=0;i<n;i++){
// cout<<""<<a[i];
// }
// return 0;
// }
// int removezeroes(int a[], int n){
// int temp[n];
// int count=0;
// for(int i=0;i<n;i++){
//     if(a[i]==0){
//         count++;

//     }

//     else{
//         temp[i]=a[i];
        
//     }
// }
// cout<<count<<endl;
// for(int i=0;i<n-count;i++){
//     a[i]=temp[i];
// }
// for(int i=n-count;i<n;i++){
//     a[i]=0;
// }
// return 0;

// }





#include<bits/stdc++.h>
using namespace std;
int zeroatbehind(int a[],int n, int j);
int firstzero(int a[],int n,int j);
int main(){
    int a[10],n,j=0;
cout<<"enter the size of array"<<endl;
cin>>n;
cout << "enter the elements of array";
for (int i=0;i<n;i++){
cin>>a[i];
}
firstzero(a,n,j);
zeroatbehind(a,n,j);
cout << "new array is :";
for (int i=0;i<n;i++){
cout <<","<<a[i];
}


return 0;

}
int firstzero(int a[], int n, int j){
while (a[j]!=0)
{
    j++;
}
return 0;
}

int zeroatbehind(int a[],int n, int j){
    for (int i=j+1;i<n;i++){
        if (a[i]!=0){
            a[j]=a[i];
            a[i]=0;
            j++;
        }
    }


    return 0;
}
