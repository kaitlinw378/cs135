# CS135-Lab11

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with **creating strings**.
2.	Allow students to create a program which passes **strings** to functions.
3.  Allow students to practice iterating over **strings**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```lab11.c```
## Program
Finding punctuation! 

**The program should behave as follows:**  
Write a program which prompts the user for a sentence and displays whether or not the sentence has any punctuation.  

Here is an example of how the program could function:
```
>./lab11
Enter a sentence: Have a nice day :)
There is punctuation in your sentence.
>./lab11
Enter a sentence: Hello World
No punctuation.
```
## Requirements
*main()*  
**Functionality**: This function should create a character array of a large enough size. It should prompt the user for a sentence and store that string in the array. It should call the appropriate function for determining if there is punctuation in the string. Finally, the appropriate message should be displayed to the user.  

In addition to the main functions, your program should have 1 more function:  

*hasPunctuation()*  
**Input Parameters**: character array  
**Returned Output**: _Bool  
**Functionality**: This function should check each character in the string to determine whether or not there is punctuation and return either true or false. An ASCII table is included in this repository for reference.  

## Submission details
**Only one submission per team is needed**  
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
