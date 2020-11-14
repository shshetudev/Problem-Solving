import java.util.Scanner;


// Class: Node
class NodeOfTree {
    NodeOfTree left, right;
    int data;

    NodeOfTree(int newData) {
        data = newData;
        // Start with both left and right nodes null
        left = null;
        right = null;
    }
}

public class HeightOfBinaryTree_Intermediate {
    public static void main(String[] args) {
        try(Scanner input = new Scanner(System.in)){
            int dataValues = input.nextInt();
            NodeOfTree rootNode = null;
            while(dataValues-- > 0) {
                int newData = input.nextInt();
                rootNode = insert(rootNode, newData);
            }
            int height = getHeight(rootNode);
            System.out.println(height);
        }
    }

    private static int getHeight(NodeOfTree root) {
        if(root==null)
           return -1;
        else{
            int ld=getHeight(root.left);
            int rd=getHeight(root.right);
            if(ld>rd)
                return(ld+1);
            else
                return(rd+1);
        }
    }

    // Insert data into the node
    public static NodeOfTree insert(NodeOfTree root, int data) {
		if (root == null) {
			return new NodeOfTree(data);
		} else {
			NodeOfTree current;
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


