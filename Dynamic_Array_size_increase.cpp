#include<bits/stdc++.h>
using namespace std;
int main(){
    int*a=new int[5];//dynamic array create
    for(int i=0;i<5;i++) cin>>a[i];
    int*b=new int[7];// increase dynamic array size;
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }
    b[5]=100;b[6]=900;
    for(int i=0;i<7;i++) cout<<b[i]<<" "<<endl;
    //delete[] a;//delete dynamic array a; check
    for(int i=0;i<5;i++) cout<<a[i]<<" ";//dynamic array a; check
    return 0;
}