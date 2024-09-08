// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int k,found=0,i;
    cin>>k;
    for(i=0;i<6;i++){
        if(k==arr[i]){
            found=1;
            break;
        }
    }
    if(found==1){cout<<i;}
    else{cout<<"-1";}
    return 0;
}