//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int checkanagram(string given , string in){
//	if(given.length() !=  in.length()){
//		return 0;
//	}
//	sort(given.begin(),given.end());
//	sort(in.begin(),in.end());
//	
//	
//			return given == in;
//}
//	
//
//int main(){
//	string given = "deer";
//	string in;
//	cin >> in;
//	int ans = checkanagram(given , in);
//	if(ans){
//		cout<<"strings are angrams";
//	}
//	else{
//		cout<<"not anagrams";
//	}
//}


#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagrams(string s,string t){
	vector<int> frequency(26,0);
	
	if(s.length() != t.length()){
		return false;
	}
	
	for(int i=0;i<s.length();i++){
		frequency[s[i] - 'a']++;
		frequency[t[i] - 'a']--;
	}
	int count;
	for(auto count : frequency){
		if(count != 0){
			return false;
		}
	}
	return true;
}

int main(){
	string s = "sanket";
	string t ;
	cin>>t;
	bool ans = isAnagrams(s,t);
	if(ans){
		cout<<"is anagram";
	}
	else{
		cout<<"not anagram";
	}
}


