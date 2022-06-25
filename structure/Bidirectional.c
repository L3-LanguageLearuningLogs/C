#include <stdio.h>
#include <termios.h>
#include <unistd.h>

#define KEY_2BYTE_1 (0x00)
#define KEY_2BYTE_2 (0x5b)
#define KEY_ENTER (0xa)
#define KEY_BACKSPACE (0x7f)
#define KEY_LEFT (0x44)
#define KEY_RIGHT (0x43)

/* reads from keypress, doesn't echo */
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
 
/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
struct Node {
    char cData;
    struct Node *pPrev;
    struct Node *pNext;
} Node;

struct Term {
    struct Node *pHead;
    struct Node *pTail;
} Term;

int main(void)
{
    char wkey;
    char func;

    struct Node pCursor;
    struct Term pBuf;

    pBuf.pHead = NULL;
    pBuf.pTail = NULL;

    while(1){
        wkey = getch();

         printf("%c = %x\n", wkey, wkey);

/*
        if((KEY_2BYTE_1 == wkey) || (KEY_2BYTE_2 == wkey)){
            getch();
        }
    */
        if(KEY_ENTER == wkey){
            break;
        }
        if(KEY_2BYTE_2){
            // func = getch();
             printf("%x = %x\n", wkey, func);
            /*
            if(KEY_LEFT == func){
                printf("←");
            }
            */
        }
    }

   
}