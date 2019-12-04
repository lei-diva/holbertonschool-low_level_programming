#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t node_l = 0;
    size_t node_r = 0;

    if (!tree || (!tree->right && !tree->left)) 
        return (0);
    
    else
    {
        node_l = 1 + binary_tree_nodes(tree->left);
        node_r = 1 + binary_tree_nodes(tree->right);
        
        return (node_l + node_r - 1);
    }

}
