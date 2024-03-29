#include<stdio.h>

#define discount 0.2


int main()
{

//Declarations
	const double TV_PRICE = 110.00;
	const double VCR_PRICE = 80.00;
	const double REMOTE_PRICE = 9.20;
	const double LCD_PRICE = 500.00;
	const double TAPE_PRICE = 48.00;
	const double taxRate = 8.25; 
	 
	int tvQTY;
	int vcrQTY;
	int remoteQTY;
	int lcdQTY;
	int tapeQTY;
	int disct = 0;

	float total_tv;
	float total_vcr;
	float total_remote;
	float total_lcd;
	float total_tape;
	float subTotal;
	float tax;
	float delivery;
	float bill_Amount;
	
	char name[100];
	char cname[100];

//Statements


	printf("\t\tWelcome To Electronics Store Billing System\n");
	printf("\n Please Enter the following details. \n\n");
	
	printf("Cashier's Name: \n");
	scanf("%s",name);
	printf("Customer's Name: \n");
	scanf("%s",cname);
	
	printf("\n\t**Enter 0 for none*");

	printf("\nHow many TVs were sold? \n");
	scanf("%d", &tvQTY);

	printf("How many VCRs were sold? \n");
	scanf("%d", &vcrQTY);

	printf("How many Remote Controllers were sold? \n");
	scanf("%d", &remoteQTY);

	printf("How many LCDs were sold? \n");
	scanf("%d", &lcdQTY);

	printf("How many Tape Recorders were sold? \n");
	scanf("%d", &tapeQTY);
	
	printf("\n Press Any Key To Generate Bill");


printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
int a;
   	for( a=1;a<6;a++)
	{
		Sleep(100);
		printf("...");
	}
      printf("\n\n\t\t\t\t\tBill Generated. \n\n");
      
      system("PAUSE");
      system("CLS");

//Calculation Statements

	total_tv = tvQTY * TV_PRICE;
	total_vcr = vcrQTY * VCR_PRICE;
	total_remote = remoteQTY * REMOTE_PRICE;
	total_lcd = lcdQTY * LCD_PRICE;
	total_tape = tapeQTY * TAPE_PRICE;
	subTotal = total_tv + total_vcr + total_remote + total_lcd + total_tape;
	tax = (subTotal * taxRate)/100;
	disct = subTotal * discount;
	bill_Amount = subTotal + tax;
	bill_Amount = bill_Amount - disct;	


//Printing Bills
    printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      Electronics Store Bill\n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t%02d \t TV                  %.2f       %10.2f \n", tvQTY, TV_PRICE, total_tv);
	printf("\t\t\t%02d  \t VCR                  %.2f       %10.2f  \n", vcrQTY, VCR_PRICE, total_vcr);
	printf("\t\t\t%02d   \t Remote CTRLR          %.2f       %10.2f   \n", remoteQTY, REMOTE_PRICE, total_remote);
	printf("\t\t\t%02d    \t LCD                 %.2f       %10.2f    \n", lcdQTY, LCD_PRICE, total_lcd);
	printf("\t\t\t%02d     \t Tape Recorder        %.2f       %10.2f     \n\n", tapeQTY, TAPE_PRICE, total_tape);
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                          Customer:         %s     \n",cname);
	printf("\t\t\t                          Cashier:          %s     \n",name);
	printf("\t\t\t                          SUBTOTAL:       %10.2f   \n",subTotal);
	printf("\t\t\t                          TAX:            %10.2f   \n",tax);
	printf("\t\t\t                          Discount:        \t %d   \n",disct);
	if(bill_Amount<1500)
	{
		delivery = bill_Amount + 100;
	printf("\t\t\t                          Delivery Charges:      100   \n");
	printf("\t\t\t                          Total$:         %10.2f   \n",delivery);
	}
	else 
	{
		printf("\t\t\t                          Total$;         %10.2f   \n",bill_Amount);
	}
	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");

	system("PAUSE");
	system("CLS");
	
	return 0;
	
}