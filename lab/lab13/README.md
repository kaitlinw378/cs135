# CS135-Lab13

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with **command line arguments**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2.  **Filename**: Save your program as ```lab13.c```
## Program
Fall in line! 

**The program should behave as follows:**  
Write a program which accepts the names of files as command line arguments and verifies it can open those files. If there are less than two command line arguments, the program should display to the user correct usage instructions. If the input file cannot be opened, there user should be informed. If the output file cannot be opened, the user should be informed. Otherwise, the program should end.  

Here is an example of how the program could function:
```
>./lab13 in.txt
Correct usage:
./lab13 inFile outFile

>./lab13 in.txt out.txt
Sorry, could not open in.txt for reading

>touch in.txt
>./lab13 in.txt out.txt
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
