// Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int k,found=0;
    cin>>k;
    for(int i=0;i<6;i++){
        if(k==arr[i]){
            found=1;
        }
    }
    if(found==1){cout<<"Yes";}
    else{cout<<"No";}
    return 0;
}

// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3