# CS135-Lab12

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with **2D Arrays**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```lab12.c```
## Program
Redheffer yellowheffer 

**The program should behave as follows:**  
Write a program which fills in the values of a variable length 2D array whose entries a[i][j] are 1 if i divides j or if j = 1; otherwise, a[i][j] = 0, also known as a Redheffer Matrix: https://en.wikipedia.org/wiki/Redheffer_matrix

This program should calculate and display a Redheffer Matrix of size 12.

Here is an example of how the program should function:
```
>./lab12
1  1  1  1  1  1  1  1  1  1  1  1
1  1  0  1  0  1  0  1  0  1  0  1
1  0  1  0  0  1  0  0  1  0  0  1
1  0  0  1  0  0  0  1  0  0  0  1
1  0  0  0  1  0  0  0  0  1  0  0
1  0  0  0  0  1  0  0  0  0  0  1
1  0  0  0  0  0  1  0  0  0  0  0
1  0  0  0  0  0  0  1  0  0  0  0
1  0  0  0  0  0  0  0  1  0  0  0
1  0  0  0  0  0  0  0  0  1  0  0
1  0  0  0  0  0  0  0  0  0  1  0
1  0  0  0  0  0  0  0  0  0  0  1
```
## Requirements
*main()*  
**Functionality**: This function should create a 2D array of integers. It should call the function to calculate the matrix values and to display the array to the screen. 

In addition to the main functions, your program should have 2 more functions:  

*computeRedheffer()*  
**Input Parameters**: integer rows, integer columns, 2D integer array  
**Returned Output**: none  
**Functionality**: This function should compute the Redheffer Matrix values and save them in the array.  

*displayMatrix()*  
**Input Parameters**: integer rows, integer columns, 2D integer array  
**Returned Output**: none  
**Functionality**: This function should disaply a 2D array to the screen, with each value being left justified in a field width of 2.  

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
