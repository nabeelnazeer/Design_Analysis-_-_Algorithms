#include<iostream>
using namespace std;

 int linearSearch(int arr[], int key,int limit){
    for(int i=0;i<limit;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int index, value;
    
    cout<<"enter the limit of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array with space "<<endl;
    for(int i= 0;i<n;i++){
        
        cin>>arr[i];
    }
    cout<<"enter element to find :"<<endl;ṇ
    cin>>value;
    index = linearSearch(arr,value,n);
    if(index == -1){
        cout<<"NIL"<<endl;
    }else{
        cout<<"the value is "<<arr[index]<<"index is "<<index;
    }

}