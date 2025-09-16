class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>st;
        for(int num:nums){
            st.push_back(num);
            while(st.size()>1){
                int a=st.back();
                int b=st[st.size()-2];
                int g=gcd(a,b);
                if(g>1){
                    st.pop_back();
                    st.pop_back();
                    st.push_back((long long)b/g*a);
                }else break;
            }
        }
       return st;
    }
    int gcd(int a,int b){
        while(a>0&&b>0){
            if(a>b)a=a%b;
            else b=b%a;
        }
        if(a==0)return b;
        return a;
    
    }
    int lcm(int n,int m){
        int a=n,b=m;
        while(a!=b){
            if(a<b)a+=n;
            else b+=m;
        }
        return a;
    }
};