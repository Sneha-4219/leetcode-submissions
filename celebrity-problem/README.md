<h2>Celebrity Problem</h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>Consider a party being organized by some people. A celebrity is a person who is known to all but does not know anyone at the party.</p>

<ul>
	<li>A square matrix <code>mat[][]</code> of size <code>n * n</code> is used to represent people at the party such that if an element of row <code>i</code> and column <code>j</code> is set to <code>1</code> it means <code>i</code>th person knows <code>j</code>th person.</li>
	<li>You need to return index of the celebrity in the party.</li>
	<li>If the celebrity does not exist, return <code>-1</code>.</li>
</ul>

<p><strong>Note:</strong> Follow 0-based indexing.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
mat[][] = [[1, 1, 0],
           [0, 1, 0],
           [0, 1, 1]]

<strong>Output</strong>
1

<strong>Explanation</strong>
0th and 2nd person both know 1st person and 1st person does not know anyone. Therefore, 1 is the celebrity person.
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input</strong>
mat[][] = [[1, 1], 
           [1, 1]]

<strong>Output</strong>
-1

<strong>Explanation</strong>
Since both the people at the party know each other. Hence none of them is a celebrity person.
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input</strong>
mat[][] = [[1]]

<strong>Output</strong>
0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>1 &le; mat.size(), mat[i].size() &le; 10<sup>3</sup></li>
	<li>0 &le; mat[i][j] &le; 1</li>
	<li>mat[i][i] = 1</li>
</ul>