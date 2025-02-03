class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int>st;
        vector<int>st2;
        int count=0;
       for(int i=1;i*i<=a;i++){
        if(a%i==0){
            st.push_back(i);
            if(a/i!=i)st.push_back(a/i);
        }
       }
       for(int i=1;i*i<=b;i++){
        if(b%i==0){
            st2.push_back(i);
            if(b/i!=i)st2.push_back(b/i);
        }
       }
       for(auto it:st){
        if(find(st2.begin(),st2.end(),it)!=st2.end()){
            count++;
        }
       }
        return count;
    }
};
