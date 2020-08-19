#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
   //VARIABLE DECLARATION

   char p1[20],p2[20],ch;
   char b[3][3]={ {'1','2','3'} , { '4','5','6'} ,{ '7','8','9' } };
   int x=1,i,j,f=0;
   clrscr();

   textcolor(14);
   cout<<"\n\n\n\n\n\n\n\n\t\t\t ";
   cprintf("WELCOME TO TIC TAC TOE GAME !");
   getch();

   clrscr();
   textcolor(3);
     
   cprintf("\n\n ENTER THE FIRST PLAYER NAME  : ");
   gets(p1);

   textcolor(2);

   cprintf("\n\n ENTER THE SECOND PLAYER NAME : ");
   gets(p2);

   textcolor(6);

    // MAIN LOGIC OF THE PROGRAM

   while(x<10)
   {

     clrscr();

    cout<<"\n\n\t";
    if(x%2==0)
    {
     textcolor(2);
     cprintf("IT'S %s TURN, PLEASE ENTER THE INPUT",p2);
    }
    else
    {
     textcolor(3);
     cprintf("IT'S %s TURN, PLEASE ENTER THE INPUT",p1);
    }

    cout<<"\n\n\n";

    for(i=0 ; i<3 ; i++)
    {
     cout<<"\n\n\t\t\t\t";
     for(j=0 ; j<3 ;j++)
     {

      if(b[i][j]=='X')
	textcolor(3);
      else if(b[i][j]=='O')
	textcolor(2);
      else
	textcolor(7);

      cprintf("%c",b[i][j]);
      cout<<"\t";
     }
    }

    cout<<"\n\n\n\n\t";

    if(x%2==0)
    {
      textcolor(2);
      cprintf("ENTER THE POSITION WHERE YOU WANT TO PLACE 'O' : ");
    }
    else
    {
     textcolor(3);
     cprintf("ENTER THE POSITION WHERE YOU WANT TO PLACE 'X' : ");
    }

    cin>>ch;

    for(i=0 ; i<3 ; i++)
    {
     for(j=0 ; j<3 ; j++)
     {
       if(b[i][j]==ch)
       {
	if(x%2==0)
	 b[i][j]='O';
	else
	 b[i][j]='X';
       }
     }
    }

    // CHECKING FOR WINNER

    for(i=0 ; i<3 ; i++)
    {
     // CHECKING FOR WINNER IN ROW

     if(b[i][0]=='X' && b[i][1]=='X' && b[i][2]=='X')
     {
      f=1;
      break;
     }

     if(b[i][0]=='O' && b[i][1]=='O' && b[i][2]=='O')
     {
      f=2;
      break;
     }

     // CHECKING FOR WINNER IN COLOUMN

     if(b[0][i]=='X' && b[1][i]=='X' && b[2][i]=='X')
     {
      f=1;
      break;
     }

     if(b[0][i]=='O' && b[1][i]=='O' && b[2][i]=='O')
     {
      f=2;
      break;
     }

     // CHECKING DIAGONALLY FIRST WAY

     if(b[0][0]=='X' && b[1][1]=='X' && b[2][2]=='X')
     {
      f=1;
      break;
     }

     if(b[0][0]=='O' && b[1][1]=='O' && b[2][2]=='O')
     {
      f=2;
      break;
     }

     // CHECKING FOR DIAGONALLY SECOND WAY

     if(b[0][2]=='X' && b[1][1]=='X' && b[2][0]=='X')
     {
      f=1;
      break;
     }

     if(b[0][2]=='O' && b[1][1]=='O' && b[2][0]=='O')
     {
      f=2;
      break;
     }

    }

    if(f==1 || f==2)
    break;      // BREAK MAIN LOOP

    x++;
   }

   clrscr();

    cout<<"\n\n\n\n";

    for(i=0 ; i<3 ; i++)
    {
     cout<<"\n\n\t\t\t\t";
     for(j=0 ; j<3 ;j++)
     {

      if(b[i][j]=='X')
	textcolor(3);
      else if(b[i][j]=='O')
	textcolor(2);
      else
	textcolor(7);

      cprintf("%c",b[i][j]);
      cout<<"\t";
     }
    }

    if(f==2)
    {
     textcolor(-4);
     cout<<"\n\n\n\v\t\t\t    ";
     cprintf("GAME OVER ! ");
     cprintf("%s IS WINNER",p2);
    }
    else if(f==1)
    {
     textcolor(-4);
     cout<<"\n\n\n\v\t\t\t    ";
     cprintf("%s IS WINNER",p1);
    }
    else
    {
     textcolor(-4);
     cout<<"\n\n\n\v\t\t\t    ";
     cprintf("MATHC TIE");
    }

   getch();
   clrscr();

   cout<<"\n\n\n\n\n\n\n\n\t\t\t";
   textcolor(3);
   cprintf("A GAME BY SINGH SAURABH.R.");

   getch();

   return 0;
}

