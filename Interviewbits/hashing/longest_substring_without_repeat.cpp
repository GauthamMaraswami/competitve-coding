

    public class Solution {
        public int lengthOfLongestSubstring(String A) {
            int i=0,j=0,max=0;
            Set<Character> hashset=new HashSet<>();
            while(j<A.length())
            {
                if(!hashset.contains(A.charAt(j)))
                {
                    hashset.add(A.charAt(j++));
                    max = Math.max(max, hashset.size());
                }
                else
                {
                     hashset.remove(A.charAt(i++));
                }
            }
            return max;
        }
    }


