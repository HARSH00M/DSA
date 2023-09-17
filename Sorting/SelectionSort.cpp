#include<iostream>
using namespace std;

//SELECTION SORT

void swap(int &a, int &b){
    int c = a;a=b;b=c;
};

int main()
{   int size = 10;
    int arr[size] = {99,10,20,26,27,19,2,14,1,7};

    for(int i=0;i<size-1;i++){
        int min = i;
        
        for(int j=i+1; j<size; j++){ 

            if(arr[min]>arr[j]){
                min = j;
            };
        };
        swap(arr[i], arr[min]);
    };


    cout<<"The sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//Worst case complexity is O(n^2);
//Avg case complexity is also O(n^2);
//The best case complexity is O(n);