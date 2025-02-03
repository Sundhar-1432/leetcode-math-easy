class Solution {
public:
    int countDigits(int num) {
        if(num>0&&num<9)return 1;
        int count=0;
        int temp=num;
        while(temp){
            int la=temp%10;
            if(la!=0){
                if(num%la==0)count++;
            }
            temp/=10;
        }
        return count;
    }
};
