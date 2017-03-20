/*
* Solution to Level order traversal (hackerrank/DataStructures/Tree)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>
#include<queue>

using namespace std;

void LevelOrder(node * root)
{
  if(node==NULL)
        return;

  queue <node*> q;

  q.push(root);

  while(!q.empty)
  {
      node* temp=q.front();
      q.pop();
      printf("%d", temp->data);
      if(temp->left!=NULL) q.push(temp->left);
      if(temp->right!=NULL) q.push(temp->right);
  }

}

int main()
{

    /*
    nothing
    */

    return 0;
}
