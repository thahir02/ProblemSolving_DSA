#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={7,0,6,8,0,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    //Moving zeroes to end using pointers.
    std::cout<<"Array before Moving Zeroes:  ";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    int fir=0,las=8-1;
    while(fir<=las)
    {
        if(arr[fir]!=0){
            fir++;
        }
        if(arr[las]==0){
            las--;
        }
        if(arr[fir]==0 && arr[las]!=0){
            std::swap(arr[fir],arr[las]);
            fir++;
            las--;
        }
    }
    std::cout<<"\nArray after Moving Zeroes:  ";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
