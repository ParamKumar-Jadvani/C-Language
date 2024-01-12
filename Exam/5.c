#include <stdio.h>
#include <string.h>
#define P printf
#define S scanf
int i, j;

int getInt();
float getFloat();
void user();

struct Prouduct_Data
{
   int id, price, qty;
   char name[20];
   float discount, total_Price;
};

int main()
{
   user();
   return 0;
}

void user()
{
   FILE *f;

   f = fopen("bill.txt", "a");

   P("Enter Total No. of Proucts : ");
   int n = getInt();

   struct Prouduct_Data s[n];
   float bill = 0;

   P("\n\t--- Enter Prouct Deatils ---\n");
   for (i = 0; i < n; i++)
   {
      P("Product Id : ");
      s[i].id = getInt();

      fflush(stdin);
      P("Product Name : ");
      gets(s[i].name);

      P("Product Quantity : ");
      s[i].qty = getInt();

      P("Product Price : ");
      s[i].price = getInt();

      P("Product Discount : ");
      s[i].discount = getFloat();

      s[i].discount /= 100;

      s[i].total_Price = ((float)s[i].qty) * ((float)s[i].price);

      s[i].total_Price -= (s[i].total_Price * s[i].discount);

      bill += s[i].total_Price;
      
      P("\n\n");
   }

   P("\n\t--- Prouct Deatils ---\n");

   P("Id\tName\tQuantity\tPrice\tDiscount\tTotalPrice\n");
   P("-------\t-------\t--------------\t-------\t--------------\t--------------\n\n");
   for (i = 0; i < n; i++)
   {
      P("%d\t%s\t%d\t\t%d\t%.2f %%\t\t%.2f\n\n", s[i].id, s[i].name, s[i].qty, s[i].price, s[i].discount*100, s[i].total_Price);
   }

   printf("Your Bill is : %.2f \n", bill);

   // File Handling

   fprintf(f, "\n\t--- Prouct Deatils ---\n");
   fprintf(f,"Id\tName\tQuantity\tPrice\tDiscount\tTotalPrice\n");
   fprintf(f,"-------\t-------\t--------------\t-------\t--------------\t--------------\n\n");
   for (i = 0; i < n; i++)
   {
      fprintf(f,"%d\t%s\t%d\t\t%d\t%.2f %%\t\t%.2f\n\n", s[i].id, s[i].name, s[i].qty, s[i].price, s[i].discount*100, s[i].total_Price);
   }

   fprintf(f,"Your Bill is : %.2f \n", bill);
}

int getInt()
{
   int n;
   scanf("%d", &n);
   return n;
}

float getFloat()
{
   float f;
   scanf("%f", &f);
   return f;
}
