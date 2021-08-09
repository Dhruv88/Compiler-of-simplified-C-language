OPEN in Fullscreen or turn on Word Wrap for convenient viewing.

Contents of the Submission folder:
1. c_mod_lex.l
2. c_mod_lex.y
3. c_mod_lex.tab.h
4. c_mod_lex.tab.c
5. lex.yy.c
6. a.exe
7. input.txt
8. README.txt

How to use?
1. Open a command prompt and navigate to this folder using the 'cd' commands.
2. Open input.txt and type the input string/program in it. SAVE the file. (Can close if required after saving)
(NOTE: The input file already has a sample program in it. You can replace it by pasting your own when using for the first time)
3. Do this step only if you are running for the first time or have changed something in the lex or yacc files otherwise skip to Step 4.(Not required for changes in input.txt file).
	a. Execute the command "bison -d c_mod_lex.y" in cmd/terminal.
	b. Execute the command "flex c_mod_lex.l" in cmd/terminal.
	c. Execute the command "gcc lex.yy.c c_mod_tab.c" in cmd/terminal.
4. Execute the executable "a" on the cmd/terminal using appropriate command(a.exe, ./a.out, etc).
5. The output will be printed in the cmd/terminal itself after step 4 is finished.

Output:
If no errors are found then gives the message no errors found.
If errors are found it gives the line no. around which the error occurred and gives a message regarding what can be wrong.
Finds only one error at a time.
Only checks if syntax is correct. Whether an identifier is declared or not is not checked as it is a part of semantic analysis.
Also in case of #define it only checks if #define stmt is correctly written. Any shorthands made using it and used in the program will produce errors. This is according to what Professor has mentioned in discussion on Cnavas. 
There is one shift/reduce conflict which is taken care of using priority.

References:
1. GeeksforGeeks for taking input from file.
2. StackExchange for doubts in implementation.
3. Flex and Yacc/Bison documentation for relevant syntax.
4. The C programming language by K&R 2nd Edition for the operators.
5. Microsoft Documentation of C/C++ constructs and syntax.
6. ANSI C99 grammar.
7. The demos given by Abhay Sir in class.