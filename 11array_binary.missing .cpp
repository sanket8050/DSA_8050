//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    vector<int> v{1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12,13,14};
//    int low = 0;
//    int high = v.size() - 1;
//    int ans;
//    
//    while (low <= high) {
//        int mid = low + (high - low) / 2;                       // we can initialize 'mid' out side the loop
//                                                                // then again initiate at end of loop.....
//        if (v[mid] == mid + 1) {
//            low = mid + 1;
//        } else {
//            high = mid - 1;
//        }
//    }
//    ans = low + 1;
//    cout << "The missing element is " << ans << endl;
//    
//    return 0;
//}



// --------if space complexity o(1)------------------------------------


#include<iostream>
#include<vetor>
#include<algorithm>
using namespace std;

int missing(int n,vector<int>arr){
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(arr[i]==i+1){
			continue;
		}
		else{
			return i+1;
		}
	}
}

int main(){
	
	vector<int>arr(n-1);
	
}
