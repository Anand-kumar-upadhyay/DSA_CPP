/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
vector<Node*>v;

void dfs(Node*actual,Node*c)
{
    for(auto ele:actual->neighbors)
    {
        if(v[ele->val]==NULL)
        {
            Node *n=new Node(ele->val);
            v[ele->val]=n;
            c->neighbors.push_back(v[ele->val]);
            dfs(ele,n);
        }
        else
        {
            c->neighbors.push_back(v[ele->val]);

        }

    }

}
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        Node*c=new Node(node->val);
        v.resize(105,NULL);
        v[c->val]=c;
        dfs(node,c);

        return c;
    }
};