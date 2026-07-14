<h2><a href="https://leetcode.com/problems/minimum-total-cost-to-process-all-elements">4351. Minimum Total Cost to Process All Elements</a></h2><h3>Medium</h3><hr><p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>Initially, you have <code>k</code> units of resources.</p>

<p>You must process the elements of <code>nums</code> from left to right. To process the <code>i<sup>th</sup></code> element, you need <code>nums[i]</code> resources.</p>

<p>If your available resources are less than <code>nums[i]</code>, you may perform an operation that increases your available resources by <code>k</code>. The value of <code>k</code> is fixed and does not change throughout the process. The first such operation incurs a cost of 1, the second incurs a cost of 2, and so on.</p>

<p>After processing the <code>i<sup>th</sup></code> element, your available resources decrease by <code>nums[i]</code>.</p>

<p>Return an integer denoting the <strong>minimum total cost</strong> required to process all elements. Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4], k = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>After processing <code>nums[0]</code>, we have <code>4 - 1 = 3</code> units of resources left.</li>
	<li>After processing <code>nums[1]</code>, we have <code>3 - 2 = 1</code> unit of resources left.</li>
	<li>Since <code>nums[2] = 3</code> and only 1 unit of resources is available, we perform the first operation costing 1. After processing <code>nums[2]</code>, we have <code>1 + 4 - 3 = 2</code> units of resources left.</li>
	<li>Since <code>nums[3] = 4</code> and only 2 units of resources are available, we perform the second operation costing 2, to have <code>2 + 4 = 6</code> units of resources,&nbsp;which is enough to&nbsp;process <code>nums[3]</code>.</li>
	<li>Thus, the total cost is <code>1 + 2 = 3</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,1,7,14], k = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">15</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>After processing <code>nums[0]</code>, we have <code>4 - 1 = 3</code> units of resources left.</li>
	<li>After processing <code>nums[1]</code>, we have <code>3 - 1 = 2</code> units of resources left.</li>
	<li>Since <code>nums[2] = 7</code> and only 2 units of resources are available, we perform two operations costing <code>1 + 2 = 3</code>. After processing <code>nums[2]</code>, we have <code>2 + 4 + 4 - 7 = 3</code> units of resources left.</li>
	<li>Since <code>nums[3] = 14</code> and only 3 units of resources are available, we perform three operations costing <code>3 + 4 + 5 = 12</code>, to have <code>3 + 4 + 4 + 4 = 15</code> units of resources,&nbsp;which is enough to&nbsp;process <code>nums[3]</code>.</li>
	<li>Thus, the total cost is <code>3 + 12 = 15</code>.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4], k = 10</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>To process all elements, we can use the initial 10 units of resources without performing any operations. Thus, the total cost required is 0.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= k &lt;= 10<sup>9</sup></code></li>
</ul>
explation oflast two conditins in answer:
The formula we need is:

1 + 2 + 3 + ... + operation

For example, if:

operation = 5

then:

1 + 2 + 3 + 4 + 5 = 15

The shortcut formula is:

operation × (operation + 1) / 2

For 5:

5 × 6 / 2 = 15

Now the problem is:

In programming, we are using modulo:

1000000007

and numbers can become very large.

So instead of doing:

operation * (operation + 1) / 2

we divide by 2 before multiplying to avoid overflow.

Case 1: operation is even

Code:

if(operation % 2 == 0)
{
    long long a = (operation / 2) % M;
    long long b = (operation + 1) % M;

    return (a * b) % M;
}

operation % 2 == 0 means:

operation is an even number (can be divided by 2)

Example:

operation = 6

Formula:

6 × 7 / 2

Instead of:

(6 × 7) / 2

we do:

(6 / 2) × 7

which is:

3 × 7 = 21

So:

a = operation / 2

means:

a = 6 / 2 = 3

and:

b = operation + 1

means:

b = 7

Answer:

3 × 7 = 21
Case 2: operation is odd

Example:

operation = 5

Formula:

5 × 6 / 2

Here operation cannot be divided by 2.

So divide the other number:

(5 × 6) / 2

becomes:

5 × (6 / 2)

which is:

5 × 3 = 15

Code:

long long a = operation % M;
long long b = ((operation + 1) / 2) % M;

return (a * b) % M;

Means:

a = 5

b = (5+1)/2
  = 6/2
  = 3

Answer:

5 × 3 = 15
Why do we check even/odd?

Because we want to divide by 2 before multiplication.

If we do:

operation * (operation+1)

first, the number can become too big and overflow.

So we safely divide one side first:

Even operation:
(operation/2) × (operation+1)

Odd operation:
operation × ((operation+1)/2)
