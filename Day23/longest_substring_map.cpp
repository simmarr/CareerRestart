int lengthOfLongestSubstring(string s)
{
    int left = 0;

    unordered_map<char,int>seen;

    int current = 0;

    int largest = current;

    for(int right = 0 ; right < s.size() ; right++){

        while(seen.count(s[right])){
            left=max(left,seen[s[right]]+1);
        }
        seen[s[right]]==right;

        current=right-left+1;

        if(current>largest){
            largest=current;
        }
    }

    return largest;
}