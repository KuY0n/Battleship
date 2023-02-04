#include <stdio.h>
#include <stdlib.h>

int zgadnijstatki = 20;
int zgadnijstatkiAI = 20;
char litera;
int liczba,liczba2;

int menu()
{
  int wybierz;
  printf("\nChcesz zagrac jeszcze raz?\n1 - Tak\n2 - Nie\n\n");
  scanf("%d", &wybierz);
  switch(wybierz)
  {
    case 1:
      zgadnijstatki = 20;
      zgadnijstatkiAI = 20;
      main();
      break;
    case 2:
      break;
    default:
      printf ("BLAD");menu();
      break;
  }
  return 0;
}

int tworzenie(char board[14][14], char board2[14][14])
{
  int temp_rzad, temp_kolumna, statki = 0, kierunek;

  for(int j=1;j<13;j++)
    for(int i=1;i<13;i++)
        board[j][i] = 79;

  for(int i=0;i<=13;i++)
    {
      board[i][13] = 33;
      board[13][i] = 33;
      board[0][i] = 33;
      board[i][0] = 33;
    }

  do
  {
    do
      {
          temp_rzad = rand()%10+2;
          temp_kolumna = rand()%10+2;
      }while((board[temp_rzad-1][temp_kolumna+1] == 33 || board[temp_rzad][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+2][temp_kolumna+1] == 33 || board[temp_rzad+3][temp_kolumna+1] == 33 || board[temp_rzad+4][temp_kolumna+1] == 33 || board[temp_rzad+4][temp_kolumna] == 33 || board[temp_rzad+4][temp_kolumna-1] == 33 || board[temp_rzad+3][temp_kolumna-1] == 33 || board[temp_rzad+2][temp_kolumna-1] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33)||(board[temp_rzad-1][temp_kolumna+4] == 33 || board[temp_rzad][temp_kolumna+4] == 33 || board[temp_rzad+1][temp_kolumna+4] == 33 || board[temp_rzad+1][temp_kolumna+3] == 33 || board[temp_rzad+1][temp_kolumna+2] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33 || board[temp_rzad-1][temp_kolumna+1] == 33 || board[temp_rzad-1][temp_kolumna+2] == 33 || board[temp_rzad-1][temp_kolumna+3] == 33));
      if((board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna+1] != 33 && board[temp_rzad+3][temp_kolumna+1] != 33 && board[temp_rzad+4][temp_kolumna+1] != 33 && board[temp_rzad+4][temp_kolumna] != 33 && board[temp_rzad+4][temp_kolumna-1] != 33 && board[temp_rzad+3][temp_kolumna-1] != 33 && board[temp_rzad+2][temp_kolumna-1] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33)&&(board[temp_rzad-1][temp_kolumna+4] != 33 && board[temp_rzad][temp_kolumna+4] != 33 && board[temp_rzad+1][temp_kolumna+4] != 33 && board[temp_rzad+1][temp_kolumna+3] != 33 && board[temp_rzad+1][temp_kolumna+2] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33 && board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad-1][temp_kolumna+2] != 33 && board[temp_rzad-1][temp_kolumna+3] != 33))
      {
        kierunek = rand()%2;
        if(kierunek == 0)
        {
          board[temp_rzad][temp_kolumna] = 33;
          board[temp_rzad+1][temp_kolumna] = 33;
          board[temp_rzad+2][temp_kolumna] = 33;
          board[temp_rzad+3][temp_kolumna] = 33;
          statki++;
        }
        if(kierunek == 1)
        {
          board[temp_rzad][temp_kolumna] = 33;
          board[temp_rzad][temp_kolumna+1] = 33;
          board[temp_rzad][temp_kolumna+2] = 33;
          board[temp_rzad][temp_kolumna+3] = 33;
          statki++;
        }
      }
      else if(board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna+1] != 33 && board[temp_rzad+3][temp_kolumna+1] != 33 && board[temp_rzad+4][temp_kolumna+1] != 33 && board[temp_rzad+4][temp_kolumna] != 33 && board[temp_rzad+4][temp_kolumna-1] != 33 && board[temp_rzad+3][temp_kolumna-1] != 33 && board[temp_rzad+2][temp_kolumna-1] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33)
      {
        board[temp_rzad][temp_kolumna] = 33;
        board[temp_rzad+1][temp_kolumna] = 33;
        board[temp_rzad+2][temp_kolumna] = 33;
        board[temp_rzad+3][temp_kolumna] = 33;
        statki++;
      }
      else
      {
        board[temp_rzad][temp_kolumna] = 33;
        board[temp_rzad][temp_kolumna+1] = 33;
        board[temp_rzad][temp_kolumna+2] = 33;
        board[temp_rzad][temp_kolumna+3] = 33;
        statki++;
      }
  }while(statki != 1);

   do
    {
      do
        {
          do
            {
              temp_rzad = rand()%10+2;
              temp_kolumna = rand()%10+2;
            } while(board[temp_rzad][temp_kolumna] == 33);
        }while((board[temp_rzad-1][temp_kolumna+1] == 33 || board[temp_rzad][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+2][temp_kolumna+1] == 33 || board[temp_rzad+3][temp_kolumna+1] == 33 || board[temp_rzad+3][temp_kolumna] == 33 || board[temp_rzad+3][temp_kolumna-1] == 33 || board[temp_rzad+2][temp_kolumna-1] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33)||(board[temp_rzad-1][temp_kolumna+3] == 33 || board[temp_rzad][temp_kolumna+3] == 33 || board[temp_rzad+1][temp_kolumna+3] == 33 || board[temp_rzad+1][temp_kolumna+2] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33 || board[temp_rzad-1][temp_kolumna+1] == 33 || board[temp_rzad-1][temp_kolumna+2] == 33));
      if((board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna+1] != 33 && board[temp_rzad+3][temp_kolumna+1] != 33 && board[temp_rzad+3][temp_kolumna] != 33 && board[temp_rzad+3][temp_kolumna-1] != 33 && board[temp_rzad+2][temp_kolumna-1] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33)&&(board[temp_rzad-1][temp_kolumna+3] != 33 && board[temp_rzad][temp_kolumna+3] != 33 && board[temp_rzad+1][temp_kolumna+3] != 33 && board[temp_rzad+1][temp_kolumna+2] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33 && board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad-1][temp_kolumna+2] != 33))
      {
        kierunek = rand()%2;
        if(kierunek == 0)
        {
          board[temp_rzad][temp_kolumna] = 33;
          board[temp_rzad+1][temp_kolumna] = 33;
          board[temp_rzad+2][temp_kolumna] = 33;
          statki++;
        }
        if(kierunek == 1)
        {
          board[temp_rzad][temp_kolumna] = 33;
          board[temp_rzad][temp_kolumna+1] = 33;
          board[temp_rzad][temp_kolumna+2] = 33;
          statki++;
        }
      }
      else if(board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna+1] != 33 && board[temp_rzad+3][temp_kolumna+1] != 33 && board[temp_rzad+3][temp_kolumna] != 33 && board[temp_rzad+3][temp_kolumna-1] != 33 && board[temp_rzad+2][temp_kolumna-1] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33)
      {
        board[temp_rzad][temp_kolumna] = 33;
        board[temp_rzad+1][temp_kolumna] = 33;
        board[temp_rzad+2][temp_kolumna] = 33;
        statki++;
      }
      else
      {
        board[temp_rzad][temp_kolumna] = 33;
        board[temp_rzad][temp_kolumna+1] = 33;
        board[temp_rzad][temp_kolumna+2] = 33;
        statki++;
      }
    }while(statki != 3);

  do
    {
      do
        {
          do
            {
              temp_rzad = rand()%10+2;
              temp_kolumna = rand()%10+2;
            } while(board[temp_rzad][temp_kolumna] == 33);
        } while((board[temp_rzad-1][temp_kolumna+1] == 33 || board[temp_rzad][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+2][temp_kolumna+1] == 33 || board[temp_rzad+2][temp_kolumna] == 33 || board[temp_rzad+2][temp_kolumna-1] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33)||(board[temp_rzad-1][temp_kolumna+2] == 33 || board[temp_rzad][temp_kolumna+2] == 33 || board[temp_rzad+1][temp_kolumna+2] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33 || board[temp_rzad-1][temp_kolumna+1] == 33));
          if((board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna] != 33 && board[temp_rzad+2][temp_kolumna-1] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33)&&(board[temp_rzad-1][temp_kolumna+2] != 33 && board[temp_rzad][temp_kolumna+2] != 33 && board[temp_rzad+1][temp_kolumna+2] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33 && board[temp_rzad-1][temp_kolumna+1] != 33))
          {
            kierunek = rand()%2;
            if(kierunek == 0)
            {
              board[temp_rzad][temp_kolumna] = 33;
              board[temp_rzad+1][temp_kolumna] = 33;
              statki++;
            }
            if(kierunek == 1)
            {
              board[temp_rzad][temp_kolumna] = 33;
              board[temp_rzad][temp_kolumna+1] = 33;
              statki++;
            }
          }
          else if(board[temp_rzad-1][temp_kolumna+1] != 33 && board[temp_rzad][temp_kolumna+1] != 33 && board[temp_rzad+1][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna+1] != 33 && board[temp_rzad+2][temp_kolumna] != 33 && board[temp_rzad+2][temp_kolumna-1] != 33 && board[temp_rzad+1][temp_kolumna-1] != 33 && board[temp_rzad][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna-1] != 33 && board[temp_rzad-1][temp_kolumna] != 33)
          {
            board[temp_rzad][temp_kolumna] = 33;
            board[temp_rzad+1][temp_kolumna] = 33;
            statki++;
          }
          else
          {
            board[temp_rzad][temp_kolumna] = 33;
            board[temp_rzad][temp_kolumna+1] = 33;
            statki++;
          }
    }while(statki != 6);

  do
    {
      do
        {
          do
          {
            temp_rzad = rand()%10+2;
            temp_kolumna = rand()%10+2;
          } while(board[temp_rzad][temp_kolumna] == 33);
        } while(board[temp_rzad-1][temp_kolumna+1] == 33 || board[temp_rzad][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna+1] == 33 || board[temp_rzad+1][temp_kolumna] == 33 || board[temp_rzad+1][temp_kolumna-1] == 33 || board[temp_rzad][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna-1] == 33 || board[temp_rzad-1][temp_kolumna] == 33);

        board[temp_rzad][temp_kolumna] = 33;
        statki++;
      }while(statki != 10);

  for(int i=0; i<14; i++)
    for(int k=0; k<14; k++)
      board2[i][k]=79;

  return 0;
}

int plansza(char board[14][14])
{
  printf("     A  B  C  D  E  F  G  H  I  J\n");
  for(int j=2; j<=11; j++)
    {
      printf("%3d",j-1);
      for(int i=2; i<=11; i++)
          printf("%3c", board[j][i]);
      printf("\n");
    }
  return 0;
}

int zgaduj(char board[14][14],char zgadnijboard[14][14],char AIboard[14][14],char zgadnijAI[14][14])
{

  printf("Twoja plansza:\n\n");
  plansza(board);
  printf("\nPlansza przeciwnika:\n\n");
  plansza(zgadnijAI);
  printf("\nLiczba twoich statkow: %d\nLiczba statkow przeciwnika: %d",zgadnijstatki,zgadnijstatkiAI);

  do
  {
    printf("\n\nTwoja kolej, podaj kordynaty: ");
    scanf(" %c %d",&litera,&liczba);
    if(litera>=97 && litera<=106)
    litera-=32;
  }while((litera<65||litera>74)||(zgadnijAI[liczba+1][litera-63]==88)||(zgadnijAI[liczba+1][litera-63]==33)||(liczba<1||liczba>10));

  fflush(stdin);

  if(AIboard[liczba+1][litera-63]==79)
  {
    zgadnijAI[liczba+1][litera-63]=88;
    printf("\nNiestety nie trafiles\n\n");
  }
  else
  {
    zgadnijAI[liczba+1][litera-63]=33;
    printf("\nDobry strzal\n\n");
    zgadnijstatkiAI-=1;
  }

  do
    {
      liczba = rand()%10+2;
      liczba2 = rand()%10+2;
    }while(zgadnijboard[liczba][liczba2]==88);

  if(board[liczba][liczba2]==33)
    zgadnijstatki-=1;
  zgadnijboard[liczba][liczba2]=88;
  board[liczba][liczba2]=88;

  if(zgadnijstatki==0)
  {
    printf("Twoja plansza:\n\n");
    plansza(board);
    printf("\nPlansza przeciwnika:\n\n");
    plansza(zgadnijAI);
    printf("\nNiestety sie nie udalo\n");
    menu();
    return 0;
  }
  else if(zgadnijstatkiAI==0)
  {
    printf("Twoja plansza:\n\n");
    plansza(board);
    printf("\nPlansza przeciwnika:\n\n");
    plansza(zgadnijAI);
    printf("\nGratulacje, wygrales!\n");
    menu();
    return 0;
  }

  zgaduj(board,zgadnijboard,AIboard,zgadnijAI);

  return 0;
}

int main()
{
  srand(time(NULL));

  char board[14][14];
  char zgadnijboard[14][14];
  char AIboard[14][14];
  char zgadnijAI[14][14];

  printf("\n\n\t\t\t\t\tWitaj w \"Grze w Statki\"\n\n");
  tworzenie(board,zgadnijboard);
  tworzenie(AIboard,zgadnijAI);
  zgaduj(board,zgadnijboard,AIboard,zgadnijAI);
  return 0;
}
