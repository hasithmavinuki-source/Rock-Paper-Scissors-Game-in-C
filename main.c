#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int get_com_choice(void);

int get_user_choice(void);

void check_the_winner(int user_choice , int computer_choice);


int main(void){
    
    bool play = true ;
    srand(time(NULL));
    while (play){
        
        
        
        char play_again = '\0' ;

        int choice_from_the_user = get_user_choice();

        if (choice_from_the_user == 0){
            continue ;
        }
        
        int choice_from_the_computer = get_com_choice() ;

        check_the_winner(choice_from_the_user , choice_from_the_computer);


        printf("\nDo you want to play again? Y or N ");
        scanf(" %c" , &play_again);
        if (play_again != 'y' && play_again != 'Y'){
            play = false ;
        }        
    
    }   

    return 0 ;

}


int get_user_choice(void){
    int choice = 0 ;
    printf("\n\n");
    printf("*** Rock Paper Scissors ***\nChoose an option.\n1)Rock\n2)Paper\n3)Scissors\nEnter your choice: ");
    scanf("%d",&choice);
    printf("\n");
    switch(choice){
        case 1 :
            printf("You chose Rock!\n");
            break ;
        case 2 :
            printf("You chose Paper!\n");
            break ;
        case 3 :
            printf("You chose Scissors!\n");
            break ;
        default :
            printf("Invalid input !!\nTry again.\n");
            while (getchar() != '\n');
            return 0 ; 
    }
    return choice ;


}




int get_com_choice(void){
    int com_choice = 0 ;
    
    com_choice =((rand()%3 )+1);
    
    switch(com_choice){
        case 1 :
            printf("Computer chose Rock!\n");
            break ;
        case 2 :
            printf("Computer chose Paper!\n");
            break ;
        case 3 :
            printf("Computer chose Scissors!\n");
            break ;
    
    }

    return com_choice ;
}

void check_the_winner(int user_choice , int computer_choice){
    printf("\n");
    if (user_choice == computer_choice){
            printf("It's a draw!\n");
        }
        else if (user_choice == 1 && computer_choice == 3){
            printf("You Win!!\n");
        }
        else if (user_choice == 3 && computer_choice == 2){
            printf("You Win!!\n");
        }
        else if (user_choice == 2 && computer_choice == 1){
            printf("You Win!!\n");
        }
        else {
            printf("You Lose!!\n");
        }
        

}