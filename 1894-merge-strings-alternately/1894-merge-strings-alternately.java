class Solution {
    public String mergeAlternately(String word1, String word2) {
        int l1=word1.length();
        int l2=word2.length();
        int min=(l1<l2)?l1:l2;
        String k="";
        for(int i=0;i<min;i++)
        {
            k=k+word1.charAt(i)+word2.charAt(i);
        }
        if(l1==l2)
        return k;
        if(min==l1)
        k=k+word2.substring(min);
        else
        k=k+word1.substring(min);
        return k;
    }
}