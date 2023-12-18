using namespace std;
#include<iostream>
#include<vector>
void printArray(vector<int> arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int sort(vector<int> arr,int size)
{
int countOne=0;
int countTwo=0;
int countZero=0;
int i=0;
// vector<int> Result(size);
while(i<size){
    if(arr[i]==0)
        countZero++;
    else if(arr[i]==1)
        countOne++;
    else
        countTwo++;
i++;

}
// cout<<countOne<<endl;
// cout<<countTwo<<endl;
// cout<<countZero<<endl;

for(int j=0;j<countZero;j++){
    arr[j]=0;

}
for(int j=countZero;j<countZero+countOne;j++){
    arr[j]=1;
    
}
for(int j=countZero+countOne;j<size;j++){
    arr[j]=2;
    
}
printArray(arr,size);
}
void sort2(vector<int> arr,int size){
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
        swap(arr[low],arr[mid]);
        low++;
        mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        
        }
         
    }
    printArray(arr,size);
}
int main(){
    int num;
    cout<<"enter the number of elements you want to have in the array";
    cin>>num;
    vector<int> arr(num);
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    // sort(arr,num);
    sort2(arr,num);
}