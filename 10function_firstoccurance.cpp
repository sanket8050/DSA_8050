
// finding the fist ocurance of elment----------------------------------------------------------
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int firstOccurance(vector<int> v,int target){
//    int start = 0;
//    int end = v.size()-1;
//    int index;
//    int mid=start+(end-start)/2;
//    
//    while(start <= end){
//        if(target==v[mid]){
//            index=mid;
//            end=mid-1;
//        }
//        else if(target > v[mid]){
//            start=mid+1;
//        }
//        else if(target < v[mid]){
//            end = mid-1;
//        }
//         mid=start+(end-start)/2;
//    }
//    return index;
//}
//
//int main(){
//int target=4;
//vector<int> v;
//v.push_back(1);
//v.push_back(2);
//v.push_back(4);
//v.push_back(4);                   //instead of ====== vector<int> v{1,2,3,4,4,4,5};=======
//v.push_back(5);
//int index=firstOccurance(v,target);
//cout<<"fount at index: "<<index;
//}

//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

// finding the last ocurance of element----------------------------------------------------------

//#include<iostream>
//#include<vector>
//using namespace std;
//int firstOccurance(vector<int> v,int target){
//    int start = 0;
//    int end = v.size()-1;
//    int index;
//    int mid=start+(end-start)/2;
//    
//    while(start <= end){
//        if(target==v[mid]){
//            index=mid;
//            start=mid+1;
//        }
//        else if(target > v[mid]){
//            start=mid+1;
//        }
//        else if(target < v[mid]){
//            end = mid-1;
//        }
//         mid=start+(end-start)/2;
//    }
//    return index;
//}
//
//int main(){
//int target=4;
//vector<int> v;
//v.push_back(1);
//v.push_back(2);
//v.push_back(4);
//v.push_back(4);                   //instead of ====== vector<int> v{1,2,3,4,4,4,5};=======
//v.push_back(5);
//int index=firstOccurance(v,target);
//cout<<"fount at index: "<<index;
//}


//>>>>>>>--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//-------------------inbuilt function --------------------- 


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	vector<int> v{1,2,3,4,4,5,5,6,7};
	int target=4;
	
	//----------first occurance--------
	int ans=lower_bound(v.begin(),v.end(),target);
	cout<<(ans-v.begin())<<endl;
	
	//----------last occurance---------
	int ans2 =upper_bound(v.begin(),v.end(),target);
	
	cout<<(ans2-v.begin())<<endl;
	
	
	//-----------num ber of occurance of element------
	
	int number=ans2-ans;
	cout<<number;
}

