<h2><a href="https://leetcode.com/problems/delete-node-in-a-linked-list/">237. Delete Node in a Linked List</a></h2><h3>Medium</h3><hr><div class=""><p class="">There is a singly-linked list <code class="">head</code> and we want to delete a node <code class="">node</code> in it.</p>

<p class="">You are given the node to be deleted <code class="">node</code>. You will <strong class="">not be given access</strong> to the first node of <code class="">head</code>.</p>

<p class="">All the values of the linked list are <strong class="">unique</strong>, and it is guaranteed that the given node <code class="">node</code> is not the last node in the linked list.</p>

<p class="">Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:</p>

<ul class="">
	<li class="">The value of the given node should not exist in the linked list.</li>
	<li class="">The number of nodes in the linked list should decrease by one.</li>
	<li class="">All the values before <code class="">node</code> should be in the same order.</li>
	<li class="">All the values after <code class="">node</code> should be in the same order.</li>
</ul>

<p class=""><strong class="">Custom testing:</strong></p>

<ul class="">
	<li class="">For the input, you should provide the entire linked list <code class="">head</code> and the node to be given <code class="">node</code>. <code class="">node</code> should not be the last node of the list and should be an actual node in the list.</li>
	<li class="">We will build the linked list and pass the node to your function.</li>
	<li class="">The output will be the entire list after calling your function.</li>
</ul>

<p class="">&nbsp;</p>
<p class=""><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node1.jpg" style="width: 400px; height: 286px;">
<pre class=""><strong class="">Input:</strong> head = [4,5,1,9], node = 5
<strong class="">Output:</strong> [4,1,9]
<strong class="">Explanation: </strong>You are given the second node with value 5, the linked list should become 4 -&gt; 1 -&gt; 9 after calling your function.
</pre>

<p class=""><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/01/node2.jpg" style="width: 400px; height: 315px;">
<pre class=""><strong class="">Input:</strong> head = [4,5,1,9], node = 1
<strong class="">Output:</strong> [4,5,9]
<strong class="">Explanation: </strong>You are given the third node with value 1, the linked list should become 4 -&gt; 5 -&gt; 9 after calling your function.
</pre>

<p class="">&nbsp;</p>
<p class=""><strong class="">Constraints:</strong></p>

<ul class="">
	<li class="">The number of the nodes in the given list is in the range <code class="">[2, 1000]</code>.</li>
	<li class=""><code class="">-1000 &lt;= Node.val &lt;= 1000</code></li>
	<li class="">The value of each node in the list is <strong class="">unique</strong>.</li>
	<li class="">The <code class="">node</code> to be deleted is <strong class="">in the list</strong> and is <strong class="">not a tail</strong> node.</li>
</ul>
</div>