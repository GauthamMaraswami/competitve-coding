/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/




bool result[1000];
bool checkBSTHelper(Node* root,int min,int max)
{
     //cout<<min<<"->"<<root->data<<"<-"<<max<<endl;
     
      // cout<<result[root->data]<<endl;
       if(root==NULL )
       {
           return true;
       }
  //  else if(((root->left)->data > root->data)||((root->right)->data < root->data))
      else if(min >= root->data||max <= root->data)
      {
          return false;
      }
    
           return (checkBSTHelper(root->left,min,root->data)&&checkBSTHelper(root->right,root->data,max));
    
}




   bool checkBST(Node* root) {
   //    cout<<result[root->data];
     return checkBSTHelper(root,-1,10001);
       
   }

