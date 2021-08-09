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
If no errors are there the whole 3 address code is printed. When an error is found its description is printed and compilation stops. Correct the error and run again to get the 3 address code. Some lines may have multiple labels which means program may jump to that particular line from different places which use anyone of these labels in the goto stmt. in if and while when condition is false jump directly to end of loop otherwise continue execution sequentially. two variables with same name in different scopes will give no error and show no difference in 3ac but in symbol table they will have different nesting scope and hence different entries. if a symbol is not declared in that scope it will give an error.

References:
1. GeeksforGeeks for taking input from file.
2. StackExchange for doubts in implementation.
3. Flex and Yacc/Bison documentation for relevant syntax.
4. The C programming language by K&R 2nd Edition for the operators.
5. Microsoft Documentation of C/C++ constructs and syntax.
