
enum weeks { SUN, MON, TUE};
enum mode  { TRAIN = 10, BUS = 20, FLIGHT = 30};


void main()
{
   enum weeks dow;
   enum mode tm;

      dow = SUN;
      dow = TUE;
      tm = BUS;
      printf("%d ", tm);
}
