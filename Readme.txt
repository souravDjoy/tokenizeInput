How to run the Assignment 01 C program
----------------------------------------------
----------------------------------------------

First, unzip the submitted zip folder and extract the contents of it in a simple folder in the computer. 
Then, using FileZilla, transfer the main.c and Readme.txt files from the local site to the remote site(timberlea server). 
This is just a simple drag and drop process.

Now, both the files main.c and Readme.txt should be visible in the home directory.






On the timberlea server, compile the c program using the command:
gcc -o main main.c

Here, the original format is: gcc -o [name of the executable file] [name of the source code file], and we are naming our 
executable and source file as main and main.c respectively. The user is free to choose any name as the executable file name.

Once you click enter, the C program has been compiled now and ready to run.






Now, run the program using the command:
./main

Here again, the original format is: ./[name of the executable file], so the user just needs to follow the format and
put the name of the executable file to run the program. Hit enter and the prompt will be displayed.





