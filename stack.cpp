#include<bits/stdc++.h>
using namespace std;
int push(int a[],int n,int data,int &top);
int pop(int a[],int n ,int data,int &top);
int display(int a[],int n,int top );
int main (){
int n,top=-1,data;
int a[100];
int choice;
cout<<"enter the max size of stack"<<endl;
cin>>n;


while (choice!=4)
{
    cout<<"enter 1-->push"<<endl<<"enter 2-->pop"<<endl<<"enter 3-->display";
    cin>>choice;
    switch (choice)
 {
 case 1:
 cout << "enter the data to add in the stack"<<endl;
 cin>>data;
   push(a,n,data,top);
    break;
 case 2:
   pop(a,n,data,top);
    break;
 case 3:
   display(a,n,top);
    break;
 
 default:
    break;
 }
}
return 0;
}
    int display(int a[],int n, int top){
        for(int i=0;i<=top;i++){
            cout<<a[i];
        }
        return 0;
    }



    int push(int a[], int n , int data , int &top){
        if (top==-1){
        top=0;
        a[top]=data;
        
        }
        else if(top+1==n-1){
            cout <<"overflow"<<endl;
        }
        else{
            top++;
            a[top]=data;

        }
return 0;
}
int pop(int a[],int n,int data,int &top ){
    if (top==-1){
        cout<<"underflow";

    }
    else if(top==0){
        // int temp = a[top];
        
        top--;
    }
    else{
        // int tempp =a[top];
     
        top--;
    }
return 0;
}