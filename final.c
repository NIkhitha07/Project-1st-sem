#include<stdio.h>
#include<math.h>
#include<string.h>
void account();
void clothing();
void gadgets();
void footwear();
void accessories();
void sports();
void rating();
int option,amt1,q,amt2,amt3,amt4,amt5,amt;
char a[20];
void main()
{
 int no,pay,o,pin,n,i;
 char p;
 printf("\n......WELCOME TO VJIT ONLINE SHOPPING....\n");
 printf("\n*****EVERYTHING.UNBEATEN PRICE*****\n");
 printf(" \n .....FREE SHIPPING ON EVERYTHING.....\n");
 printf("Enter any integer to terminate");
  scanf("%d",&n);
   if(n>=0) 
     account(); 
     printf("Enter your name\n");
       for(i=0;i<n;i++)
        scanf("%c",&a[i]); 
 printf("\nWhat are u looking for??\n");
 printf(" 1.Clothing\n 2.Gadgets\n 3.Footwear\n 4.Accessories\n 5.Sports\n 6 Rating\n");
 scanf("%d",&option);
while(option>0 && option<=6)
{
 switch(option)
 {
  case 1:printf("Entering into clothing section....\n");
          clothing();
         printf("\n************************************\n");
         break;
 case 2:printf("\nEntering into gadgets section...\n");
          gadgets();
        printf("\n************************************\n");
         break;
 case 3:printf("\nEntering into foot wear section...\n");
          footwear();
        printf("\n************************************\n");
         break;
 case 4:printf("\nEntering into accessories section...\n");
          accessories();
        printf("\n*************************************\n");
         break;
 case 5:printf("\nEntering into sports section....\n");
           sports();  
        printf("\n***********************************\n"); 
         break;
 case 6:printf("\nHow much did u like our servie ???...\n");
          rating();
         break;
 default:printf("Please enter correct option");
                       break;
   }
      option++;
}
    amt=amt1+amt2+amt3+amt4+amt5;
printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
printf("\nYOUR TOTAL AMOUNT IS %d\n",amt); 
printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
printf("\nSelect youy option for payment:\n 1.Cash on delivery\n 2.Online payment\n");
    scanf("%d",&pay);
     if(pay==1)
       {
         printf("You can pay it on delivery\n");
       }
  else if(pay==2)
  {
   printf("Please select your card:\n 1.Debit card\n 2.Credit card\n");
    scanf("%d",&o);
    printf("Enter your card number\n");
      scanf("%d",&no);
    printf("Enter your pin\n");
     scanf("%d",&pin);
    printf("Enter your OTP\n");
     scanf("%c",&p);
      }
      // printf("_______________*****BILL*****_________________\n");
       //printf("YOUR ORDER ID IS VJIT06\n");
     // Printf("Name: %c",a[20]);
      //printf("YOUR TOTAL AMOUNT IS %d\n",amt);
     // printf("YOUR PRODUCT WILL BE DELIVERED IN ONE WEEK\n");
     // printf("CONCTACT SERVICE:9568526230\n");
      //Printf("______________________________________________");
      printf("\n....THANK YOU FOR SHOPPING...\n");
    printf("\n********************************\n"); 
}
void account()
{
 int k,password,no,OTP;
 int email;
 printf(" Select your option...\n1.Sign in\n 2.Sign up\n");
 scanf("%d",&k);
  switch(k)
  {
    case 1: printf("Loading......\n");
        printf("Enter your email id\n");
         scanf("%d",&email);
        printf("Enter your password\n");
         scanf("%d",&password);
        printf("....Successfully logged in....\n");
          break;
     case 2:printf("Creating your new account\n");
        printf("Enter your email id\n");
          scanf("%d",&email);
        printf("Enter your password\n");
          scanf("%d",&password);
        printf("Re enter your password\n");
          scanf("%d",&password);
        printf("Enter your phone number\n");
         scanf("%d",&no);
        printf("Enter OTP\n");
          scanf("%d",&OTP);
        printf(".....Your account successfully created.....\n");
        printf(".....THANK YOU FOR REGISTERATION.....\n");
          break;
     default:printf("Please enter correct option");
                       break;
     }
}
void clothing()
{
 int k,colour,brand,n,range;
    printf(" Choose:\n 1.Womens Shopping\n 2.Mens Shopping\n");
     scanf("%d",&k);
switch(k)
 {
 case 1:
  printf("Select your choice...\n1.Dresses\n 2.Tops\n 3.Sarees\n 4.kurtis\n 5.Festival wear\n");
    scanf("%d",&n);
 printf("Select the colour:\n 1.Blue\n 2.Red\n 3.White\n 4.Black\n ");
   scanf("%d",&colour);
  printf("choose range:\n 1.500\n 2.1000\n 3.3000\n");
    scanf("%d",&range);
  printf("Choose the brand:\n 1.Denim\n 2.Levis\n 3.Wrangles\n 4.Gap\n");
    scanf("%d",&brand);
  printf("Enter the quantity....\n");
    scanf("%d",&q);
        switch(range)
         {
                case 1:amt1=q*500;
                        printf("Your amount is %d\n",amt1);
                     break;
                         printf("Your amount is %d\n",amt1);
                case 2:amt1=q*1000;
                         printf("Your amt is %d\n",amt1);
                      break;
                case 3: amt1=q*3000;
                        printf("Your amount is %d\n",amt1);
                      break;
                default:printf("Please enter correct option");
                       break;
              }
                   break;
            
   case 2:
  printf(" Select your option:\n  1.T-shirts\n 2.Jeans\n 3.Suits\n 4.Trousers\n 5.Ethnic wear\n");
   if(n>0)
  {
   printf("Select your colour:1.Blue\n 2.Black\n 3.Red\n 4.Yellow\n");
      scanf("%d",&colour);
    printf("Choose range:\n 1.500\n 2.1000\n 3.3000\n");
       scanf("%d",&range);
     printf("Choose brand: 1.Seven\n 2.Gap\n 3.Levis\n");
         scanf("%d",&brand);
      printf("Enter your quantity....\n");
        scanf("%d",&q);
            switch(range)
              {
                case 1:amt1=q*500;
                        printf("Your amount is %d\n",amt1);
                     break;
                case 2: amt1=q*1000;
                         printf("Your amount is %d\n",amt1);
                      break;
                case 3: amt1=q*3000;
                        printf("Your amount is %d\n",amt1);
                     break;
                 default:printf("Please enter correct option");
                       break;
             }
         }
     default:printf("Please enter correct option");
                       break;
     }
}
void gadgets()
{
 int k,range,brand,feature;
  printf("1.Shop by brand\n 2.Shop by price\n ");
    scanf("%d",&k);
 switch(k)
  {
case 1:
 printf("1.Apple\n  2.Redmi\n");
 scanf("%d",&brand);
 switch(brand)
 {
 case 1:
  printf("Select your model...\n 1.iphone 6s\n 2.iphone 6\n 3.iphone 7\n");
        scanf("%d",&k);
       if(k==1)
        {
         printf("Apple iphone 6s is of cost 30000\n");
          printf("Enter your quantity\n");
          scanf("%d",&q);
            amt2=q*30000;
          printf("Your amount is %d",amt2);
        }
        break;
        if(k==2)
        {
        printf(" Apple iphone 6 is of cost 25000");
        printf("Enter your quantity\n");
         scanf("%d",&q);
            amt2=q*25000;                   
        printf("Your amount is %d",amt2);
        }
         break;
       if(k==3)
       {
       printf(" Apple iphone 7 is of cost 40000\n");
       printf("Enter your quantity\n");
       scanf("%d",&q);
       printf("You have ordered for %d phones\n",q);
          amt2=q*40000;
       printf("Your amount is %d",amt2);   
       }
       break;
          break;
  case 2:
     printf("select your model......\n 1.Note 5\n 2.Note 5pro\n");
       scanf("%d",&k);
     if(k==1)
      {
     printf(" Redmi note 5 is of cost 13000");
     printf("Enter your quantity\n");
      scanf("%d",&q);
          amt2=q*13000;
     printf("Your amount is %d",amt2);
      }
      break;                     
     if(k==2)
     {
     printf(" Redmi note 5pro is of cost 15000\n");
     printf("Enter your quantity\n");
       scanf("%d",&q);
          amt2=q*15000;
     printf("Your amount is %d",amt2);   
      }
      break;
   default:printf("You have entered wrong option:");
     break;
  }
  case 2:
  printf("1.10000\n 2.20000\n 3.30000\n 4.35000");
     scanf("%d",&range);
   printf("enter your quantity\n");
       scanf("%d",&q);
  switch(range)
   {
   case 1:amt2=q*10000;
    printf("your amount is %d",amt2);
        break;
   case 2:amt2=q*20000;
     printf("your amount is %d",amt2);
       break;
   case 3:amt2=q*30000;
      printf("your amount is %d",amt2);
        break;
   case 4:amt2=q*35000;
      printf("your amount is %d",amt2);
          break;
  default:printf("Please enter correct option");
         break;
   }
     break;
        
  default:printf("Please enter correct option");
         break;
  }
}
void footwear()
{
int k,model,range;
 printf("select 1.Men\n 2.Women\n");
  scanf("%d",&k);
 switch(k)
  {
  case 1:
  printf("Select model:\n 1.Casual shoes\n 2.Sports shoes\n 3.Formal shoes\n");
     scanf("%d",&model);
  printf("Sekect the range-1.500\n 2.1000\n 3.2000\n");
     scanf("%d",&range);
  printf("Enter the quantity-\n");
     scanf("%d",&q);
   switch(range)
     {
      case 1:amt3=q*500;
            printf("Your amount is %d\n",amt3);
           break;
       case 2:amt3=q*1000;
             printf("Your amount is %d\n",amt3);
           break;
       case 3:amt=q*2000;
            printf("Your amount is %d\n",amt3);
          break;
       default:printf("Please enter the correct option.\n");
           break;
       }  
      break;
 case 2:
  printf("Select model:\n 1.casual shoes\n 2.sports shoes\n 3.Heels\n");
     scanf("%d",&model);
  printf("Sekect the range-1.500\n 2.1000\n 3.2000\n");
     scanf("%d",&range);
  printf("Enter the quantity-\n");
     scanf("%d",&q);
   switch(range)
      {
       case 1:amt3=q*500;
              printf("Your amount is %d\n",amt3);
            break;
       case 2:amt3=q*1000;
             printf("Your amount is %d\n",amt3);
               break;
       case 3:amt3=q*2000;
              printf("Your amount is %d\n",amt3);
            break;
       default:printf("Please enter the correct option.\n");
           break;
      }
  }
}
void accessories()
{
 int k,n,range;
  printf("Select your option...\n1.Home accessories\n 2.Men accessories\n  3.Women accessories\n 4.Electronic gadgets\n");
    scanf("%d",&k);
 switch(k)
 {
  case 1:
    printf("1.kitchen containers\n 2.Blankets\n 3.Diwan sets\n 4.Curtains\n 5.Wall designers\n");
      scanf("%d",&n);     
  switch(n)
   {
    case 1:
     printf("kitchen containers.....\n");
     printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
       scanf("%d",&q);
    switch(range)
     {                         
      case 1:amt5=q*300;
          printf("your amount is %d",amt5);
                break;
      case 2:amt5=q*500;
           printf("your amount is %d",amt5);
                  break;
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
                  break;
       default:printf("Please enter correct option");
                 break;
     }
           break;
   case 2:
   printf("blankets.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
     scanf("%d",&range);
   switch(range)
    {                         
    case 1:amt5=q*300;
        printf("your amount is %d",amt5);
          break;
    case 2:amt5=q*500;
        printf("your amount is %d",amt5);
           break;
    case 3:amt5=q*800;
       printf("your amount is %d",amt5);
            break;
     default:printf("Please enter correct option");
            break;
      } 
          break;
  case 3:
   printf("Diwan sets.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
      scanf("%d",&q);
   switch(range)
      {                         
        case 1:amt5=q*300;
             printf("your amount is %d",amt5);
           break;
        case 2:amt5=q*500;
              printf("your amount is %d",amt5);
            break;
        case 3:amt5=q*800;
              printf("your amount is %d",amt5);
             break;
        default:printf("Please enter correct option");
              break;
       } 
     break;
  case 4:
    printf("Curtains.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
        scanf("%d",&q);
    switch(range)
       {                         
      case 1:amt5=q*300;
             printf("your amount is %d",amt5);
         break;
      case 2:amt5=q*500;
             printf("your amount is %d",amt5);
         break; 
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
          break;
      default:printf("Please enter correct option");
          break; 
        }
     break;
  case 5:
    printf("Wall pappers.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
        scanf("%d",&q);
   switch(range)
    {                         
     case 1:amt5=q*300;
            printf("your amount is %d",amt5);
           break;
     case 2:amt5=q*500;
            printf("your amount is %d",amt5);
          break;
     case 3:amt5=q*800;
           printf("your amount is %d",amt5);
             break;
     default:printf("Please enter correct option");
           break; 
       }
    break;
 }
case 2:
    printf("1.Belts\n 2.Wallets \n 3.Watches\n 4.Perfumes\n 5.Bags\n");
      scanf("%d",&n);     
  switch(n)
   {
    case 1:
     printf("Belts....\n");
     printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
       scanf("%d",&q);
    switch(range)
     {                         
      case 1:amt5=q*300;
          printf("your amount is %d",amt5);
                break;
      case 2:amt5=q*500;
           printf("your amount is %d",amt5);
                  break;
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
                  break;
       default:printf("Please enter correct option");
                 break;
     }
           break;
   case 2:
   printf("Wallets.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
     scanf("%d",&range);
   switch(range)
    {                         
    case 1:amt5=q*300;
        printf("your amount is %d",amt5);
          break;
    case 2:amt5=q*500;
        printf("your amount is %d",amt5);
           break;
    case 3:amt5=q*800;
       printf("your amount is %d",amt5);
            break;
     default:printf("Please enter correct option");
            break;
      } 
          break;
  case 3:
   printf("Watches.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
      scanf("%d",&q);
   switch(range)
      {                         
        case 1:amt5=q*300;
             printf("your amount is %d",amt5);
           break;
        case 2:amt5=q*500;
              printf("your amount is %d",amt5);
            break;
        case 3:amt5=q*800;
              printf("your amount is %d",amt5);
             break;
        default:printf("Please enter correct option");
              break;
       } 
     break;
  case 4:
    printf("Perfumes.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
        scanf("%d",&q);
    switch(range)
       {                         
      case 1:amt5=q*300;
             printf("your amount is %d",amt5);
         break;
      case 2:amt5=q*500;
             printf("your amount is %d",amt5);
         break; 
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
          break;
      default:printf("Please enter correct option");
          break; 
        }
     break;
  case 5:
    printf("Bags.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
        scanf("%d",&q);
   switch(range)
    {                         
     case 1:amt5=q*300;
            printf("your amount is %d",amt5);
           break;
     case 2:amt5=q*500;
            printf("your amount is %d",amt5);
          break;
     case 3:amt5=q*800;
           printf("your amount is %d",amt5);
             break;
     default:printf("Please enter correct option");
           break; 
       }
    break;
   }
case 3:
 printf("Select your option.....\n 1.Ear rings\n 2.Chains \n 3.Watches\n 4.Perfumes\n 5.Bags\n");
      scanf("%d",&n);     
  switch(n)
   {
    case 1:
     printf("Ear rings....\n");
     printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
       scanf("%d",&q);
    switch(range)
     {                         
      case 1:amt5=q*300;
          printf("your amount is %d",amt5);
                break;
      case 2:amt5=q*500;
           printf("your amount is %d",amt5);
                  break;
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
                  break;
       default:printf("Please enter correct option");
                 break;
     }
           break;
   case 2:
   printf("Chains.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
     scanf("%d",&range);
   switch(range)
    {                         
    case 1:amt5=q*300;
        printf("your amount is %d",amt5);
          break;
    case 2:amt5=q*500;
        printf("your amount is %d",amt5);
           break;
    case 3:amt5=q*800;
       printf("your amount is %d",amt5);
            break;
     default:printf("Please enter correct option");
            break;
      } 
          break;
  case 3:
   printf("Watches.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
      scanf("%d",&q);
   switch(range)
      {                         
        case 1:amt5=q*300;
             printf("your amount is %d",amt5);
           break;
        case 2:amt5=q*500;
              printf("your amount is %d",amt5);
            break;
        case 3:amt5=q*800;
              printf("your amount is %d",amt5);
             break;
        default:printf("Please enter correct option");
              break;
       } 
     break;
  case 4:
    printf("Perfumes.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
        scanf("%d",&q);
    switch(range)
       {                         
      case 1:amt5=q*300;
             printf("your amount is %d",amt5);
         break;
      case 2:amt5=q*500;
             printf("your amount is %d",amt5);
         break; 
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
          break;
      default:printf("Please enter correct option");
          break; 
        }
     break;
  case 5:
    printf("Bags.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
        scanf("%d",&q);
   switch(range)
    {                         
     case 1:amt5=q*300;
            printf("your amount is %d",amt5);
           break;
     case 2:amt5=q*500;
            printf("your amount is %d",amt5);
          break;
     case 3:amt5=q*800;
           printf("your amount is %d",amt5);
             break;
     default:printf("Please enter correct option");
           break; 
       }
    break;
   }
 case 4:
 printf("Select your option.....\n 1.Ear phones \n 2.phone cases \n 3.Memory cards \n 4.Charges \n 5.Bluetooth devices\n");
      scanf("%d",&n);     
  switch(n)
   {
    case 1:
     printf("Ear phones....\n");
     printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
       scanf("%d",&q);
    switch(range)
     {                         
      case 1:amt5=q*300;
          printf("your amount is %d",amt5);
                break;
      case 2:amt5=q*500;
           printf("your amount is %d",amt5);
                  break;
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
                  break;
       default:printf("Please enter correct option");
                 break;
     }
           break;
   case 2:
   printf("Phone cases.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
     scanf("%d",&range);
   switch(range)
    {                         
    case 1:amt5=q*300;
        printf("your amount is %d",amt5);
          break;
    case 2:amt5=q*500;
        printf("your amount is %d",amt5);
           break;
    case 3:amt5=q*800;
       printf("your amount is %d",amt5);
            break;
     default:printf("Please enter correct option");
            break;
      } 
          break;
  case 3:
   printf("Memory cards.....\n");
   printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
      scanf("%d",&q);
   switch(range)
      {                         
        case 1:amt5=q*300;
             printf("your amount is %d",amt5);
           break;
        case 2:amt5=q*500;
              printf("your amount is %d",amt5);
            break;
        case 3:amt5=q*800;
              printf("your amount is %d",amt5);
             break;
        default:printf("Please enter correct option");
              break;
       } 
     break;
  case 4:
    printf("Charges.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
      scanf("%d",&range);
    printf("enter number of items\n");
        scanf("%d",&q);
    switch(range)
       {                         
      case 1:amt5=q*300;
             printf("your amount is %d",amt5);
         break;
      case 2:amt5=q*500;
             printf("your amount is %d",amt5);
         break; 
      case 3:amt5=q*800;
             printf("your amount is %d",amt5);
          break;
      default:printf("Please enter correct option");
          break; 
        }
     break;
  case 5:
    printf("Bluetooth devices.....\n");
    printf("Select your range....\n 1.300\n 2.500\n 3.800\n");
       scanf("%d",&range);
     printf("enter number of items\n");
        scanf("%d",&q);
   switch(range)
    {                         
     case 1:amt5=q*300;
            printf("your amount is %d",amt5);
           break;
     case 2:amt5=q*500;
            printf("your amount is %d",amt5);
          break;
     case 3:amt5=q*800;
           printf("your amount is %d",amt5);
             break;
     default:printf("Please enter correct option");
           break; 
       }
    break;
   }
}
}
void sports()
{
   int s,type,range;
  printf("select your option.. 1.Shoes\n 2.Kits\n");
   scanf("%d",&s);
  switch(s)
  {
   case 1:
  printf("select your option:\n 1.hiking shoes\n 2.running shoes\n");
    scanf("%d",&type);
  printf("select your range ...\n1.1000\n 2.2000\n");
    scanf("%d",&range);
  printf("enter your quantity \n");
    scanf("%d",&q);
    switch(range)
      {
      case 1:amt5=1000*q;
           printf("Your total amount is  %d\n",amt5);
          break; 
      case 2:amt5=2000*q;
          printf("Your total amount is %d\n",amt5);
         break;
     default:printf("Please enter correct option");
          break;
      }
    break;
 case 2:
   printf("Select your option :1.Cricket bats\n 2.Batminton rackets\n ");
      scanf("%d",&type);
   printf("Select your range....3.1000\n 4.2000\n");
     scanf("%d",&range);
   printf("Enter your quantity\n");
     scanf("%d",&q);
  switch(range)
    {
       case 3:amt5=1000*q;
            printf("Your total amount is %d\n",amt5);
           break;
       case 4:amt5=2000*q;
            printf("Your total amount is %d\n",amt5);
           break;
      default:printf("Please enter correct option");
           break;
     }
  break;
 default:printf("Please enter correct option\n");
       break;
  } 
}     
void rating()
{
 int rate;
    printf("Select your option:\n 1.5 Star\n 2.4 Star\n 3.3 Star\n 4.2 Star\n 1.1 Star\n");
      scanf("%d",&rate);
    switch(rate)
     {
      case 1:printf("Thank you for giving us *****\n");
            break;
      case 2:printf("Thank you for giving us ****\n");
            break;
      case 3:printf("Thank you for giving us ***\n");
            break;
      case 4:printf("Thank you for giving us **\n");
            break;
      case 5:printf("Thank you for giving us *\n");
           break;
      default:printf("Please enter correct option\n");
           break;
   }
}
