```html
<h2>Top View of Binary Tree</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>You are given a binary tree, and your task is to return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.</p>

<ul>
	<li>Return the nodes from the leftmost node to the rightmost node.</li>
	<li>If multiple nodes overlap at the same horizontal position, only the topmost (closest to the root) node is included in the view.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
root = [1, 2, 3]

<strong>Output</strong>
[2, 1, 3]

<strong>Explanation</strong>
The top view contains nodes 2, 1, and 3, from left to right.
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input</strong>
root = [10, 20, 30, 40, 60, 90, 100]

<strong>Output</strong>
[40, 20, 10, 30, 100]

<strong>Explanation</strong>
Only the topmost node at each horizontal position is included in the top view.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>1 &le; size of binary tree, node.data &le; 10<sup>5</sup></li>
</ul>
```