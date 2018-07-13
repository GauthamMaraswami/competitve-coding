

    public class Solution {
        // DO NOT MODIFY THE LIST. IT IS READ ONLY
            public ArrayList<Integer> findSubstring1(String S, String[] L) {
             ArrayList<Integer> result=new ArrayList<Integer>(); 
             if(L.length==0) return result; 
             int num=L.length*(L[0].length()); 
             int stringL=L[0].length();
             char [] array=S.toCharArray(); 
             int length=array.length; 
             //form a hastabel stored all the strings
             Hashtable<String, Integer> table= new Hashtable<String, Integer>(); 
             for(int i=0; i<L.length; i++)
             {
                if(table.containsKey(L[i]))
                {
                    table.put(L[i], table.get(L[i])+1 );
                }else
                {
                    table.put(L[i], 1);
                }
             }
             //clone the hashtable, otherwise temp will be the original hashtable. 
             Hashtable<String, Integer> temp= (Hashtable<String, Integer>) table.clone(); 
             //(length-num) prevents extra process
             for(int i=0; i<=length-num; i++)
             {
                 String s1=S.substring(i, i+stringL);
                 // if the first string is in the hashtable, then check all the strings 
                 if(temp.containsKey(s1))
                 {
                     if(check(S.substring(i), stringL, num, temp))
                     {
                         //if it is valid, add it to the result. 
                         result.add(i);                   
                     }
                     //hashtable temp has been changed in check function, so assign the original value to it 
                     temp= (Hashtable<String, Integer>) table.clone();     
                 }
             }
            return result; 
          }
        public boolean check(String s, int l ,int n, Hashtable<String, Integer> table)
        {
            String temp; 
            for(int i=0; i<n; i=i+l)
            {
                temp=s.substring(i, i+l); 
                if(table.containsKey(temp))
                {
                    if(table.get(temp)<1) {
                        return false; }
                    else
                    {                
                    table.put(temp, table.get(temp)-1);    
                    }
                }else
                {
                    return false; 
                }
            }
            return true; 
        }
     
        public ArrayList<Integer> findSubstring(String A, final List<String> B) {
            int i=0;
            int siz=B.size();
            String[] B1=new String[siz];
            for(String L:B)
            {
                B1[i]=L;
                ++i;
            }
            return findSubstring1( A, B1) ;
        }
    }


