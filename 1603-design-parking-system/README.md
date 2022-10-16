<h2><a href="https://leetcode.com/problems/design-parking-system/">1603. Design Parking System</a></h2><h3>Easy</h3><hr><div class=""><p class="">Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.</p>

<p class="">Implement the <code class="">ParkingSystem</code> class:</p>

<ul class="">
	<li class=""><code class="">ParkingSystem(int big, int medium, int small)</code> Initializes object of the <code class="">ParkingSystem</code> class. The number of slots for each parking space are given as part of the constructor.</li>
	<li class=""><code class="">bool addCar(int carType)</code> Checks whether there is a parking space of <code class="">carType</code> for the car that wants to get into the parking lot. <code class="">carType</code> can be of three kinds: big, medium, or small, which are represented by <code class="">1</code>, <code class="">2</code>, and <code class="">3</code> respectively. <strong class="">A car can only park in a parking space of its </strong><code class="">carType</code>. If there is no space available, return <code class="">false</code>, else park the car in that size space and return <code class="">true</code>.</li>
</ul>

<p class="">&nbsp;</p>
<p class=""><strong class="example">Example 1:</strong></p>

<pre class=""><strong class="">Input</strong>
["ParkingSystem", "addCar", "addCar", "addCar", "addCar"]
[[1, 1, 0], [1], [2], [3], [1]]
<strong class="">Output</strong>
[null, true, true, false, false]

<strong class="">Explanation</strong>
ParkingSystem parkingSystem = new ParkingSystem(1, 1, 0);
parkingSystem.addCar(1); // return true because there is 1 available slot for a big car
parkingSystem.addCar(2); // return true because there is 1 available slot for a medium car
parkingSystem.addCar(3); // return false because there is no available slot for a small car
parkingSystem.addCar(1); // return false because there is no available slot for a big car. It is already occupied.
</pre>

<p class="">&nbsp;</p>
<p class=""><strong class="">Constraints:</strong></p>

<ul class="">
	<li class=""><code class="">0 &lt;= big, medium, small &lt;= 1000</code></li>
	<li class=""><code class="">carType</code> is <code class="">1</code>, <code class="">2</code>, or <code class="">3</code></li>
	<li class="">At most <code class="">1000</code> calls will be made to <code class="">addCar</code></li>
</ul>
</div>