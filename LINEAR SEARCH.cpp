#include<iostream>
using namespace std;

int linear(int a[], int n , int item){
for(int i=0;i<n;i++){
        if(a[i]==item){
            return i+1;
        }
    }
return -1;
}

int main(){
int n;
cout<<"Enter  size:"<<endl;
cin>>n;
int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 if(linear(a,n,20)==-1){
    cout<<"NOT FOUND"<<endl;}
else{cout<<"Found 20 in "<<linear(a,n,20)<<"th Position"<<endl;}

return 0;
}
