#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper,int count,int st)
{
    int print[6] = {0,0,0,0,0,0};

    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %(upper - lower + 1)) + lower;


                  for(int place = 0; place <= 5; place ++)
                  {
                      if (print[0] == 0)
                      {
                          print[place] = num;
                          num = 0;

                      }
                      if ( print[place] == num)
                      {
                          num =0;
                      }
                      if (print[5]== 0)
                      {
                          count= count + 1;
                      }
                      if (print[place] == 0)
                      {
                          print[place]=num;
                          num = 0;
                      }


                  }


    }
    FILE * pr;
        pr = fopen("students.txt","a+");
        fprintf(pr,"\n %d ", st);
    for (int r = 0;r <= 5;r++)
    {

        fprintf(pr," %d ", print[r]);
    }
    fclose(pr);
}

// Driver code
int rngdata()
{
    FILE * pr;
    pr = fopen("students.txt","w+");
    fclose(pr);
    int lower = 1, upper = 6, count = 6;
    srand(time(0));
for (int st = 1;st <= 201;st++)
{
    // Use current time as
    // seed for random generator


    printRandoms(lower, upper, count,st);
}

    return 0;
}
