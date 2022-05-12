# CS135-Lab7

## Lab Goals
The goal of this Lab is to:
1.	Allow students to familiarize themselves with **Passing by Address**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```lab7.c```.
## Program
Write a program for converting meters to feet and inches. 

Here is an example of how the program could function:
```
>./lab7
Please enter your meters: 1
3 feet 3.372 inches
>./lab7
Please enter your meters: 2.5
8 feet 2.430 inches
```
## Requirements
*main()*  
**Functionality**: 
The user should be prompted to enter a value for meters. The conversion should be made from meters to feet and inches. The feet and inch values should be displayed to the screen (with 3 decimal places for the inches).

In addition to the main functions, your program should have 1 more function:

*metersToFeetInches()*  
**Input Parameters**: double, int pointer, double pointer  
**Returned Output**: none  
**Functionality**: This function convert the double meter parameter (which is passed by value) to separate feet and inch values (which are passed by address). The conversion value for meter to feet is 3.281. The conversion value for feet to inches is 12.  

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
