
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i=0,j=0,n=s.size(),ans=-1,unq=0;

        int freq[26]={0};
        while(j<n)
        {
            char ch=s[j];
            if(freq[ch-'a']==0) unq++;
            freq[ch-'a']++;

            if(unq>k)
            {
                while(unq>k)
                {
                    char left=s[i];
                    freq[left-'a']--;
                    if(freq[left-'a']==0) unq--;
                    i++;
                }
            }
            if(unq==k)
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }

};