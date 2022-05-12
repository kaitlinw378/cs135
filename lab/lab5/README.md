# CS135-Lab5

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with **debugging**.
2.	Review the midterm solution.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```lab5.c```
## Program
Currently, this program has 4 bugs in it which prevent it from compiling. Find and correct those bugs so the program compiles.

**The program should behave as follows:**  
I had a flat tire Saturday morning, so we're going to debug a converter program for pressures.

This program should prompt the user for a number of PSI. It should then prompt the user for whether they want to convert the PSI to kPa (kilopascals) or Bar. Depending on the conversion choice the user made, the program should make the appropriate conversion. If the user did not enter a valid conversion choice, an error message should be displayed. Finally, it should display the converted pressure (with four decimal places) corresponding to the user's choice to the screen.

Here is an example of how the program could function:
```
>./lab5
Please enter the number of psi: 42
Please enter the conversion you'd like to make.
'K' for kPa
'B' for Bar
K
42 PSI to 289.5900 kPa.
>./lab5
Please enter the number of psi: 42
Please enter the conversion you'd like to make.
'K' for kPa
'B' for Bar
B
42 PSI to 2.8958 Bar.
>./lab5
Please enter the number of psi: 42
Please enter the conversion you'd like to make.
'K' for kPa
'B' for Bar
q
Invalid conversion choice.
```
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
