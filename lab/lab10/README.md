# CS135-Lab10

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with **creating arrays**.
2.	Allow students to create a program which passess **arrays** to functions.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```lab10.c```
## Program
Calculating an average! 

**The program should behave as follows:**  
Write a program which averages 5 user-entered numbers.  

This program should prompt a user for 5 values. It will then add up all the values to be able to find the average. Finally, the average should be displayed to the screen.

Here is an example of how the program could function:
```
>./lab10
Enter a number: 1
Enter a number: 9
Enter a number: 2
Enter a number: 8
Enter a number: 3
Average: 4.60
```
## Requirements
*main()*  
**Functionality**: This function create an array of size 5. It should prompt the user 5 times and save each of the entered values into the array. It should call the appropriate function for calculating the average of the values. Finally, the average value should be displayed to the screen.  

In addition to the main functions, your program should have 1 more function:  

*calcAverage()*  
**Input Parameters**: integer array, integer number of elements  
**Returned Output**: double average  
**Functionality**: This function should calculate the average of all of the elements in the array.  

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
