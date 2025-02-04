class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x,sum=0;
        while(temp){
            int la=temp%10;
            sum+=la;
            temp/=10;
        }
        if(x%sum==0)return sum;
        return -1;
    }
};
