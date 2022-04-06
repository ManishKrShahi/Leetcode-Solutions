# 10. Circular Linked List Delete at Position
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a linked list of size <strong>n</strong>, you have to<strong> delete the node at position pos </strong>of the linked list and return the new head. The position of initial node is 1.<br>
The tail of the circular linked list is connected to the head using next pointer.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
(the first and last node are connected,
i.e. 5 --&gt; 1)
position: 4
<strong>Output: </strong>1 2 3 5</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 2-&gt;5-&gt;7-&gt;8-&gt;99-&gt;100
(the first and last node are connected,
i.e. 5 --&gt; 1)
position: 6
<strong>Output: </strong>2 5 7 8 99</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>deleteAtPosition()</strong> which takes<strong> head reference</strong> and <strong>pos </strong>as argument<strong>&nbsp;and returns</strong> reference to the <strong>new head </strong>node, which is then used to display the list. The <strong>printing </strong>is done <strong>automatically </strong>by the <strong>driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 &lt;= number of nodes &lt;= 10<sup>3</sup><br>
1 &lt;= pos &lt;= n</span></p>
 <p></p>
            </div>