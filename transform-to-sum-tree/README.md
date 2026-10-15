<h2>Transform to Sum Tree</h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given a root of a binary tree with <code>n</code> nodes, where each node may contain positive or negative values, convert it into a tree such that each node’s new value is equal to the sum of all values in its left and right subtrees (based on the original tree). For leaf nodes, update their values to 0.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
root = [10, -2, 6, 8, -4, 7, 5]

<strong>Output</strong>
[20, 4, 12, 0, 0, 0, 0]

<strong>Explanation</strong>
Leaf nodes 8, -4, 7, and 5 are changed to 0 since they have no children.
Left child: 8 + (-4) = 4
Right child: 7 + 5 = 12
Root: 4 + (-2) + 12 + 6 = 20
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input</strong>
root = [1, 2, 3, 4, 5, -6, 2]

<strong>Output</strong>
[10, 9, -4, 0, 0, 0, 0]

<strong>Explanation</strong>
Leaf nodes 4, 5, -6, and 2 are changed to 0 since they have no children.
Left child: 4 + 5 = 9
Right child: -6 + 2 = -4
Root: 9 + 2 + 3 + (-4) = 10
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>1 &le; n &le; 10<sup>4</sup></li>
</ul>