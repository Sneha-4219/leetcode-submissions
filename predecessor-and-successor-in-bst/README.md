<h2>Predecessor and Successor in BST</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Given a Binary Search Tree (BST) and an integer key, find the inorder predecessor and inorder successor of the given key.</p>

<ul>
	<li>The inorder predecessor is the node with the largest value smaller than the given key.</li>
	<li>The inorder successor is the node with the smallest value greater than the given key.</li>
</ul>

<p>If the predecessor or successor does not exist, return NULL for that position.</p>

<p><strong>Note:</strong> The key may or may not be present in the BST.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
root = [50, 30, 70, 20, 40, 60, 80], key = 65

<strong>Output</strong>
[60, 70]

<strong>Explanation</strong>
In the given BST, the inorder predecessor of 65 is 60 and the inorder successor of 65 is 70.
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input</strong>
root = [8, 1, 9, N, 4, N, 10, 3], key = 8

<strong>Output</strong>
[4, 9]

<strong>Explanation</strong>
In the given BST, the inorder predecessor of 8 is 4 and the inorder successor of 8 is 9.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>1 &le; no. of nodes &le; 10<sup>5</sup></li>
	<li>0 &le; node-&gt;data &le; 10<sup>6</sup></li>
	<li>1 &le; key &le; 10<sup>6</sup></li>
</ul>