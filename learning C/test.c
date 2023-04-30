#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
  int user, i, j, out = 0, run = 0, game = 0, tuser = 0, toss = 0;
  int dice, dirun = 0;
  srand(time(NULL));
  printf("Welcome to the cricket game!\n");
  while (tuser != 1 && tuser != 2)
  {
    printf("CHOSE HEAD OR TAILS:\n Press 1 for HEAD and 2 for TAIL\n");
    scanf("%d", &tuser);
  }

  toss = rand() % 2 + 1;

  if (toss == tuser)
  {
    printf("You won the toss\n");
    while (game != 1 && game != 2)
    {
      printf("CHOSE BETWEEN BATTING AND BOWLING:\n Press 1 for Bat and 2 for Ball\n");
      scanf("%d", &game);
    }
    if (game == 1)
    {
      printf("you are batting\n");
    }
    else
    {
      printf("you are bowling\n");
    }
  }
  else
  {
    game = rand() % 2 + 1;
    if (game == 1)
    {
      printf("CPU won the toss!!\nCPU chose to bowl first, you are batting\n");
    }
    else
    {
      printf("CPU won the toss!!\nCPU chose to bat first, you are bowling\n");
    }
  }
  if (game == 2)
  {
    while (out == 0)
    {
      printf("Play your Bowl!!\n");
      scanf("%d", &user);
      dice = rand() % 6 + 1;
      if (user < 1 || user > 6)
      {
        printf("illegal move u dumb, pick in between 1 to 6\n");
        continue;
      }

      if (user != dice)
      {
        dirun = dirun + dice;
        printf("You played: %d || CPU played: %d\nCPU total run is %d\n", user, dice, dirun);
      }
      else
      {
        out = 1;
        printf("You played: %d || CPU played: %d\nBOWLLED!!\nCPU total run is %d\n", user, dice, dirun);
      }
    }

    out = 0;
    printf("you are batting now\n");
    while (out == 0)
    {
      printf("Play your shot!!\n");
      scanf("%d", &user);
      dice = rand() % 6 + 1;

      if (user < 1 || user > 6)
      {
        printf("illegal move u dumb, pick in between 1 to 6\n");
        continue;
      }

      if (user != dice)
      {
        run = run + user;
        printf("You played: %d || CPU played: %d\nyour total run is %d\nRemaining: %d\n", user, dice, run, dirun - run);
      }
      else
      {
        out = 1;
        printf("You played: %d || CPU played: %d\nyou're out lol!!\nyour total run is %d\n", user, dice, run);
      }
      if (run > dirun)
      {
        break;
      }
    }
  }
  else
  {
    while (out == 0)
    {
      printf("Play your shot!!\n");
      scanf("%d", &user);
      dice = rand() % 6 + 1;
      if (user < 1 || user > 6)
      {
        printf("illegal move u dumb, pick in between 1 to 6\n");
        continue;
      }
      if (user != dice)
      {
        run = run + user;
        printf("You played: %d || CPU played: %d\nyour total run is %d\n", user, dice, run);
      }
      else
      {
        out = 1;
        printf("You played: %d || CPU played: %d\nyou're out lol!!\nyour total run is %d\n", user, dice, run);
      }
    }
    out = 0;
    printf("you are bowling now\n");
    while (out == 0)
    {
      printf("Play your Bowl!!\n");
      scanf("%d", &user);
      dice = rand() % 6 + 1;
      if (user < 1 || user > 6)
      {
        printf("illegal move u dumb, pick in between 1 to 6\n");
        continue;
      }

      if (user != dice)
      {
        dirun = dirun + dice;
        printf("You played: %d || CPU played: %d\nCPU total run is %d||Remaining: %d\n", user, dice, dirun, run - dirun);
      }
      else
      {
        out = 1;
        printf("You played: %d || CPU played: %d\nBOWLLED!!\nCPU total run is %d\n", user, dice, dirun);
      }
      if (dirun > run)
      {
        break;
      }
    }
  }

  printf("------------------------------------------------------\n");
  if (run > dirun)
  {
    printf("Your run is %d ||CPU run is %d\n you have won", run, dirun);
  }
  else if (run == dirun)
  {
    printf("your run is %d || CPU run is %d\n The match has been drawn!", run, dirun);
  }
  else
  {
    printf("Your run is %d ||CPU run is %d\n you have lost", run, dirun);
  }
  return 0;
}
