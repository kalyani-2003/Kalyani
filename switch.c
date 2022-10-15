#include<stdio.h>
int main()
{
	char name[10];
	int bal, damt, wamt, accno;
	int c=0, choice, tagain;
	
	do{
		printf("\n press-1 open account");
		printf("\n press-2 show all info");
		printf("\n press-3 deposit");
		printf("\n press-4 withdraw");
		printf("\n press-5 show balance");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the name of candidate:");
			        scanf("%s",&name);
			        
			        printf("Enter amount to open the account:");
			        scanf("%d",&bal);
			        
			        printf("Enter account number:");
			        scanf("%d",&accno);
			        break;
			        
			case 2: printf("\n Candidate name is %s",name);
                    printf("\n balance amount is %d",bal);
                    printf("\n account number is %d",accno);
                    break;
			        
			case 3: printf("\n Enter amount for deposit:");
			        scanf("%d",&damt);
			        
			        bal=bal+damt;
			        
			        printf("\n Balance amount is %d", bal);
			        break;
			        
			case 4: printf("\n Enter ammount to withdraw:");
			        scanf("%d",&wamt);
			        if(wamt>bal)
			        { 
			          printf("\n You have insufficient balance");
			          printf("\n Your balance amount is &d",bal);
			          printf("\n You are trying to remove %d",wamt);
					}
					else
					{
						bal=bal-wamt;
						c++;
						if (c>3)
						{
							bal=bal-500;
							printf("\n you have crossed the limit of transactions and charged with Rs. 500");
							
						}
						printf("\n Balance amount is %d",bal);
						
					}
					break;
			case 5: printf("\n balance after transaction is %d",bal);
		    default: printf("\n You have entered invalid choice");
			    
		}
		  printf("\n press-7 to continue press-8 to exit");
		  scanf("%d",&tagain);
		  
		
	}while(tagain==7);
	 printf("\n *********THANK YOU FOR BANKING**********");
	 
	 getch();
}

