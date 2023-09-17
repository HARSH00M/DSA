#include<iostream>
using namespace std;

//OPTIMIZED BUBBLE SORT


//Used pass by reference for swapping 
void swap(int &a, int &b){
    int c = a;a=b;b=c;
};

int main()
{   
    int size = 10;//Number of the Numbers in the array.
    int arr[size] = {10,20,10,11,12,13,1,4,5,9};



    for(int i=0; i<size; i++){ //complexity n
        bool flag = false; // Flag for the Optimization of Algorithm

        for(int j=0; j<size-1; j++){  //complexity = n-1
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;  
            };          
        };

        if(flag == false)break;
        
    };

    //Printing the Sorted array;

    cout<<"The Sorted array is: ";
    for(int j=0; j<size; j++){
            cout<<arr[j]<<" ";
            
        };
    

    
    return 0;
}

//Worst case complexity is O(n^2);
//Avg case complexity is also O(n^2);
//The best case complexity is O(n);