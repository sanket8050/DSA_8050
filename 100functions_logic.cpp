    #include<iostream>
    #include<vector>


    using namespace std;

    int functions(const vector<int>arr){
        for(int  i=0 ;i<arr.size();i++){
            cout<<arr[i]<<",";
        }

    }

    int main(){
        vector<int>arr ;
        int n ; cin>>n;

        for(int  i =1 ; i< n;i++){
           if(i*i <= n){
            arr.push_back(i*i);
           }
        }

        // for(int i = 0;i < arr.size();i++){
        //     cout<<arr[i]<<" ";
        // }

        functions(arr);
        
    }