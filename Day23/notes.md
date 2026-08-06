Variable Sliding Window

this window can shrink or expand depending upon the condition.

int this we take two variables left and right a,starting the left from 0 and right from 0 we expand till the while condition breaks.

this can be done by a set or a map depending upon the condition s of yghe question

templatye for this is 

int left=0;

unordered_map<char,int>seen/unoredered_set<char>seen;

for(int right=0;right<s.length();right++){
    while(seen.count(s[right])){

    }
    seen.insert()/seen[s[right]]=right;
}