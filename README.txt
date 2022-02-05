Hello my name is Dwight Coles III. This is a project that
calls fork() to create a new child process of the caller.
If fork() is less than 0, the program outputs the creation
of a child process was unsuccessful. If equal to 0, the program
then prints the child's and parent's process id.

To check for errors in your program:
   - $ g++ -std=c++14 -Wall -pedantic-errors -c forkpid.cpp

To compile this program:
   - $ g++ -o forkpid forkpid.cpp

After compiling, you are now ready to run.

To run the assn06 file:
   - $ ./forkpid

