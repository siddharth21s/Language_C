#include<stdio.h> 
			//# =>defines everything after it is a preprocessor directive. 
			//"stdio.h" => are used to include user defined header files and the current directory. 
			// stdio.h is a header file containing declarations of all the input output features.


int main() 
			//main is an entry point function.
			//int is an return value type.
			// () funnction argument accepting brackets. if no argument is specified the number of arguments is unlimited

{ 			// { is an bigening of block or scope
 
	printf("Hello World \n"); 
			// printf is a library fucnction which writes onto standard output
			// ; is end of statement
			// "hello world \n" is a string to be printed
			// \n used to jump to next line
	return 0;
			// return is a jump statement returning back the control to the calling function
			// 0 represents success

}

