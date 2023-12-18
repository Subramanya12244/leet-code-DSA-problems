using namespace std;
#include<iostream>
void reverseArray(int arr[],int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main(){
    int num;
    cout<<"enter the number of elements you want to have in the array";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    reverseArray(arr,num);
    printArray(arr,num);
}