public class IsThisABinaryTree {
    public static void main(String[] args) {
        System.out.println(checkBST(new Node(5)));

    }

        static boolean checkBST(Node root) {
            return isBST(root, 0, 1000);
        }

        static boolean isBST(Node root, int leftChild, int rightChild){
            if(root == null) return true;
            else if(leftChild >= 0 && root.data <= leftChild) return false;
            else if(rightChild >= 0 && root.data >= rightChild) return false;
            // check both left subtree and right subtree
            return (isBST(root.left, leftChild, root.data)) && (isBST(root.right,root.data,rightChild));
        }
}
