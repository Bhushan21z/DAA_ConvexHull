# DAA_ConvexHull
DAA Assignment  
Name : Bhushan Wanjari  
Roll no: 37

#### Problem Statement : Implement a solution for Finding a summation of elements from a matrix.
#### Example: Accept a 2D matrix dimension. Populate using random number [non-zero]
#### Accept any five dimension values from the user for example [1,1] [4,10] 10,7] [15,3] [20,18] .Check the region covered by these points in the matrix.Calculate the boundary by either considering all points or ignoring few points which may not come on boundary [convex hull]. Find sum of elements in the region.


## Solution :

Step 1: Making a Matrix of 20x20(we can make matrix of any size). Putting Random numbers inside it using rand() function.

![1](https://user-images.githubusercontent.com/82889656/192092352-2c82b092-1f8a-41be-aa62-9554a6354c33.jpeg)

Step 2: Taking 5 points from the user.

![2](https://user-images.githubusercontent.com/82889656/192092362-c9c29cfc-a003-44ac-8d3e-78776ef3f7e6.jpeg)


Step 3: Checking for each point if it lies inside Convex Hull by using ConvexHull function.

![3](https://user-images.githubusercontent.com/82889656/192092366-82ddd69c-91e7-4a0e-9c65-2b839803886b.jpeg)

![4](https://user-images.githubusercontent.com/82889656/192092384-76cf6cf2-e5a0-4a07-a718-17ffd57b9604.jpeg)

![5](https://user-images.githubusercontent.com/82889656/192092386-2dedb217-a818-43f9-b877-18163e268e93.jpeg)

![6](https://user-images.githubusercontent.com/82889656/192092393-7564d35c-7908-4dcc-bd55-7f5ad61efbd0.jpeg)


Step 4: If point lies inside Convex Hull then adding the value inside that point i.e matrix into our answer.

![7](https://user-images.githubusercontent.com/82889656/192092406-637d93d2-5e53-4644-87a7-208b4015b7e2.jpeg)

