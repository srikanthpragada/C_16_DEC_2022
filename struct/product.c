
struct product
{
   char name[30];
   int price, qty;
};

struct product max(struct product p1, struct product p2)
{
   if (p1.price > p2.price)
     return p1;
   else
     return p2;
}


int equals(struct product p1, struct product p2)
{
    return strcmp(p1.name, p2.name) == 0 &&
           p1.price == p2.price &&
           p1.qty == p2.qty;
}

void print(struct product p)
{
    printf("Name  : %s\n", p.name);
    printf("Price : %d\n", p.price);
    printf("Qoh   : %d\n", p.qty);
}

void main()
{
  struct product p1, p2, big;

     strcpy(p1.name,"iPhone 14 Pro");
     p1.price = 100000;
     p1.qty = 5;
     print(p1);

     p2 = p1;

     p2.price = 90000;
     print(p2);

     if(equals(p1,p2))
        printf("Same");
     else
        printf("Different");

     big = max(p1,p2);
     print(big);
}

