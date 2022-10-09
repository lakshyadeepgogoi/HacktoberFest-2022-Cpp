#include<iostream>
using namespace std;

// Function starts here
 
int binarySearch(int arr[], int n, int key){
    int s=0;
    int last=n;
    while(s<=last){
        int mid=(s+last)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            last=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter the size for the array= "<<endl; //Enter the size of the arrays
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value for "<<i+1<<" = ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value to be search= ";
    cin>>key;

    cout<<"The loaction is "<<binarySearch(arr,n,key);

    return 0;
}
