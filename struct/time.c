
struct time
{
   int h, m, s;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d ", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
    return  t.h * 3600 + t.m * 60 + t.s;
}

// 0 - equal, > 0 - t1 > t2, < 0 - t1 < t2
int compare(struct time t1, struct time t2)
{
    return totalseconds(t1) - totalseconds(t2);
}

void main()
{
  struct  time t1 = {1,20,3};
  struct time t2 = {10,20,10};
  struct time times[5];
  int i;

      print(t1);
      printf(" %d ", compare(t1,t2));

      srand(time(0));
      printf("\Times\n");

      for(i = 0; i < 5; i ++)
      {
          times[i].h = rand() % 24;
          times[i].m = rand() % 60;
          times[i].s = rand() % 60;
          print(times[i]);
      }
}

