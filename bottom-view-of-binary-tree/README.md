<h2>Bottom View of Binary Tree</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given a binary tree, and your task is to return its bottom view. The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom.</p>

<p><strong>Note:</strong> If there are multiple bottom-most nodes for a horizontal distance from the root, then the latter one in the level order traversal is considered.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
root = [1, 2, 3, 4, 5, N, 6]

<strong>Output</strong>
[4, 2, 5, 3, 6]

<strong>Explanation</strong>
The green nodes represent the bottom view of the binary tree.
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input</strong>
root = [20, 8, 22, 5, 3, 4, 25, N, N, 10, 14, N, N, 28, N]

<strong>Output</strong>
[5, 10, 4, 28, 25]

<strong>Explanation</strong>
The green nodes represent the bottom view of the binary tree.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>1 &le; size of binary tree, node.data &le; 10<sup>5</sup></li>
</ul>