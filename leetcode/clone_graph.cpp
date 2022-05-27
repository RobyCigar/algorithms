
/*

Note: the node is an adjacency list

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
class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        if (node == NULL)
            return NULL;

        // create a map, key is source node, value is clone node.
        map<Node *, Node *> cloneMap;

        // using queue for breadth first search
        queue<Node *> q;
        q.push(node);

        // clone the root
        Node *cloneNode = new Node(node->val);
        cloneMap[node] = cloneNode;

        // breadth first search
        while (!q.empty())
        {
            Node *n = q.front();
            q.pop();
            // for each neighbors
            for (int i = 0; i < n->neighbors.size(); i++)
            {
                Node *neighbor = n->neighbors[i];

                // not existed in cloneMap
                if (cloneMap.find(neighbor) == cloneMap.end())
                {
                    // clone a node
                    Node *newNode = new Node(neighbor->val);
                    cloneMap[n]->neighbors.push_back(newNode);
                    cloneMap[neighbor] = newNode;

                    // put the neighbors into the queue
                    q.push(neighbor);
                }
                else
                {
                    cloneMap[n]->neighbors.push_back(cloneMap[neighbor]);
                }
            }
        }

        return cloneNode;
    }
};