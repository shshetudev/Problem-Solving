import java.util.Scanner;

class Node {
    Node left, right;
    int data;

    Node(int newData) {
        data = newData;
        // Start with both left and right nodes null
        left = null;
        right = null;
    }
}

public class LowestCommonAncester {
    public static void main(String[] args) {
        try(Scanner input = new Scanner(System.in)){
            int dataValues = input.nextInt();
            Node rootNode = null;
            while(dataValues-- > 0) {
                int newData = input.nextInt();
                rootNode = insert(rootNode, newData);
            }
            int v1 = input.nextInt();
      	int v2 = input.nextInt();
        Node ans = lca(rootNode,v1,v2);
        System.out.println(ans.data);
        }
    }

    public static Node lca(Node root, int v1, int v2) {
        // Write your code here.
        if (root == null) return null;
  if (v1 > v2) {          
      int temp = v2;
      v2 = v1;
      v1 = temp;
  }
  while (root.data < v1 || root.data > v2) {
      if (root.data < v1) root = root.right;
      else if (root.data > v2) root = root.left;
  }       
  return root;
  }

    // Insert data into the node
    public static Node insert(Node root, int data) {
		if (root == null) {
			return new Node(data);
		} else {
			Node current;
			if (data <= root.data) {
				current = insert(root.left, data);
				root.left = current;
			} else {
				current = insert(root.right, data);
				root.right = current;
			}
			return root;
		}
}
}
