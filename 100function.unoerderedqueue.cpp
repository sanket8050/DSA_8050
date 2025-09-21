#include<iostream>
#include<queue>
using namespace std;

int forthlargest(int arr[], int n){
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
        if(pq.size() > 4){
            pq.pop();
        }
    }
    if(pq.size() < 4) {
        cout << "Not enough elements" << endl;
        return -1;
    }
    cout << pq.top() << endl;
    return pq.top();
}

int main(){
    int  arr[10] = {1,2,4,5,6};
    forthlargest(arr, 5);
}