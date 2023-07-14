/*This is basically the first program that everyone learns as a beginner ,
  "The Hello,World!" and this is how you write it in C language.*/

#include<stdio.h>
/*  The # include statement "grabs the attention" of the pre-processor (the process that occurs before your program is actually compiled) 
and "tells" the pre-processor to include whatever follows the # include statement.  
    The <.h> files are called the header files and they contains declarations and definitions of functions not explicitly defined in your code. 
    for example -  <stdio.h> contains information for "printf" function.  */

int main()
/*  The main() function in C is the entry point of a program where the execution of a program starts.
  
  In ANSI C 89 the difference between the following functions:

  int main()
  int main(void)
  int main(int argc, char* argv[])
      
      is:-

  int main() - a function that expects unknown number of arguments of unknown types. Returns an integer representing the application software status.
  int main(void) - a function that expects no arguments. Returns an integer representing the application software status.
  int main(int argc, char * argv[]) - a function that expects argc number of arguments and argv[] arguments. Returns an integer representing the application software status. */

{ 
    printf("Hello ,World!);
    /*    printf function basically prints out the input given to it(whatever given inside the "") , which can be a string , number , variable , etc. 
          By default printf considers the input as a text until specified.*/

    return 0;
  /*The return 0 means success and returning a non-zero number means failure.*/
}

/*    
      so the complete program is as follows - 

      #include<stdio.h>
      int main()
       {
         printf("Hello,World!");
         return 0;
       } 
       
*/

      
