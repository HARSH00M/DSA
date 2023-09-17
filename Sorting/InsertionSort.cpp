#include<iostream>
using namespace std;


//Passing by reference just to swap the actual parameter 
void swap(int &a, int &b){
    int c = a;a=b;b=c;
};

int main(){   int size = 4;
    int arr[size] = {5,4,1,2};


    for(int i=1;i<=size-1; i++){
        int j=i;
        int min = arr[i];

        while(j>0 && arr[j-1] > arr[j] ){
            
            swap(arr[j-1],arr[j]);
            j--;
            cout<<"k ";
        };
    }

    for(int i =0 ;i<size; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}


//Space complexity is O(1);
//Worst case complexity is O(n^2);
//Avg case complexity is also O(n^2);
//The best case complexity is O(n);

