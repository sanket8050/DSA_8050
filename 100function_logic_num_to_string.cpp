#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

string function(int num){
    unordered_map<int,string>nummap = {

        {0,"zero"},
        {1,"one"},
        {2,"two"},
        {3,"three"},
        {4,"four"},
        {5,"five"},
        {6,"six"},
        {7,"seven"},
        {8,"eight"},
        {9,"nine"},
        {10,"ten"},
        {11,"eleven"},
        {12,"twelve"},
        {13,"thirteen"},
        {14,"fourteen"},

        {15,"fifteen"},
        {16,"sixteen"},
        {17,"seventeen"},
        {18,"eighteen"},
        {19,"nineteen"},
        {20,"twenty"},
        {30,"thirty"},
        {40,"forty"},
        {50,"fifty"},
        {60,"sixty"},
        {70,"seventy"},
        {80,"eighty"},
        {90,"ninety"},
        {100,"hundred"}
    };

    unordered_map<int,string>multiplyer = {

        {1000,"thousand"},
        {100,"hundred"}
    };
    

    string s = to_string(num);
    if(nummap.count(num)) return nummap[num];
    else if(s.length()==2 ){
        if(nummap.count(num)){
            return nummap[num];
        }
        else{
        int tens = (num/10)*10 ;
        int unit = (num%10);
        string result;
      
        if(tens!=0) result += nummap[tens];
        if(unit!=0) result += nummap[unit];
        return result;
        }
    }
    else if(s.length()==3){
        int ori = num;
        

        int hun = (ori / 100);
        
        ori = ori-hun*100;
        int tens = (ori/10)*10 ;
        
        int unit = (ori%10);
        string result;
        if(hun!=0) result += nummap[hun]+" hundred ";
        if(tens!=0) result += nummap[tens]+" ";
        if(unit!=0) result += nummap[unit];
        
        return result;
    }
    else if(s.length()==4){
        int ori = num;
        
        int s = (ori/1000);
        cout<<s;
       
        int hun = (ori % 1000)/100;
        int tens = ((ori%100)/10)*10;
        int unit = (ori%10);

        string result;
        if(s!= 0) result += nummap[s]+" thousand ";
        if(hun!=0) result += nummap[hun]+" hundred ";
        if(tens!=0) result += nummap[tens]+" ";
        if(unit!=0) result += nummap[unit];

        cout<<s<<endl;
        return result;
        
    }

    else if(s.length()==5){
        if(nummap.count(num/1000)){
            int ori = num;
            
            int s = (ori/1000);
            
        
            int hun = (ori % 1000)/100;
            int tens = ((ori%100)/10)*10;
            int unit = (ori%10);

            string result ="";
            if(s!= 0) result += nummap[s]+" thousand ";
            if(hun!=0) result += nummap[hun]+" hundred ";
            if(tens!=0) result += nummap[s];
            if(unit!=0) result += nummap[unit];

            
            return result;

        }

        else{
            int ori = num;
            int s = (num/10000)*10;
           
            int y = (ori/1000) % 10;

            int hun = (ori % 1000)/100;
            int tens = ((ori%100)/10)*10;
            int unit = (ori%10);
            string result;
            if(s!=0) result+=nummap[s]+" "; 
            if(y!=0) result+=nummap[y]+" thousand "; 
            if(hun!=0) result+=nummap[hun]+" hundred "; 
            if(tens!=0) result+=nummap[tens]+" "; 
            if(unit!=0) result+=nummap[unit]; 

            return result;
        }
    
    }
    else if(s.length()==6){
        int ori = num;
            int x = ori/100000;
            ori = ori-x*100000;
            int s = (ori/10000)*10;
           
            int y = (ori/1000) % 10;

            int hun = (ori % 1000)/100;
            int tens = ((ori%100)/10)*10;
            int unit = (ori%10);
            string result;
            if(x!=0) result+=nummap[x]+" lakhs ";
            if(s!=0) result+=nummap[s]+" "+nummap[y]+" thousand "; 
            if(hun!=0) result+=nummap[hun]+" hundred "; 
            if(tens!=0) result+=nummap[tens]+" "; 
            if(unit!=0) result+=nummap[unit]; 

            return result;

    }
    


}

int main(){
    // string x = "00008";
    // int d = stoi(x);
    // string y = function(d);
    // cout<<y;

    int x = 999999;
    // cin>>x;
    string y = function(x);
    cout<<y;

}