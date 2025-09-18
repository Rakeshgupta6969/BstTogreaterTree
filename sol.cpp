/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  
  private:

//   void solve(TreeNode * root, vector<int> & element){
   
//    // base case.
//    if(root == NULL) return;

//    solve(root -> left ,element);

//    element.push_back(root -> val);

//    solve(root -> right,element);


//   }
  

//    void solve2(TreeNode * root,unordered_map<int,int> & mp){

//        if(root == NULL) return;

//        solve2(root -> left,mp);

//        root -> val = mp[root-> val];

//        solve2(root -> right,mp);



//    }


    void solve( TreeNode * root,int & currvalue){
     
     if(root == NULL) return;

     solve(root -> right,currvalue);


     currvalue += root -> val;

     root -> val  = currvalue;

     solve(root -> left,currvalue);



    }

public:
    TreeNode* convertBST(TreeNode* root) {
        
    // using the brute force solution.

    if(root == NULL) return NULL;

    // vector<int> elements;

    // solve(root,elements);

    // unordered_map<int,int> mp;


//  int totalsum = 0;
//  for(auto & num :elements){
   
//    totalsum += num;

//  }


//    int currsum = 0;

//    for(int i = 0; i<elements.size(); i++){
//     currsum += elements[i];
     
//      mp[elements[i]] = elements[i] +(totalsum - currsum);

//    }


//    solve2(root,mp);

 

   // using the optimal solution.
        int currvalue = 0;
         solve(root,currvalue);

   return root;



    }
};