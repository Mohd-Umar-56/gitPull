#include<bits/stdc++.h>
using namespace std; hh

bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main() {
    cout << "Hello World" << endl;
    return 0;
}