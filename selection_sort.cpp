#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
    int minindex=i;

    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            swap(arr[minindex],arr[j]);
        }
    }
    }
}

int main(){
 int n;
    int arr[100];
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }

    selection_sort(arr,n);

    cout<<"Updated array:"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

    }
    return 0;

}