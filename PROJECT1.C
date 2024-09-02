#include<stdio.h>
#include<conio.h>
void main()
{
   int subject,price,author,chh,ch2, amount , totalbook;
   clrscr();
   printf("1 view details of book \n");
   printf("2 shop details book");
   printf("Enter the book price:>>\n");
   scanf("%d",&subject);
   switch(subject)
   {
     case 1:
       {
	 printf("SUBJECT \t \t PRICE \t \t AUTHOR\n");
	 printf("Science \t \t $350 \t \t Rabindranath Tagore");
	 printf("\nEnglish \t \t $190 \t \t Arundati Roy");
	 printf("\nMaths\t \t \t $250 \t \t R.K.Narayan");
	 printf("\nHindi\t \t \t $175 \t \t Chetan Bhagat");
	 printf("\nComputer \t \t $185 \t \t Charles babbage");
	 printf("\nEVS \t \t \t $220 \t \t St.Pauls");
	 printf("\nEnter the value of ch1:>>");
	 scanf("%d",&chh);
	 switch(chh)
	 {
	  case 1:
	   {
	    printf("Which book to purchase");
	    printf("\nScience");
	   }
	   case 2:
	   {
	   printf("\nEnglish");
	   break;
	   }
	   case 3:
	   {
	   printf("\nMaths");
	   break;
	   }
	   case 4:
	   {
	   printf("\nHindi");
	   break;
	   }
	   case 5: {
	   printf("\nComputer");
	   break;
	   }
	   case 6:
	   {
	   printf("\nEVS");
	   break;
	   }
	  default:
	  {
	   printf("invalid case");
	  }
	}

	 break;
	 }
     case 2:
       {
	 printf("\n1.Science  \n2.English \n3.Maths \n4.Hindi \n5.Computer \n6.EVS");
	 printf("\nEnter the value of ch2:>>");
	 scanf("%d",&ch2);
	 switch(ch2)
	   {
	       case 1:
	       {
		 printf("\n The price of 1 Science book = $350 \n Enter the no. of books you want =");
		 amount = 350;
		 scanf("%d",&totalbook);
		 amount = 350 *totalbook;
		 printf("Your total amount is $%d ",amount);
		 break;
	       }
	       case 2:
	       {
		 printf("\n The price of 1 English book = $190 \n Enter the no. of books you want =");
		 amount = 190;
		 scanf("%d",&totalbook);
		 amount = 190 *totalbook;
		 printf("Your total amount is $%d ",amount);
		 break;
	       }
	       case 3:
	       {
		 printf("\n The price of 1 Maths book =  $250 \n Enter the no. of books you want =");
		 amount = 250;
		 scanf("%d",&totalbook);
		 amount = 250 *totalbook;
		 printf("your total amount is $%d ",amount);
		 break;
	       }
	       case 4:
	       {
		 printf("\n The price of 1 Hindi book = $175 \n Enter the no. of books you want = ");
		 amount = 175;
		 scanf("%d",&totalbook);
		 amount = 175 *totalbook;
		 printf("your total amount is $%d ",amount);
		 break;
	       }
	       case 5:
	       {
		 printf("\n The price of 1 Computer book = $185 \n Enter the no. of books you want =");
		 amount = 185;
		 scanf("%d",&totalbook);
		 amount = 185 *totalbook;
		 printf("your total amount is $%d ",amount);
		 break;
	       }
	       case 6:
	       {
		 printf("\n The price of 1 EVS book = $220 \n Enter the no. of books you want =");
		 amount = 220;
		 scanf("%d",&totalbook);
		 amount = 220 *totalbook;
		 printf("your total amount is $%d ",amount);
		 break;
	       }
	     }
	}
	}
   getch();
}

