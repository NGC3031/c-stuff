#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <wchar.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "");
    const char *mesg;
    int row,col;
    int startcol;

    if (argc > 1) {
        mesg = argv[1];
    } else {
        mesg = "Hello Scott";
    }

    initscr();
    getmaxyx(stdscr,row,col);
/*    if (strlen(mesg) > col) {
        startcol = 0;
    } else {
        startcol = (col - strlen(mesg)) / 2;
    }
*/  
    int long arr[row][col];
    int long ch =0x2605;

    for (int i=0;i<row-4;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=ch;
            mvprintw(i,j,"%i",ch);
        }
    }

    for (int j=0;j<col;j++){
        arr[row-4][j]='-';
        mvprintw(row-4,j,"%lc",arr[row-4][j]);
    }

    for(int i=0;i<8;i++){
        if(i%2==1)
            standout();   
        mvprintw(row/2,startcol,"%s",mesg);
        sleep(1);
        if(i%2!=1)
            standend();
        mvprintw(row/2,startcol,"%s",mesg);                               
        refresh();
    }
printf("%lc", (wchar_t)0x3041);
    getch();
    endwin();
}
