#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define BOARDSIZE 100

int nahianlevel(){

    srand(time(NULL));
    int c=rand()%5+1;
    char *word;
    switch (c){
    case 1:word="cat";break;
    case 2:word="dog";break;
case 3: word="sun";break;
case 4: word="hat";break;
case 5: word="fish"; break;
}
int len=strlen(word),correct=0;
char display[len+1];
for(int i=0;i<len;i++){
 display[i]='_';
}
display[len]='\0';
int flag=0;
while(correct<len){
printf("\033[1;31m%s\033[0m\n",display);
printf("Enter your guess (multiple letters allowed):\n");
char Guess[20];
if (flag==0)printf("\033[1;41mFor Hint Enter 1.\033[0m\n");
scanf(" %s",&Guess);

if (flag==0){if(Guess[0]=='1'){
        flag=1;
     switch(c){case 1:{printf("A small, domesticated, carnivorous mammal, often kept as a pet.\n");break;
    case 2:printf("I have four legs, a wagging tail, and I'm known as man's best friend. Who am I?\n");}break;
case 3:printf("I shine brightly in the sky and give light and warmth to the world.\n");break;
case 4:printf("You wear me on your head to protect yourself from the sun or cold.\n");break;
case 5:printf("I swim in water, have scales, and breathe through gills.\n");break;}
}}
else if(flag==1 && Guess[0]=='1')printf("You have already used your guess.\n");
int m=correct;
for(int i=0;Guess[i]!='\0';i++){
for(int j=0;j<len;j++){
 if(Guess[i]==word[j] && Guess[i]!=display[j]){
    display[j]=Guess[i];
    correct++;}
}}
if (correct==m && Guess[0]!='1')printf("Wrong Guess.\n");}
printf("Congratulatuions you guessed right.\nThe word is '%s'.\n",word);
int a;
printf("Enter '1' to Return to Main Menu.\nEnter '2' to Return to Menu.\nEnter '3' to Play again.\nEnter '4' to Exit.\n");

scanf("%d",&a);
while(a!=1 && a!=2 && a!=3 && a!=4){    printf("Please choose between (1-4)\n");scanf("%d",&a);}
switch(a){
case 1:
    menu();
    break;

case 2:
    nahian();
    break;

case 3:
nahianlevel();
    break;

case 4:
    return 0;
    break;

}}

int nahianleve2(){

    {srand(time(NULL));
    int c=rand()%5+1;
    char *word;
    switch (c){
    case 1:word="journal";break;
    case 2:word="tunnel";break;
case 3: word="fossil";break;
case 4: word="whisper";break;
case 5: word="lantern"; break;
}
int len=strlen(word),correct=0;
char display[len+1];
for(int i=0;i<len;i++){
 display[i]='_';
}
display[len]='\0';
int flag=0,life=10;
while(correct<len && life>0){
printf("\033[1;31m%s\033[0m\n",display);
printf("Enter your guess (multiple letters allowed):\n");
char Guess[20];
if (flag==0)printf("\033[1;41mFor Hint Enter 1.\033[0m\n");
scanf(" %s",&Guess);

if (flag==0){if(Guess[0]=='1'){
        flag=1;
     switch(c){case 1:{printf("People write their thoughts in it.\n");break;
    case 2:printf("A passage through a mountain.\n");}break;
case 3:printf("Remains of ancient creatures.\n");break;
case 4:printf("Speaking very softly.\n");break;
case 5:printf("A light source for camping.\n");break;}
}}
else if (flag==1 && Guess[0]=='1')printf("You have already used your guess.\n");
int m=correct;
for(int i=0;Guess[i]!='\0';i++){
for(int j=0;j<len;j++){
 if(Guess[i]==word[j] && Guess[i]!=display[j]){
    display[j]=Guess[i];
    correct++;}
}}
if (correct==m && Guess[0]!='1'){printf("Wrong Guess.\n");
life--;
printf("Remaining life %d\n",life);}
}
if(life!=0)printf("Congratulatuions you guessed right.\nThe word is '%s'.\n",word);
else printf("You lost the game.\nThe word is '%s'.\n",word);

int a;
printf("Enter '1' to Return to Main Menu.\nEnter '2' to Return to Menu.\nEnter '3' to Play again.\nEnter '4' to Exit.\n");

scanf("%d",&a);
while(a!=1 && a!=2 && a!=3 && a!=4){    printf("Please choose between (1-4)\n");scanf("%d",&a);}
switch(a){
case 1:
    menu();
    break;

case 2:
    nahian();
    break;

case 3:
nahianleve2();
    break;

case 4:
    return 0;
    break;

}
}}

int nahianleve3(){
{
    srand(time(NULL));
    int c=rand()%5+1;
    char *word;
    switch (c){
    case 1:word="obfuscate";break;
    case 2:word="zephyr";break;
case 3: word="quixotic";break;
case 4: word="chiaroscuro";break;
case 5: word="mnemonics"; break;
}
int len=strlen(word),correct=0;
char display[len+1];
for(int i=0;i<len;i++){
 display[i]='_';
}
display[len]='\0';
int flag=0,life=10;
for(int i=0;i<len;i+=3){
{
    display[i]=word[i];
    correct++;}
}
while(correct<len && life>0){
printf("\033[1;31m%s\033[0m\n",display);
printf("Enter your guess (multiple letters allowed):\n");
char Guess[20];
if (flag==0)printf("\033[1;41mFor Hint Enter 1.\033[0m\n");
scanf(" %s",&Guess);

if (flag==0){if(Guess[0]=='1'){
        flag=1;
     switch(c){case 1:{printf("To make something unclear or confusing.\n");break;
    case 2:printf("A gentle breeze, often from the west.\n");}break;
case 3:printf("Extremely idealistic but impractical, like Don Quixote.\n");break;
case 4:printf("An art technique using strong contrasts of light and dark.\n");break;
case 5:printf("Memory aids or techniques for remembering information.\n");break;}
}}
else if (flag==1 && Guess[0]=='1')printf("You have already used your guess.\n");
int m=correct;

for(int i=0;Guess[i]!='\0';i++){
for(int j=0;j<len;j++){
 if(Guess[i]==word[j] && Guess[i]!=display[j]){
    display[j]=Guess[i];
    correct++;}
}}
if (correct==m && Guess[0]!='1'){printf("Wrong Guess.\n");
life--;
printf("Remaining life %d\n",life);}}

if(life!=0)printf("Congratulatuions you guessed right.\nThe word is '%s'.\n",word);
else printf("You lost the game.\n");

int a;
printf("Enter '1' to Return to Main Menu.\nEnter '2' to Return to Menu.\nEnter '3' to Play again.\nEnter '4' to Exit.\n");

scanf("%d",&a);
while(a!=1 && a!=2 && a!=3 && a!=4){    printf("Please choose between (1-4)\n");scanf("%d",&a);}
switch(a){
case 1:
    menu();
    break;

case 2:
    nahian();
    break;

case 3:
nahianleve3();
    break;

case 4:
    return 0;
    break;

}
}}

int nahianleve4(){
{
    srand(time(NULL));
    int c=rand()%5+1;
    char *word;
    switch (c){
    case 1:word="floccinaucinihilipilification";break;
    case 2:word="pneumonoultramicroscopicsilicovolcanoconiosis";break;
case 3: word="antidisestablishmentarianism";break;
case 4: word="hippopotomonstrosesquipedaliophobia";break;
case 5: word="supercalifragilisticexpialidocious"; break;
}
int len=strlen(word),correct=0;
char display[len+1];
for(int i=0;i<len;i++){
 display[i]='_';
}
display[len]='\0';
int flag=0,life=5;
while(correct<len && life>0){
printf("\033[1;31m%s\033[0m\n",display);
printf("Enter your guess (multiple letters allowed):\n");
char Guess[20];
if (flag==0)printf("\033[1;41mFor Hint Enter 1.\033[0m\n");
scanf(" %s",&Guess);

if (flag==0){if(Guess[0]=='1'){
        flag=1;
     switch(c){case 1:{printf("The act of regarding something as worthless.\n");break;
    case 2:printf("A lung disease caused by inhaling very fine silica dust; often cited as the longest word in English.\n");}break;
case 3:printf("Opposition to the disestablishment of a state church (historically in England).\n");break;
case 4:printf("Ironically, the fear of long words.\n");break;
case 5:printf(" A fanciful word popularized by the 1964 movie Mary Poppins, meaning 'fantastic' or 'extraordinary'.\n");break;}
}}
else if (flag==1 && Guess[0]=='1')printf("You have already used your guess.\n");
int m=correct;

for(int i=0;Guess[i]!='\0';i++){
for(int j=0;j<len;j++){
 if(Guess[i]==word[j] && Guess[i]!=display[j]){
    display[j]=Guess[i];
    correct++;}
}}

if (correct==m && Guess[0]!='1'){printf("Wrong Guess.\n");
life--;
printf("Remaining life %d\n",life);}}
if(life!=0)printf("Congratulatuions you guessed right.\nThe word is '%s'.\n",word);
else printf("You lost the game.\n");

int a;
printf("Enter '1' to Return to Main Menu.\nEnter '2' to Return to Menu.\nEnter '3' to Play again.\nEnter '4' to Exit.\n");

scanf("%d",&a);
while(a!=1 && a!=2 && a!=3 && a!=4){    printf("Please choose between (1-4)\n");scanf("%d",&a);}
switch(a){
case 1:
    menu();
    break;

case 2:
    nahian();
    break;

case 3:
nahianleve4();
    break;

case 4:
    return 0;
    break;

}
}}

int nahianleve5(){}

int nahian(){
  printf("\033[38;5;208mWelcome to Word Guessing Game.\033[0m\n");

    {
        printf("\033[1;34mPlease choose difficulty Level.\033[0m\n");
printf("\033[1;32m1.Easy.\033[0m\n");
printf("\033[1;36m2.Normal.\033[0m\n");
printf("\033[1;33m3.Hard.\033[0m\n");
printf("\033[1;31m3.Impossible.\033[0m\n");
printf("\033[1;35m5.Return to Main Menu.\033[0m\n");


int level;
scanf("%d",&level);
if (level==1){
{
    nahianlevel();
}
}





else if (level==2){
        int nahianleve2();

}





else if (level==3){
       nahianleve3();
}







else if (level==4){
    nahianleve4();
}






else if(level==5){
    menu();
}
else {printf("Please choose between 1-5\n");
getchar();
nahian();
}

}
}
int rollDice() {
    return rand() % 6 + 1;
}
int SnakesAndLadders(int position) {
    int ladders[BOARDSIZE + 1] = {0};
    int snakes[BOARDSIZE + 1] = {0};
    ladders[2]=38;ladders[7]=14;ladders[8]=31;
    ladders[15]=6;ladders[21]=42;ladders[28]=84;
    ladders[36]=44;ladders[51]=67;ladders[71]=91;
    ladders[78]=98;
    snakes[16]=6;snakes[46]=25;snakes[49]=11;
    snakes[62]=19;snakes[64]=60;snakes[74]=53;
    snakes[89]=68;snakes[92]=88;snakes[95]=75;
    snakes[99]=80;
    if (ladders[position]!=0) {
        printf("\033[1;36mLadder!\033[0m \033[1;33mMoving from %d to %d\033[0m\n", position,ladders[position]);
        return ladders[position];
    }
    if (snakes[position]!=0) {
        printf("\033[1;35mSnake!\033[0m \033[1;33mMoving from %d to %d\033[0m\n", position,snakes[position]);
        return snakes[position];
    }
    return position;
}
void movePlayer(int *player, char *name) {
    int dice=rollDice();
    printf("\033[1;33m%s rolled: %d\033[0m\n", name, dice);
    *player+=dice;
    if (*player>BOARDSIZE) {
        *player-=dice;
        printf("\033[1;35mYou need an exact roll to win!\033[0m\n");
    } else {
        *player=SnakesAndLadders(*player);
    }
    printf("\033[1;34m%s's new position: %d\033[0m\n", name, *player);
}

int menu(void){
printf("\033[1;33mPlease Select A Game.\033[0m\n\033[1;36m1.Snake Ladder.\033[0m\n\033[1;32m2.Word Guessing.\033[0m\n\033[1;34m3.Rock Paper Scissors.\033[0m\n\033[1;35m4.Number Guessing.\033[0m\n");
int x;
while (x!=1 && x!=2 && x!=3 && x!=4){
scanf("%d",&x);
switch (x){
case 1:
       srand(time(0));
    int start;
    char name1[20], name2[20];
    printf("\033[1;33mWelcome to Snakes and Ladders!\033[0m\n");
    printf("\033[1;34mEnter Player 1's Name: \033[0m");
    scanf("%s", name1);
    printf("\033[1;35mEnter Player 2's Name: \033[0m");
    scanf("%s", name2);
    while (1) {
        printf("\n\033[1;32m1. Start\033[0m\n");
        printf("\033[1;35m2. How To Play\033[0m\n");
        printf("\033[1;36m3. Exit\033[0m\n");
        scanf("%d", &start);
        if (start==2) {
printf("\033[1;33mThe \033[1;31mSnake\033[0m \033[1;33mand\033[0m \033[1;34mLadder\033[0m \033[1;33mgame is a classic board game played on a 100 square grid, where players move based on dice rolls. The objective is to reach square 100 first. The game features ladders, which help players move ahead, and snakes, which bring them down.\033[0m");
        printf("\n");
        printf("\033[1;34mLadder Positions: \033[0m\n");
        printf("\033[1;32m2 jumps to 38\n");
        printf("7 jumps to 14\n");
        printf("8 jumps to 31\n");
        printf("15 jumps to 60\n");
        printf("21 jumps to 42\n");
        printf("28 jumps to 84\n");
        printf("36 jumps to 44\n");
        printf("51 jumps to 67\n");
        printf("71 jumps to 91\n");
        printf("78 jumps to 98\033[0m\n");
        printf("\n");
        printf("\033[1;31mSnake Positions: \033[0m\n");
        printf("\033[1;32m16 goes down to 6\n");
        printf("46 goes down to 25\n");
        printf("49 goes down to 11\n");
        printf("62 goes down to 19\n");
        printf("64 goes down to 60\n");
        printf("74 goes down to 53\n");
        printf("89 goes down to 68\n");
        printf("92 goes down to 88\n");
        printf("95 goes down to 75\n");
        printf("99 goes down to 80\033[0m\n");
        printf("\n");
        printf("\033[1;33mPlayers start at square 1, roll a die (1 to 6), and move accordingly.Landing on a ladder's base moves the player up, while landing on a snake's head drops them down. The game continues until a player reaches exactly 100 to win.\033[0m\n");
            int choice;
            printf("\n\033[1;36mEnter 1 To Return To Main Menu\033[0m\n");
            printf("\033[1;31mEnter 0 To Exit\033[0m\n");
            scanf("%d", &choice);

            if (choice==0) {
                return 0;
            }
            continue;
        } else if (start==3) {
            return 0;
        } else if (start==1) {
            break;
        }
    }
    int player1=0,player2=0,turn=1;
    char choice;
    while (player1<BOARDSIZE && player2<BOARDSIZE) {
        if (turn == 1) {
            printf("\n\033[1;36m%s's turn (Press 'r' to roll, 'q' to quit): \033[0m", name1);
        } else {
            printf("\n\033[1;33m%s's turn (Press 'r' to roll, 'q' to quit): \033[0m", name2);
        }
        scanf(" %c", &choice);
        if (choice=='q') {
            printf("\033[1;31mGame exited.\033[0m\n");
            break;
        } else if (choice!='r') {
            printf("\033[1;31mInvalid input!\033[0m \033[1;36mPress 'r' to roll or 'q' to quit.\033[0m\n");
            continue;
        }
        if (turn == 1) {
            movePlayer(&player1, name1);
            if (player1==BOARDSIZE) {
                printf("\n\033[1;36m%s wins!\033[0m\n", name1);
                break;
            }
            turn = 2;
        } else {
            movePlayer(&player2, name2);
            if (player2==BOARDSIZE) {
                printf("\n\033[1;36m%s wins!\033[0m\n", name2);
                break;
            }
            turn = 1;
        }
    }

        break;
        return 0;
    case 2:
        nahian();

        break;
        return 0;
    case 3:
printf("Welcome to ROCK PAPER SCISSOR\n");
    int level,player,computer,computer1,computer2,win=0,lose=0,tie=0;
    char player_name[10];
    srand(time(0));

    printf("Enter your name:");
    scanf("%s",&player_name);
    while(1)
    {
        printf("Select a level\n1.Easy\n2.Hard\n0.Exit\n");
        scanf("%d",&level);
        if(level!=1 && level!=2 && level!=0)
        {
            printf("Select between (0-2)\n");
        }
        else if(level==0)
        {
            return 0;
        }
        switch(level)
        {
            case 1:
            while(1)
            {
                srand(time(0));
                printf("Enter your choice:\n1.ROCK\n2.PAPER\n3.SCISSOR\n4.Check score\n5.Menu\n0.Exit\n");
                scanf("%d",&player);
                computer=rand()%3+1;
                if(player==1) printf("You chose ROCK\n");
                if(player==2) printf("You chose PAPER\n");
                if(player==3) printf("You chose SCISSOR\n");
                if(player==1 || player==2 || player==3)
                {
                    if(computer==1) printf("Computer chose ROCK\n");
                    if(computer==2) printf("Computer chose PAPER\n");
                    if(computer==3) printf("Computer chose SCISSOR\n");
                }
                    if(player==computer)
                    {
                        tie++;
                        printf("Sorry!It's tie\n");
                    }
                    else if((player!=0 && player!=4) && ((player==1 && computer==3) || (player==2 && computer==1) || (player==3 && computer==2)))
                    {
                        printf("Congratulations!You won.\n");
                        win++;
                    }
                    else if((player!=0 && player!=4) && ((player==3 && computer==1) || (player==1 && computer==2) || (player==2 && computer==3)))
                    {
                        lose++;
                        printf("Sorry!You lost\n");
                    }
                    if(player==4)
                    {
                        printf("Won = %d\nLost = %d\nTie = %d\n",win,lose,tie);
                    }
                    else if(player==0)
                    {
                        return 0;
                    }
                    else if (player!=0 && player!=1 && player!=2 && player!=3 && player!=4 && player!=5)
                    {
                        printf("Please choose between (0-5)\n");
                    }
                    else if(player==5)
                    {
                        break;
                    }
                    continue;
            }
            break;
            case 2:
            while(1)
            {
                srand(time(0));
                printf("Enter your choice:\n1.ROCK\n2.PAPER\n3.SCISSOR\n4.Check score\n5.Menu\n0.Exit\n");
                scanf("%d",&player);

                computer1=rand()%3+1;
                computer2=rand()%3+1;
                if(player==1) printf("You chose ROCK\n");
                if(player==2) printf("You chose PAPER\n");
                if(player==3) printf("You chose SCISSOR\n");
                if(player==1 || player==2 || player==3)
                {
                    if(computer1==1) printf("Computer1 chose ROCK\n");
                    if(computer1==2) printf("Computer1 chose PAPER\n");
                    if(computer1==3) printf("Computer1 chose SCISSOR\n");
                }
                if(player==1 || player==2 || player==3)
                {
                    if(computer2==1) printf("Computer2 chose ROCK\n");
                    if(computer2==2) printf("Computer2 chose PAPER\n");
                    if(computer2==3) printf("Computer2 chose SCISSOR\n");
                }
                    if(player==computer1 && player==computer2)
                    {
                        tie++;
                        printf("Sorry!It's tie\n");
                    }
                    else if((player==1 && computer1!=2 && computer2!=2) || (player==2 && computer1!=3 && computer2!=3) || (player==3 && computer1!=1 && computer2!=1))
                    {
                        printf("Congratulations!You won.\n");
                        win++;
                    }
                    else if(player==1 || player==2 || player==3)
                    {
                        lose++;
                        printf("Sorry!You lost.\n");
                    }
                    if(player==4)
                    {
                        printf("Won = %d\nLost = %d\nTie = %d\n",win,lose,tie);
                    }
                    else if(player==0)
                    {
                        return 0;
                    }
                    else if (player!=0 && player!=1 && player!=2 && player!=3 && player!=4 && player!=5)
                    {
                        printf("Please choose between (0-5)\n");
                    }
                    else if(player==5)
                    {
                        break;
                    }
                    continue;
            }
            break;
        }
    }break;
        return 0;
        case 4:


    srand(time(NULL));

    printf("Select Difficulty Level:\n");
    printf("1. Easy (1-10)\n");
    printf("2. Medium (10-100)\n");
    printf("3. Hard (100-1000)\n");
    printf("4.Return to Menu\n");
    printf("Enter your choice: ");
     int mynum, usernum, lower, upper, choicex, chances = 10;
    scanf("%d", &choicex);

    switch (choicex) {
        case 1:
            lower = 1;
            upper = 10;
            break;
        case 2:
            lower = 10;
            upper = 100;
            break;
        case 3:
            lower = 100;
            upper = 1000;
            break;
        case 4:
            menu();
            break;
        default:
            printf("Invalid choice! Defaulting to Easy mode (1-10).\n");
            lower = 1;
            upper = 10;
    }

    mynum = (rand() % (upper - lower + 1)) + lower;

    printf("I have a number in my mind (%d-%d). Can you guess it? You have %d chances.\n", lower, upper, chances);

    while (chances > 0) {
        printf("Enter your guess: ");
        scanf("%d", &usernum);

        if (mynum == usernum) {
            printf("Yes, you got it!\n");
            return 0;
        } else if (mynum > usernum) {
            printf("My number is greater than %d. Try again!\n\n", usernum);
        } else {
            printf("My number is smaller than %d. Try again!\n\n", usernum);
        }

        chances--;
        printf("You have %d chances left.\n", chances);
    }

    printf("Sorry, you've used all your chances. The correct number was %d. Better luck next time!\n", mynum);

            break;
            return 0;
        default:
            printf("Please choose a game between (1-4)\n");
            break;
        }}


return 0;
}
int main(){
    menu();
    return 0;
}

