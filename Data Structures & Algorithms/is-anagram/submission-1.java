class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()){
            return false;
        }
        HashMap<Character,Integer> st = new HashMap<>();
        HashMap<Character,Integer> tt = new HashMap<>();
        for(int i=0;i<s.length();i++){
            st.put(s.charAt(i),st.getOrDefault(s.charAt(i),0)+1);
            tt.put(t.charAt(i),tt.getOrDefault(t.charAt(i),0)+1);
        }
        return st.equals(tt);
    }
}
