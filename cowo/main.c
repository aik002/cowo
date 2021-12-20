//
//  main.c
//  cowo
//
//  Created by Aiko Lebida on 10.12.21.
//

#include <stdio.h>
#include "main.h"

#include "displayentry.h"
#include "newentry.h"
#include "searchentry.h"
#include "database.h"


/*Private Functions_______________________*/

/*Private Variables_______________________*/
typedef enum : uint8_t {
    turnOff,
    using,
    error,
} usestates;

usestates ProgramState = turnOff;


/*MAIN___________________________________*/
int main(int argc, const char * argv[]) {
    
    ProgramState = using;
    
    int menuChoice = -1;
    
    while(ProgramState == using){
        printMainMenu();
        scanf("%d", &menuChoice);
        
        switch (menuChoice) {
            case 0:
                ProgramState = turnOff;
                break;
                
            case 1:
                break;
            
            case 2:
                break;
                
            case 3:
                break;
                
            case 4:
                break;
                            
            default:
                break;
        }
    }

    
    
    if (ProgramState ==  turnOff)
        return 0;
    else
        return 1;
    
}

void printMainMenu(void){
    printf("Main Menu______________\n");
    printf("1) ENTER NEW ENTRY\n");
    printf("2) SEARCH ENTRIES\n");
    printf("3) VIEW ENTRY\n");
    printf("4) MANAGE DB\n");
    printf("0) EXIT\n");
    printf("> ");
}

void causeError(char cause[]){
    printf("FATAL ERROR OCCURED\n");
    printf("CAUSE: %s \n", cause);
    printf("PROGRAMM WILL NOW EXIT \n");
    ProgramState = error;
}


