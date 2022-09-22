# DAA_ConvexHull
DAA Assignment

#### Problem Statement : Implement a solution for Finding a summation of elements from a matrix.
#### Example: Accept a 2D matrix dimension. Populate using random number [non-zero]
#### Accept any five dimension values from the user for example [1,1] [4,10] 10,7] [15,3] [20,18] .Check the region covered by these points in the matrix.Calculate the boundary by either considering all points or ignoring few points which may not come on boundary [convex hull]. Find sum of elements in the region.


## Solution :

Step 1: Making a Matrix of 20x20(we can make matrix of any size). Putting Random numbers inside it using rand() function.

Step 2: Taking 5 points from the user.

Step 3: Checking for each point if it lies inside Convex Hull by using ConvexHull function.

Step 4: If point lies inside Convex Hull then adding the value inside that point i.e matrix into our answer.
