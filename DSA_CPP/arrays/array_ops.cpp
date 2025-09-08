#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of element you want in array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element you want to search and delete" << endl;
    int target;
    cin >> target;
    for(int i=0;i<n;i++)
    {
        cout << "Enter elemement";
        cin >> arr[i];
    }
    int ind,count;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            count = 1;
            ind = i;
        }
    }
    if(count ==1)
    {
        cout << "Element found at index : " << ind << endl;
    }
    else
    {
        cout << "element is not in array";
    }
    for(int i = ind;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}