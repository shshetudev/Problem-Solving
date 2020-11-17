public class HoffmanDecoding {
    public static void main(String[] args) {
        
    }

   static void decode(String s, Node root) {
        Node tempRoot = root;
        String result = "";
       
       // traverse binary coded string
        for(int i = 0; i < s.length();i++){
            // travers to left
            if(s.charAt(i) == '0') 
            tempRoot = tempRoot.left;
            // traverse to right
            if(s.charAt(i) == '1') 
            tempRoot = tempRoot.right;
            // check for leaf node
            if(tempRoot.left == null 
            && tempRoot.right == null){
                result+=tempRoot.data;
                tempRoot = root;
            }
        }
           System.out.println(result);
    }
}
