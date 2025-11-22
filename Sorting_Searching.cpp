#include<bits/stdc++.h>
using namespace std;
    void swp(int *a, int *b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    void print_arr(int arr[], int n){
        for (int i=0; i<n; i++)
            cout << arr[i] << " ";
    }

    void bubble_sort(int arr[], int n){
        for (int i=0; i<n-1; i++){
            for (int j=0; j<n-1-i; j++){
                if (arr[j] > arr[j+1])
                    swp(&arr[j], &arr[j+1]);
            }
        }
        print_arr(arr,n);
    }

    void selection_sort(int arr[], int n){
        for (int i = 0; i < n-1; i++){
            int minIdx = i;
            for (int j = i+1; j < n; j++)
            {
                if (arr[j] < arr[minIdx])
                    minIdx = j;  
            }
            if (minIdx != i)
                swp(&arr[i], &arr[minIdx]);
        }
        print_arr(arr, n);
    }

    void insertion_sort(int arr[], int n){
        for (int i=1; i<n; i++){
            int j = i-1;
            int key = arr[i];
            while ( j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        print_arr(arr,n);
    }

    void linear_search(int arr[], int n, int tgt){
        bool flag = false;
        int indx = INT_MIN;
        for (int i=0; i<n; i++){
            if (arr[i] == tgt){
                flag = true;
                indx = i;
                break;
            }
        }
        if (flag)
            cout << "Target found at index: " << indx << endl;
        else   
            cout << "Target not found" << endl;
    }
    void binary_search(int arr[], int n, int tgt){
        int left = 0;
        int right = n - 1;
        bool flag = false;
        
        while (left <= right) {
            int middle = (left + right) / 2;
            
            if (arr[middle] == tgt) {
                flag = true;
                break;  
            }
            else if (arr[middle] < tgt) {
                left = middle + 1;  
            } 
            else if ( arr[middle] > tgt){
                right = middle - 1;    
            }
        }

        if (flag)
            cout << "Target found";
        else
            cout << "Target not found";
    }

int main(){
    int arr[5] = {5,2,8,1,9};
    bubble_sort(arr,5);
    // selection_sort(arr,5);
    // insertion_sort(arr,5);
    int tgt; 
    cin >> tgt;
    // linear_search(arr,5,tgt);
    binary_search(arr,5,tgt);
    return 0;
}