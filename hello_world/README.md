C Language

task 0: gcc -E "$CFILE" -o c i use this command to Preprocess only without compaile or assemle or link the C file that saved in variabl and save the outbot to file c name

task 1: gcc -c "$CFILE" -o "${CFILE%.c}.o" this script compaile the C file without assemple or link and save the outbut to same file main but change end of file to .o

task 2: gcc -S "$CFILE" -o "${CFILE%.c}.s" this script generates the assemply code and save the outbut to same filename wthe change end of file to .s

tsak 3: gcc "$CFILE" -o "cisfun" ths script compailes the C file and create executable file 
