#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter no. of elements you want in array" << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter Element no. : " << i << endl;
        cin >> arr[i];
    }
    for(int i=0;i<n/2;i++)
    {
        /*temp=arr[i];
        arr[i]=arr[8-i];
        arr[8-i]=temp;*/
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}