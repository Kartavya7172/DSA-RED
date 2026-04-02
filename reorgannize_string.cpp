#include<iostream>
#include<string>
#include<limits.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        int map[256] = {0};

        for(int i=0;s[i];i++)
        {
            map[s[i]]++;
        }
        int maxfrequncy = INT_MIN;
        char maxcharacter;
        for(int i='a';i<='z';i++)
        {
            if(map[i] > maxfrequncy)
            {
                maxfrequncy = map[i];
                maxcharacter = i;
            }
        }
        if(maxfrequncy > (s.size()+1)/2) return "";
        int index =0;
        
        while(index < s.size() && maxfrequncy>0)
        {
            s[index] = maxcharacter;
            maxfrequncy--;
            index += 2;
        }
        map[maxcharacter] = 0;

        for(int i='a';i<='z';i++)
        {
            while(map[i] > 0)
            {
                index = index>=s.size() ? 1:index;
                s[index] = i;
                map[i]--;
                index = index+2;
            }
        }

        return s;
    }
};
int main()
{
    Solution obj;
    string ans = obj.reorganizeString("aab");
    cout<<ans<<endl;
}