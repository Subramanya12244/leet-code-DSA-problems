using namespace std;
#include<iostream>
void Maximum(int arr[],int size){
    int Max=-1;
    for(int i=0;i<size;i++){
        if(Max<arr[i])
        Max=arr[i];
    }
    cout<<"maximum nor in the array is:"<<Max<<endl;
}
void Minimum(int arr[],int size){
    int Min=arr[0];
    for(int i=1;i<size;i++){
        if(Min>arr[i])
        Min=arr[i];
    }
    cout<<"maximum nor in the array is:"<<Min<<endl;
}
int main()
{
int num;
cout<<"enter the number of elements you want to have in the array";
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
        cin>>arr[i];
    }
Maximum(arr,num);
Minimum(arr,num);
}