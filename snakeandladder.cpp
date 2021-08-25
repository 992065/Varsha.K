#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void lines(int n, char ch);
void box();
void gmscore(char name1[],char name2[], int pr1, int pr2);
void roll_dice(int &score);
int main()
{
   int player1=0, player2=0, previous_pos;
   char pr1name[50], pr2name[50];
   system("cls");
   srand((unsigned)time(NULL));

   lines(40, '=');
   cout<<"\n";
   lines(40, '=');
   cout<<"\n";
   lines(40, '=');
   cout<<"\n\t\tSNAKE $ LADDER\n";
   lines(40, '=');
   cout<<"\n";
   lines(40,'=');
   cout<<"\n";
   lines(40, '=');
   cout<<"\n Enter the name of the Player 1 :";
   gets(pr1name);
   cout<<"\n Enter the name of the Player 2 :";
   gets(pr2name);

   while(player1 < 100 && player2 <100)
   {
       box();
       gmscore(pr1name, pr2name, player1, player2);
       cout<<"\n\n ====>"<< pr1name<< " Now comes your turn ====>> Press any key to roll the dice";
       getch();
       previous_pos= player1;
       roll_dice(player1);
       if(player1< previous_pos)
        cout<< "\n\a Hisss!! Your are bitten by the snake ! Your position now is :"<<player1<<"\n";
       else if(player1 >previous_pos+6)
        cout<<"\n\aWoo-hoo!! Here comes the ladder! Your position now is :"<<player1;
       cout<<"\n\n ====>"<<pr2name<<"Now comes your turn ====>>Press any key to roll the dice";
       getch();
       previous_pos= player2;
       roll_dice(player2);
       if(player2 <previous_pos)
        cout<<"\n\a Hisss!! Your are bitten by the snake ! Your position now is :"<<player2<<"\n";
       else if(player2 >previous_pos+6)
        cout<<"\n\aWoo-hoo!! Here comes the ladder! Your position now is :"<<player2;
        getch();
   }
   system("cls");
   cout<<"\n\n\n";
   lines(42,'#');
   cout<<"\n\t\tRESULT\n\n";
   lines(42,'#');
   cout<<endl;
   gmscore(pr1name, pr2name, player1, player2);
   cout<<"\n\n\n";
   if(player1 >= player2)
    cout<<"Hurray!!"<<pr1name<<"-You won!!\n\n";
   else
    cout<<"Hurray!!"<<pr2name<<"-You won!!\n\n";
   lines(42,'#');
   getch();
   return 0;
}
void lines(int n, char ch)
{

    for(int i=0; i<n ; i++)
        cout<<ch;
}
void box()
{

    system("cls");
    cout<<"\n\n";
    lines(62,'-');
    cout<<"\n | Snake is at position \t|\t"<<"Ladder is at position |\n";
    lines(62,'-');
    cout<<endl;
    cout<<"| From 99 to 27           \t|\t"<<"From 6 to 28  |\n";
    cout<<"| From 93 to 49           \t|\t"<<"From 22 to 83 |\n";
    cout<<"| From 85 to 17           \t|\t"<<"From 41 to 75 |\n";
    cout<<"| From 67 to 31           \t|\t"<<"From 44 to 69 |\n";
    cout<<"| From 51 to 23           \t|\t"<<"From 63 to 97 |\n";
    cout<<"| From 47 to 2            \t|\t"<<"From 87 to 92 |\n";
    cout<<"| From 21 to 1            \t|\t"<<"From 19 to 57 |\n";
    lines(62, '-');
    cout<<endl;
}
void gmscore(char name1[], char name2[], int pr1, int pr2)
{
    cout<<"\n";
    lines(42,'-');
    cout<<"\n\t\t GAME STATUS\n";
    lines(52, '-');
    cout<<"\n ====> "<< name1<<" is at position "<< pr1<<endl;
    cout<<"====> "<<name2<<" is at position "<<pr2<<endl;
    lines(42, '-');
    cout<<endl;
}
void roll_dice(int &score)
{
    int dice;
    dice = 1+rand()%6;
    cout<<"\n Your"<<dice<<"Points :";
    score=score+dice;
    cout<<"Your position right now is :"<<score;
    switch(score)
    {
    case 99:
        score = 27;
        break;
    case 93:
        score = 49;
        break;
    case 85:
        score =17;
    case 67:
        score= 31;
    case 51:
        score = 23;
    case 47:
        score = 2;
    case 21:
        score =1;
    case 6:
        score= 28;
    case 22:
        score=83;
    case 41:
        score= 75;
    case 44:
        score= 69;
    case 63:
        score=97;
    case 87:
        score=92;
    case 19:
        score=57;
    }
}

