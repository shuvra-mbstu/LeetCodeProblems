<h2><a href="https://leetcode.com/problems/count-and-say/">38. Count and Say</a></h2><h3>Medium</h3><hr><div class=""><p class="">The <strong class="">count-and-say</strong> sequence is a sequence of digit strings defined by the recursive formula:</p>

<ul class="">
	<li class=""><code class="">countAndSay(1) = "1"</code></li>
	<li class=""><code class="">countAndSay(n)</code> is the way you would "say" the digit string from <code class="">countAndSay(n-1)</code>, which is then converted into a different digit string.</li>
</ul>

<p class="">To determine how you "say" a digit string, split it into the <strong class="">minimal</strong> number of substrings such that each substring contains exactly <strong class="">one</strong> unique digit. Then for each substring, say the number of digits, then say the digit. Finally, concatenate every said digit.</p>

<p class="">For example, the saying and conversion for digit string <code class="">"3322251"</code>:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/23/countandsay.jpg" style="width: 581px; height: 172px;">
<p class="">Given a positive integer <code class="">n</code>, return <em class="">the </em><code class="">n<sup class="">th</sup></code><em class=""> term of the <strong class="">count-and-say</strong> sequence</em>.</p>

<p class="">&nbsp;</p>
<p class=""><strong class="example">Example 1:</strong></p>

<pre class=""><strong class="">Input:</strong> n = 1
<strong class="">Output:</strong> "1"
<strong class="">Explanation:</strong> This is the base case.
</pre>

<p class=""><strong class="example">Example 2:</strong></p>

<pre class=""><strong class="">Input:</strong> n = 4
<strong class="">Output:</strong> "1211"
<strong class="">Explanation:</strong>
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
</pre>

<p class="">&nbsp;</p>
<p class=""><strong class="">Constraints:</strong></p>

<ul class="">
	<li class=""><code class="">1 &lt;= n &lt;= 30</code></li>
</ul>
</div>