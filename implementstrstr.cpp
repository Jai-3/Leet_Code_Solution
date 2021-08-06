class Solution {
public:
int strStr(string haystack, string needle) {
if(needle == "" || haystack.find(needle)==0)
return 0;
if(haystack.find(needle)){
return haystack.find(needle);
}
else{
return -1;
}
}
};
