// public class HeightOfABinaryTree_Naive {
//     public static void main(String[] args) {
//         BinaryTree tree = new BinaryTree();
//         tree.root = new Node(1);
//         tree.root.left = new Node(2);
//         tree.root.right = new Node(3);
//         tree.root.left.left = new Node(4);
//         tree.root.left.right = new Node(5);
//         System.out.println("Height of tree is: "+tree.maxDepth(tree.root));
//     }
// }

// // Binary Tree node
// class Node {
//     int data;
//     Node left, right;

//     Node(int item){
//         data = item;
//         left = right = null;
//     }
// }

// // Binary Tree
// class BinaryTree {
//     Node root;

//     /**
//      * @param Node
//      * @return the number of
//      * nodes along the longest path
//      * from the root node down to the
//      * furthest leaf node
//      */
//     int maxDepth(Node node) {
//         if(node == null) return 0;
//         else {
//             // left subtree depth
//             int leftSubtreeDepth = maxDepth(node.left);
//             // right subtree depth
//             int rightSubtreeDepth = maxDepth(node.right);
//             return findLargestDepth(leftSubtreeDepth, rightSubtreeDepth);
//         }
//     }

//     int findLargestDepth(int leftSubtreeDepth,int rightSubtreeDepth){
//         int largestDepth = 0;
//         if(leftSubtreeDepth > rightSubtreeDepth) largestDepth = leftSubtreeDepth+1;
//         else largestDepth = rightSubtreeDepth + 1;
//         return largestDepth;
//     }
// }

