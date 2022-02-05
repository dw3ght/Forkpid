#include <iostream> 
#include <unistd.h> 
#include<stdio.h>
using namespace std;

int main() 
{
  //calling fork() is used to create a new process
  //   fork();
   
   // initialzing variables to int
   int pid, fpid, ppid;

   //initializing variable to fork()
   fpid = fork();

   if (fpid == 0)  { //if fork() is eual to zero

     //initializing variables
     pid = getpid();
     ppid = getppid();

     cout << "\nParent Process id : " //printing Parent Process id
	  << pid << endl; 
     cout << "\nChild Process id : " //printing Child Process id
	  << ppid << endl; 
   }
   else if (fpid < 0) { //if fork() gives value less than 0
     cout << "\nthe creation of a child process was unsuccessful."
	  << endl;
   }

   fork();

   // end of program
   return 0; 


} 
