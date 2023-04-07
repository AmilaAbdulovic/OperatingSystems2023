#include <stdio.h>
#include <string.h>
Void prompt(){
    Char input(100);
    Printf(„prompts“);
    Scanf(„%s“, input);
    If strcmp(input, „quit“)==0){
        Return;}
        Prompt();
}
Int main(){
Prompt();
}