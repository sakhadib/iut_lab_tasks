#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int s =0;
    int e =n-1;
    int mid =(s+e)/2;

    while(s<e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid -1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;

}

int main()
{
    int arr[]={1,3,5,7,9,11,13,15,17,19};
    int n =sizeof(arr)/sizeof(int);
    int key, boss;
    cin >> boss;
    cin >> key;
    int index = binary_search(arr,n,key);
    if(index != -1){
        cout<<key<<" is in the index "<<index<<endl;
    }
    else{
        cout<<key<<" is not in the index"<<endl;
    }

    return 0;
}