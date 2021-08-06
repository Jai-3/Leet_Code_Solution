class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int a[n];
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                a[i]=1;
            }
            else if(s[i]=='V'){
                a[i]=5;
            }
            else if(s[i]=='X'){
                a[i]=10;
            }
            else if(s[i]=='L'){
                a[i]=50;
            }
            else if(s[i]=='C'){
                a[i]=100;
            }
            else if(s[i]=='D'){
                a[i]=500;
            }
            else if(s[i]=='M'){
                a[i]=1000;
            }
        }
        int IntegerValue=a[n-1];
        for(int i=n-1;i>=1;i--){
            if(a[i-1]>=a[i]){
					IntegerValue=IntegerValue+a[i-1];
            }
            else{
                IntegerValue=IntegerValue-a[i-1];
            }
        }
        return IntegerValue;
    }
};