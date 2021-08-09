OPEN in Fullscreen or turn on Word Wrap for convenient viewing.

Contents of the Submission folder:
1. c_mod_lex.l
2. lex.yy.c
3. a.exe
4. input.txt
5. README.txt

How to use?
1. Open a command prompt and navigate to this folder using the 'cd' commands.
2. Open input.txt and type the input string/program in it. SAVE the file. (Can close if required after saving)
(NOTE: The input file already has a sample program in it. You can replace it by pasting your own when using for the first time)
3. Do this step only if you are running for the first time or have changed something in the 'c_mod_lex.l' or 'lex.yy.c' files otherwise skip to Step 4.(Not required for changes in input.txt file).
	a. Execute the command "flex c_mod_lex.l" in cmd/terminal.
	b. Execute the command "gcc lex.yy.c" in cmd/terminal.
4. Execute the executable "a" on the cmd/terminal using appropriate command(a.exe, ./a.out, etc).
5. The output will be printed in the cmd/terminal itself after step 4 is finished.

Output:
There are 12 token classes in my lexical analyser:
1. Keywords: The keywords in C like if,while,int,etc.
(Note: #define and #include have been considered as Keywords after confirmation from professsor)
2. Operators: All operators mentioned on page 53(may be a different page of the pdf) of the book "The C programming language by K&R 2nd Edition"
  (Note: 'sizeof' of treated as operator and not keyword in my lexical analyser. Also <<< and >>> in kernel invocation are treated as operators.)
3. Separator: For the semicolon(;).(Note: () and , are treated as operators according to the above book.)
4. Block-Start: For opening curly brace({).
5. Block-End: For closing curly brace(}).
6. Integer: For integer literals. (eg: 2, 25447)
7. Float: For floating point literals. (eg: 2.045, 3e9)(See 'Important points/features for more)
(Note: in '-52', '-' is treated as unary operator and '52' as integer literal. Same for float literals.)
8. Character: Enclosed in ''. They can consist of single character only. Escape sequences (\n,\t,\0,\') supported.
9. String: Enclosed in "". Escape sequences (\n,\t,\0,\") supported.    
(Note: '' is not a valid character, for empty character(null character)(\0). To use ' as character use \'. To use " inside a string use \".
After ' or " the corresponding ' or " should come on the same line i.e. the string and character should terminate in single line.)
10. Header_File: For header files given in #include statement.(eg. <stdio.h>).
11. Identifier: For variable/function names. The identifier rules are same as that of C(start with alphabet or _ followed by 0 or more alphanums
    or _. Alphabhet can be uppercase or lowercase).
12. Error: Anything not included in above token classes, comments or whitespaces is classified as error.

Important points/features:
1. In floats u can also enter numbers in format like 6e9, 6E-7,6.0e4, 7.023E-3,etc where E or e is exponent to base 10 and the number after it 
   gives the value of the exponent. It can be positive or negative or zero. Once e or E is written then exponent value has to be specified. Also     .9 and 9. type numbers are supported.
2. Single and multi line commments are supported.
(Note: comments and whitespaces are ignored i.e. there is no token class for them.)
3. In multiline comments if you don't put the ending */ then it will start classifying the stmt intended as comment into the different token
   hence dont't forget to complete the comment using */.
4. Type casting operators like (int), (unsigned long long), etc are supported.
5. Kernel is also supported.

References:
1. GeeksforGeeks for taking input from file.
2. StackExchange for doubts in implementation.
3. Flex documentation for relevant lex syntax.
4. The C programming language by K&R 2nd Edition for the operators.
5. The demos given by Abhay Sir in class.