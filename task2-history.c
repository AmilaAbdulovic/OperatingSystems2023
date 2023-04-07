#include <stdio.h>
void displayHistory()
{
    
    printf("Shell command history:\n");
    
    int i=0;
    int j = 0;
    int histCount=0;
    int history[i][j];
    
    for (i = 0; i<10;i++)
    {
        
        printf("%d.  ", histCount);
        while (history[i][j] != '\n' &&  history[i][j] != '\0')
        {	
	
            printf("%c", history[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        histCount--;
        if (histCount ==  0)
            break;
    }
    printf("\n");
}
int main(){
    displayHistory();
    
}
