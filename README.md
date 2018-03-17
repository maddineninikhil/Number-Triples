# Number-Triples
This a solution for finding shortest path from given vertex to the destination vertex using dijkstra's algorithm
In this problem you will be given a sequence of triples of positive integers. For example:

 1  2   5
 5  2   6
 1  3   8
 8  1  11
 1  1   6
10  1   6
11  3   6
10  4   8
10  1  11
Given a pair of numbers A and B, a chain connecting A and B is a sequence of triples

A0 W0 A1,   A1 W1 A2,   A2 W2 A3,   ... Ak-2 Wk-2 Ak-1,   Ak-1 Wk-1 Ak

such that

A0 = A
Ak = B
For each i, 0 ≤ i < k, either the triple Ai Wi Ai+1 or the triple Ai+1 Wi Ai is in the given set of triples.
The value of such a chain is the sum of the Wis in the chain. For example, here is a chain connecting 1 and 11 using the triples listed above:

1  1  6,  6  3  11
The value of this chain is 1+3 = 4.

Here is another chain connecting 1 and 11.

1  1  6,  6  1  10,  10  1  11
The value of this chain is 1+1+1 = 3. You can verify that among all chains connecting 1 and 11 this is the one with least value.

Sometimes there may be no chains connecting the given pair of numbers. For example, there is no chain connecting 1 and 2.

You will be given a sequence of triples and a pair of numbers. Your task is to find the value of the least value chain connecting the two numbers.

Solution hint
Construct a graph from the triples and use Dijkstra's algorithm for single-source shortest paths.

Full solution
Visit: http://www.iarcs.org.in/inoi/contests/apr2005/Advanced-1-solution.php

.
Input format
The first line of the input has three numbers M, A and B. M is the number of triples. The next M lines (lines 2,3,...,M+1) describe the triples. Line i+1 contains the three positive integers Xi, Yi and Zi that make up the ith triple. Your task is to find the value of the least value chain connecting A and B.

Output format
If there is at least one chain connecting A and B the first line of the output must consist of a single word YES. In that case the second line must contain a single integer value indicating the value of the least valued chain connecting A and B. If there are no chains connecting A and B the output should contain a single line with the word NO on it.

Test Data:
You may assume that 1 ≤ Xi, Yi, Zi ≤ 2000 and M ≤ 4000000.

Example:
We illustrate the input and output format using the above example:

Sample Input 1:
9 1 11
1 2 5
5 2 6
1 3 8
8 1 11
1 1 6
10 1 6
11 3 6
10 4 8
10 1 11
Sample Output 1:
YES
3
Sample Input 2:
9 1 2
1 2 5
5 2 6
1 3 8
8 1 11
1 1 6
10 1 6
11 3 6
10 4 8
10 1 11
Sample Output 2:
NO
