#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int original();
int specialty();
int premium();
int savory();
int bitesCat();
int stixCat();
int comboCat();
int comboBev();
int inputVal(int);
int quantity();
void bevSize();

int quaBites[3] = {0,0,0};
int quaOri[4] = {0,0,0,0};
int quaSpe[8] = {0,0,0,0,0,0,0,0};
int quaPre[5] = {0,0,0,0,0};
int quaSav[3] = {0,0,0};
int quaBev[5] = {0,0,0,0,0};
int quaCombo[8] = {0,0,0,0,0,0,0,0};
int quaPret[31] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main()
{	
	int choi=1, maxchoi=2;
	float total=0;
	while(choi==1)
	{
	int q;
	int bev[5] = {0,0,0,0,0}; 
	float priBev[5] = {0,0,0,0,0}; 

	int ori[4] = {0,0,0,0};
	float oriPrice[4] = {0,0,0,0};

	int spe[8] = {0,0,0,0,0,0,0,0};
	float spePrice[8] = {0,0,0,0,0,0,0,0};

	int pre[5] = {0,0,0,0,0};
	float prePrice[5] = {0,0,0,0,0};
	
	int sav[3] = {0,0,0};
	float savPrice[3] = {0,0,0};
	
	int bites[3] = {0,0,0};
	float priceBites[3] = {0,0,0};

	int combo[6] = {0,0,0,0,0,0};
	float priceCombo[6] = {0,0,0,0,0,0} ;
	
	int comboChoi, comboDrink, oricombo=0,specombo=0,precombo=0,stixcombo=0, jbcCombo=0, pretzscombo=0;
	int oripretz[30];
	int oridrink[30];
	int spepretz[30];
	int spedrink[30];
	int prepretz[30];
	int predrink[30];
	int stixpretz[30];
	int stixdrink[30];
	int jbcdrink[30];
	int pretzsdrink[30];
	
	int o=0, s=0, p=o,x=0,j=0,b=0;
	while(choi==1)
	{
		system("cls");
		printf("Hi, welcome to Auntie Anne's! \nWould you like to order Pretzel or Beverages? (Pretzel-1 Beverages-2): ");
		choi = inputVal(maxchoi);
		
		if(choi==1)
		{
			system("cls");
			printf(" ____________________________________________________________________  \n");
			printf("|                        PRETZEL CATEGORIES                          | \n");
			printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------| \n");
			printf("|1-ORIGINAL _________________________________________________________| \n");
			printf("|2-SPECIALTY_________________________________________________________| \n");
			printf("|3-PREMIUM___________________________________________________________| \n"); 
			printf("|4-SAVORY____________________________________________________________| \n");
			printf("|5-BITES ____________________________________________________________| \n");
			printf("|6-COMBO_____________________________________________________________| \n");
			printf("|____________________________________________________________________| \n");
			
			int choi,maxchoi=6;
			choi=inputVal(maxchoi);
		
			system("cls");		
			switch(choi)
			{
				int choice;
				case 1:
					choice = original();
					
					switch(choice)
					{
					case 1:
						q = quantity();
						ori[0]+=q;
						quaOri[0]+=q;
						float price = 3.90*q;
						total+= price;
						oriPrice[0]+= price;
						break;
					case 2:
						q = quantity();
						ori[1]+=q;
						quaOri[1]+=q;
						price = 3.90*q;
						total+= price;
						oriPrice[1]+= price;
						break;
					case 3:
						q = quantity();
						ori[2]+=q;
						quaOri[2]+=q;
						price = 3.90*q;
						total+= price;
						oriPrice[2]+= price;
						break;
					case 4:
						q = quantity();
						ori[3]+=q;
						quaOri[3]+=q;
						price = 3.90*q;
						total+= price;
						oriPrice[3]+= price;
						break;
					}
					break;
									
				case 2:
					choice = specialty();
					
					switch(choice)
					{
					case 1:
						q = quantity();
						spe[0]+=q;
						quaSpe[0]+=q;
						float price = 4.90*q;
						total+= price;
						spePrice[0]+= price;
						break;
					case 2:
						q = quantity();
						spe[1]+=q;
						quaSpe[1]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[1]+= price;
						break;
					case 3:
						q = quantity();
						spe[2]+=q;
						quaSpe[2]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[2]+= price;
						break;
					case 4:
						q = quantity();
						spe[3]+=q;
						quaSpe[3]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[3]+= price;
						break;
					case 5:
						q = quantity();
						spe[4]+=q;
						quaSpe[4]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[4]+= price;
						break;
					case 6:
						q = quantity();
						spe[5]+=q;
						quaSpe[5]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[5]+= price;
						break;
					case 7:
						q = quantity();
						spe[6]+=q;
						quaSpe[6]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[6]+= price;
						break;
					case 8:
						q = quantity();
						spe[1]+=q;
						quaSpe[1]+=q;
						price = 4.90*q;
						total+= price;
						spePrice[1]+= price;
						break;
					}
					break;
				case 3:
					choice = premium();
					
					switch(choice)
					{
						case 1:
							q = quantity();
							pre[0]+=q;
							quaPre[0]+=q;
							float price = 6.50*q;
							total+= price;
							prePrice[0]+= price;
							break;
						case 2:
							q = quantity();
							pre[1]+=q;
							quaPre[1]+=q;
							price = 6.50*q;
							total+= price;
							prePrice[1]+= price;
							break;
						case 3:
							q = quantity();
							pre[2]+=q;
							quaPre[2]+=q;
							price = 6.50*q;
							total+= price;
							prePrice[2]+= price;
							break;
						case 4:
							q = quantity();
							pre[3]+=q;
							quaPre[3]+=q;
							price = 6.50*q;
							total+= price;
							prePrice[3]+= price;
							break;
						case 5:
							q = quantity();
							pre[4]+=q;
							quaPre[4]+=q;
							price = 6.50*q;
							total+= price;
							prePrice[4]+= price;
							break;
					}
					break;
				case 4:
					choice = savory();
					
					switch(choice)
					{
						case 1:
							q = quantity();
							sav[0]+=q;
							quaSav[0]+=q;
							float price = 10.50*q;
							total+= price;
							savPrice[0]+= price;
							break;
						case 2:
							q = quantity();
							sav[1]+=q;
							quaSav[1]+=q;
							price = 10.50*q;
							total+= price;
							savPrice[1]+= price;
							break;
						case 3:
							q = quantity();
							sav[2]+=q;
							quaSav[2]+=q;
							price = 10.50*q;
							total+= price;
							savPrice[2]+= price;
							break;
					}
					
					break;
				case 5:
					choice = bitesCat();
					
					switch(choice)
					{
						case 1:
							q = quantity();
							bites[0] += q;
							quaBites[0] += q;
							float price = 4.80*q;
							total+= price;
							priceBites[0] = price;
							break;
						case 2:
							q = quantity();
							bites[1] += q;
							quaBites[1] += q;
							price = 5.80*q;
							total+= price;
							priceBites[1] = price;
							break;
						case 3:
							q = quantity();
							bites[2] += q;
							quaBites[2] += q;
							price = 6.80*q;
							total+= price;
							priceBites[2] = price;
							break;
					}
					
					break;
				case 6: 
					choice = comboCat();
					
					switch(choice)
					{
						case 1:
							oripretz[o] = original();
							oridrink[o] = comboBev();
							oricombo++;
							total+= 7.50;
							quaCombo[0]++;
							o++;
							break;
						case 2:
							spepretz[s] = specialty();
							spedrink[s] = comboBev();
							specombo++;
							total+= 8.50;
							quaCombo[1]++;
							s++;
							break;
						case 3:
							prepretz[p] = premium();
							predrink[p] = comboBev();
							precombo++;
							total+= 10.10;
							quaCombo[2]++;
							p++;
							break;
						case 4:
							stixpretz[x] = stixCat();
							stixdrink[x] = comboBev();
							stixcombo++;
							if (stixpretz[x]==1)
							total+= 8.50;
							if (stixpretz[x]==2)
							total+= 9.50;
							if (stixpretz[x]==3)
							total+= 10.50;
							quaCombo[3]++;
							x++;
							break;
						case 5:
							jbcdrink[j] = comboBev();
							jbcCombo++;
							quaCombo[4]++;
							total+= 14.20;
							quaSav[0]++;
							j++;
							break;
						case 6:
							//pretzel sausage bites
							pretzsdrink[b] = comboBev();
							pretzscombo++;
							quaCombo[5]++;
							total+= 13.50;
							quaSav[2]++;
							b++;
							break;
							
					}
					
					
					break;
			}
		}
		
		if(choi==2)
		{
			system("cls");
			printf(" ____________________________________________________________________\n");
			printf("|                             BEVERAGES                              | \n");
			printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
			printf("|1-LEMONADE __________________________________________(RM4.80-RM5.80)| \n");
			printf("|2-PASSION FRUIT______________________________________(RM4.80-RM5.80)| \n");
			printf("|3-MINERAL WATER_____________________________________________(RM2.50)| \n"); 
			printf("|____________________________________________________________________|\n");
			int choi,maxchoi=3;
			choi = inputVal(maxchoi);
			
			switch(choi)
			{
				case 1:
					bevSize();
					int choice=0,status,temp;
			
					while(choice>2 || choice<1)
					{
						status = scanf("%d", &choice);
						while(status!=1)
						{
						while((temp=getchar()) != EOF && temp != '\n');
						printf("Invalid input. please enter a numberic value between 1 - 2: ");
						status = scanf("%d", &choice);
						}
						
						if(choice>2 || choice<1)
						{
							if(choice<1)
								printf("invalid value. Value entered is less than 1, please enter 1 or 2: ");
							else if(choice>2)
								printf("invalid value. Value entered is more than 2, please enter 1 or 2: ");
						}
					}
					if(choice==1)
					{
						int q = quantity();
						bev[0]+=q;
						quaBev[0]+=q;
						float price = 4.80*q;
						total+= price;
						priBev[0]+= price;
					}
					else if(choice==2)
					{
						int q = quantity();
						bev[1]+=q;
						quaBev[1]+=q;
						float price = 5.80*q;
						total+= price;
						priBev[1]+= price;
					}
					
					break;
				case 2:
					bevSize();
					choice=0;
					while(choice>2 || choice<1)
					{
						status = scanf("%d", &choice);
						
						while(status!=1)
						{
						while((temp=getchar()) != EOF && temp != '\n');
						printf("Invalid input. please enter a numberic value between 1 - 2: ");
						status = scanf("%d", &choice);
						}
						
						if(choice>2 || choice<1)
						{
							if(choice<1)
								printf("invalid value. Value entered is less than 1, please enter 1 or 2: ");
							else if(choice>2)
								printf("invalid value. Value entered is more than 2, please enter 1 or 2: ");
						}
					}
					
					if(choice==1)
					{
						int q = quantity();
						bev[2]+=q;
						quaBev[2]+=q;
						float price = 4.80*q;
						total+= price;
						priBev[2]+= price;
					}
					if(choice==2)
					{
						int q = quantity();
						bev[3]+=q;
						quaBev[3]+=q;
						float price = 5.80*q;
						total+= price;
						priBev[3]+= price;
					} 
					break;	
				case 3:
					q = quantity();
					bev[4]+=q;
					quaBev[4]+=q;
					float price = 2.5*q;
					total+= price;
					priBev[4]+= price;
					break;
			}
		}
		
		printf("Do you want to order more? (1-yes, 2-no): ");
		maxchoi=2;
		choi = inputVal(maxchoi);
		
	}
	
	float payment, change;
	system("cls");
	payment = 0;
	while(payment<total)
	{
		int status,temp;
	printf("Your total is RM%.2f\n",total);
	printf("Enter Cash Here: ");
	status = scanf("%f", &payment);
	if(payment < total)
	system("cls");	
	
		if(payment>0)
			printf("Sorry, Insufficient value. Please enter at least RM%.2f or higher.\n",total);
		else if(payment<0)
			printf("Sorry, Invalid value. Please enter at least RM%.2f or higher.\n",total);
		while(status!=1)
		{
			while((temp=getchar()) != EOF && temp != '\n');
			printf("Invalid input. please enter a numberic value.\n");
			status=1;
		}
		

		change = payment - total;
	}
	
	
		time_t t;time(&t);
	printf("\n________________________________________________________________________________");
	printf("\n                           Auntie Anne's                             ");
	printf("\n                 Lot. P1.10.00 Lvl 1, Pavilion K.L.                  ");
	printf("\n                    J1. Bukit Bintang, 55100 K.L.                    ");
	printf("\n                   Chrisna Jenio Sdn Bhd (383038-H)                  ");
	printf("\n                      SST ID :W10-1808-32000310                      ");
	printf("\n                              Invoice                                ");
	printf("\n\n------------------------------------------------------------------------------");
	srand(100);
	printf("\n Bill No. %d",rand(),rand(),rand());
	printf("\n %s" ,ctime(&t));
	printf("\n   ITEM NAME             QUANTITY        UNIT PRICE(RM)     TOTAL(RM)        ");
	printf("\n\n------------------------------------------------------------------------------\n");
	if(ori[0]!=0)
		printf("\nORIGINAL PLAIN                 %d             3.90           %.2f", ori[0],oriPrice[0]);
	if(ori[1]!=0)
		printf("\nORIGINAL SALT                  %d             3.90           %.2f", ori[1],oriPrice[1]);	
	if(ori[2]!=0)
		printf("\nORIGINAL BUTTER                %d             3.90           %.2f", ori[2],oriPrice[2]);
	if(ori[3]!=0)
		printf("\nORIGINAL SALT&BUTTER           %d             3.90           %.2f", ori[3],oriPrice[3]);
		
		
	if(spe[0]!=0)
		printf("\nSPECIALTY GREEN TEA            %d             4.90           %.2f", spe[0], spePrice[0]);
	if(spe[1]!=0)
		printf("\nSPECIALTY CINNAMON SUGAR       %d             4.90           %.2f", spe[1], spePrice[1]);
	if(spe[2]!=0)
		printf("\nSPECIALTY SOUR CREAM & ONION   %d             4.90           %.2f", spe[2], spePrice[2]);
	if(spe[3]!=0)
		printf("\nSPECIALTY GARLIC               %d             4.90           %.2f", spe[3], spePrice[3]);	
	if(spe[4]!=0)
		printf("\nSPECIALTY CHOCOLATE MINT       %d             4.90           %.2f", spe[4], spePrice[4]);
	if(spe[5]!=0)
		printf("\nSPECIALTY SEAWEED              %d             4.90           %.2f", spe[5], spePrice[5]);	
	if(spe[6]!=0)
		printf("\nSPECIALTY PARMESAN CHEESE      %d             4.90           %.2f", spe[6], spePrice[6]);
	if(spe[7]!=0)
		printf("\nSPECIALTY SESAME SEED          %d             4.90           %.2f", spe[7], spePrice[7]);
		
		
	if(pre[0]!=0)
		printf("\nPREMIUM CARAMEL ALMOND         %d             6.50           %.2f", pre[0],prePrice[0]);	
	if(pre[1]!=0)
		printf("\nPREMIUM JALAPENO CHEESE        %d             6.50           %.2f", pre[1],prePrice[1]);
	if(pre[2]!=0)
		printf("\nPREMIUM CHEEZY TURKEY          %d             6.50           %.2f", pre[2],prePrice[2]);	
	if(pre[3]!=0)
		printf("\nPREMIUM CINNAMON RAISIN        %d             6.50           %.2f", pre[3],prePrice[3]);
	if(pre[4]!=0)
		printf("\nPREMIUM CHOCO ECLAIRS          %d             6.50           %.2f", pre[4],prePrice[4]);	
		
	if(sav[0]!=0)
		printf("\nSAVORY JUMBO CHEESE SAUSAGE    %d            10.50           %.2f", sav[0], savPrice[0]);
	if(sav[1]!=0)
		printf("\nSAVORY SAUSAGE BITES           %d            9.50            %.2f", sav[1], savPrice[1]);
	if(sav[2]!=0)
		printf("\nSAVORY CHEESE BITES            %d            8.50            %.2f", sav[2], savPrice[2]);				
		
	if(bites[0]!=0)
		printf("\nBITES ORIGINAL                 %d            4.80            %.2f", bites[0],priceBites[0]);	
	if(bites[1]!=0)
		printf("\nBITES CINNAMON SUGAR           %d            5.80            %.2f", bites[1],priceBites[1]);
	if(bites[2]!=0)
		printf("\nBITES CHOCO ECLAIRS            %d            6.80            %.2f", bites[2],priceBites[2]);	

		while(oricombo!=0)
		{
			o--;
		printf("\nORIGINAL COMBO                 1             7.50            7.50" );
		if(oripretz[o]==1)
		{
			printf("\nPLAIN");	
			quaOri[0]++;
		}
		if(oripretz[o]==2)
		{
			printf("\nSALT");
			quaOri[1]++;
		}
		if(oripretz[o]==3)
		{
			printf("\nBUTTER");	
			quaOri[2]++;
		}
		if(oripretz[o]==4)
		{
			printf("\nSALT&BUTTER");
			quaOri[3]++;
		}
		if(oridrink[o]==1)
		{
			printf(" + LEMONADE");
			quaBev[1]++;
		}
			
		if(oridrink[o]==2)
		{
			printf(" + PASSION FRUIT");
			quaBev[3]++;
		}
		oricombo--;
		}
		
		while(specombo!=0)
		{
			s--;
		printf("\nSPECIALTY COMBO                 1                8.50            8.50" );
		if(spepretz[s]==1)
		{
			printf("\nGREEN TEA");	
			quaSpe[0]++;
		}
		if(spepretz[s]==2)
		{
			printf("\nCINNAMON SUGAR");
			quaSpe[1]++;
		}
		if(spepretz[s]==3)
		{
			printf("\nSOUR CREAM&ONION");
			quaSpe[2]++;
		}
		if(spepretz[s]==4)
		{
			printf("\nGARLIC");	
			quaSpe[3]++;
		}
		if(spepretz[s]==5)
		{
			printf("\nCHOCOLATE MINT");	
			quaSpe[4]++;
		}
		if(spepretz[s]==6)
		{
			printf("\nSEAWEED");
			quaSpe[5]++;
		}
		if(spepretz[s]==7)
		{
			printf("\nPARMESAN CHEESE");
			quaSpe[6]++;
		}
		if(spepretz[s]==8)
		{
			printf("\nSESAME SEEDS");
			quaSpe[7]++;
		}
		if(spedrink[s]==1)
		{
			printf(" + LEMONADE");
			quaBev[1]++;
		}
		if(spedrink[s]==2)
		{
			printf(" + PASSION FRUIT");
			quaBev[3]++;
		}
		specombo--;
		}
	
		while(precombo!=0) 
		{
			p--;
			printf("\nPREMIUM COMBO                 1                10.10            10.10" );
			if(prepretz[p]==1)
			{
				printf("\nCARAMEL ALMOND");
				quaPre[0]++;	
			}
			if(prepretz[p]==2)
			{			
				printf("\nJALAPENO CHEESE");
				quaPre[1]++;
			}
			if(prepretz[p]==3)
			{
				printf("\nCHEEZY TURKEY");	
				quaPre[2]++;
			}
			if(prepretz[p]==4)
			{
				printf("\nCINNAMON RAISIN");
				quaPre[3]++;
			}
			if(prepretz[p]==5)
			{
				printf("\nCHOCO ECLAIRS");
				quaPre[4]++;
			}
			if(predrink[p]==1)
			{
				printf(" + LEMONADE");
				quaBev[1]++;
			}
			if(predrink[p]==2)
			{			
				printf(" + PASSION FRUIT");
				quaBev[3]++;
			}
			precombo--;	
		}	
		
		while(stixcombo!=0)
		{
			x--;
			if(stixpretz[x]==1)
				printf("\nPRETZEL STIX COMBO                 1             8.50            8.50\nORIGINAL" );
			if(stixpretz[x]==2)
				printf("\nPRETZEL STIX COMBO                 1             9.50            9.50\nCINNAMON" );
			if(stixpretz[x]==3)
				printf("\nPRETZEL STIX COMBO                 1            10.50           10.50\nECLAIRS" );		
			if(stixdrink[x]==1)
			{
				printf(" + LEMONADE");
				quaBev[1]++;
			}
			if(stixdrink[x]==2)
			{
				printf(" + PASSION FRUIT");
				quaBev[3]++;
			}stixcombo--;
		}
		
		while(jbcCombo!=0)
		{
			j--;
			printf("\nJUMBO CHEESE SAUSAGE COMBO          1             14.20            14.20\n" );
			if(jbcdrink[j]==1)
			{
				printf(" + LEMONADE");
				quaBev[1]++;
			}
			if(jbcdrink[j]==2)
			{
				printf(" + PASSION FRUIT");
				quaBev[3]++;
			}jbcCombo--;
		}
		
		while(pretzscombo!=0)
		{
			b--;
				printf("\nPRETZEL SAUSAGE BITES COMBO         1             13.50            13.50\n" );
			if(pretzsdrink[j]==1)
			{
				printf(" + LEMONADE");
				quaBev[1]++;
			}
			if(pretzsdrink[j]==2)
			{
				printf(" + PASSION FRUIT");
				quaBev[3]++;
			}pretzscombo--;
		}
		
	if(bev[0]!=0)
		printf("\nREGULAR LEMONADE               %d             4.80           %.2f  ", bev[0],priBev[0]);
	if(bev[1]!=0)
		printf("\nMEDIUM LEMONADE                %d             5.80           %.2f", bev[1],priBev[1]);
	if(bev[2]!=0)
		printf("\nREGULAR PASSION FRUIT          %d             4.80           %.2f", bev[2],priBev[2]);
	if(bev[3]!=0)
		printf("\nMEDIUM PASSION FRUIT           %d             5.80           %.2f", bev[3],priBev[3]);
	if(bev[4]!=0)
		printf("\nMINERAL WATER                  %d             2.50           %.2f", bev[4],priBev[4]);
	printf("\n\n                                         -------------------------------------\n");
	printf("\n                                                         SUB-TOTAL RM%.2f\n",total);                                                                                       
	printf("\n                                          -------------------------------------\n"); 
	printf("\n                                                    TAXABLE AMOUNT RM%.2f\n",total-(total*0.06)); 
	printf("\n                                  BILL INCLUSIVE OF 6%% SERVICE TAX RM%.2f\n",total*0.06);
	printf("\n                                          -------------------------------------\n"); 
	printf("\n                                               TOTAL AFTER ROUNDING RM%.2f\n",total); 
	printf("                                          -------------------------------------\n");  	   
	printf("                                          -------------------------------------\n"); 	    
	printf("\n                                                            CASH RM%.2f\n",payment); 	
	printf("\n                                                          CHANGE RM%.2f\n",change);              
	
	 printf("\n_______________________________________________________________________________");
	
	printf("\n\nAnymore customer? (1-yes, 2-no)\n");          
	maxchoi=2;
	choi = inputVal(maxchoi);
	total = 0;
	}
	
printf(" ___________________________________________________________________________________________________\n");
printf("| Category 1 | Category 2    | Item/Set                  | Price (RM)  |    Quantity Purchased      |\n");
printf("|____________|_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Jumbo Cheese Sausage     |    10.50    |             %d             |\n", quaSav[0]);
printf("| Pretzel    | Savory        |___________________________|_____________|____________________________|\n");
printf("|            |               |  Sausage Bites            |     9.50    |             %d             |\n", quaSav[1]);  
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Cheese Nuggets           |     8.50    |             %d             |\n", quaSav[2]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Plain                    |     3.90    |             %d             |\n", quaOri[0]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            | Original      |  Salt                     |     3.90    |             %d             |\n", quaOri[1]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Butter                   |     3.90    |             %d             |\n", quaOri[2]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Salt & Butter            |     3.90    |             %d             |\n", quaOri[3]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Green Tea                |     4.90    |             %d              |\n", quaSpe[0]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            | Specialty     |  Cinnamon Sugar           |     4.90    |             %d              |\n", quaSpe[1]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Sour Cream&Onion         |     4.90    |             %d              |\n", quaSpe[2]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Garlic                   |     4.90    |             %d              |\n", quaSpe[3]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Chocolate Mint           |     4.90    |             %d              |\n", quaSpe[4]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Seaweed                  |     4.90    |             %d              |\n", quaSpe[5]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Parmesan Cheese          |     4.90    |             %d              |\n", quaSpe[6]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Sesame Seeds             |     4.90    |             %d              |\n", quaSpe[7]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Caramel Almond           |     6.50    |             %d              |\n", quaPre[0]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            | Premium       |  Jalapeno Cheese          |     6.50    |             %d              |\n", quaPre[1]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Cheezy Turkey            |     6.50    |             %d              |\n", quaPre[2]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Cinnamon Raisin          |     6.50    |             %d              |\n", quaPre[3]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Choco Eclairs            |     6.50    |             %d              |\n", quaPre[4]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Original                 |     4.80    |             %d              |\n", quaBites[0]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            | Bites         |  Cinnamon Sugar           |     5.80    |             %d              |\n", quaBites[1]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Choco Eclairs            |     6.80    |             %d              |\n", quaBites[2]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Original Combo           |     7.50    |             %d              |\n", quaCombo[0]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            | Combo         |  Specialty Combo          |     8.50    |             %d              |\n", quaCombo[1]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Premium Combo            |    10.10    |             %d              |\n", quaCombo[2]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Original Stix            |     8.50    |             %d              |\n", quaCombo[3]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Cinnamon Stix            |     9.50    |             %d              |\n", quaCombo[4]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Eclairs Stix             |    10.50    |             %d              |\n", quaCombo[5]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Jumbo Cheese Sausage     |    14.20    |             %d              |\n", quaCombo[6]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Pretzel Sausage Bites    |    13.50    |             %d             |\n", quaCombo[7]);
printf("|____________|_______________|___________________________|_____________|____________________________|\n");
printf("| Beverages  | Regular       |  Lemonade                 |     4.80    |             %d             |\n", quaBev[0]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Passion Fruit            |     4.80    |             %d             |\n", quaBev[2]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            | Medium        |  Lemonade                 |     5.80    |             %d             |\n", quaBev[1]);
printf("|            |               |___________________________|_____________|____________________________|\n");
printf("|            |               |  Passion Fruit            |     5.80    |             %d             |\n", quaBev[3]);
printf("|            |_______________|___________________________|_____________|____________________________|\n");
printf("|            |               |  Mineral Water            |     2.50    |             %d             |\n", quaBev[4]);
printf("|____________|_______________|___________________________|_____________|____________________________|\n");

printf("RANKING BY CATEGORY\n");

printf("\nCATEGORY RANKING\n");
printf("\nPRETZEL\n");
int arrPret[6];
int num = 6, temp,tempname;
int pretName[6] = {0,1,2,3,4,5};
arrPret[0] = quaOri[0 ],quaOri[1],quaOri[2],quaOri[3];
arrPret[1] = quaSpe[0],quaSpe[1],quaSpe[2],quaSpe[3],quaSpe[4],quaSpe[5],quaSpe[6],quaSpe[7];
arrPret[2] = quaPre[0],quaPre[1],quaPre[2],quaPre[3],quaPre[4];
arrPret[3] = quaBites[0], quaBites[1], quaBites[2];
arrPret[4] = quaCombo[0] , quaCombo[1] , quaCombo[2] , quaCombo[3] , quaCombo[4] , quaCombo[5] , quaCombo[6];
arrPret[5] = quaSav[0],quaSav[1],quaSav[2];

    for(int x = 0; x < num - 1; x++)
	{       
        for(int y = 0; y < num - x - 1; y++)
		{          
            if(arrPret[y] > arrPret[y + 1]){               

                temp = arrPret[y];
				tempname = pretName[y];
                arrPret[y] = arrPret[y + 1];
                pretName[y] = pretName[y + 1];

                arrPret[y + 1] = temp;
                pretName[y + 1] = tempname;
            }
        }
    }

	printf("_____________________________________\n");
    for(int x = 5; x >= 0 ; x--){
    	
	 	if(pretName[x]==0)
	 		printf("ORIGINAL        |");
	 	if(pretName[x]==1)
	 		printf("SPECIALTY       |");
	 	if(pretName[x]==2)
	 		printf("PREMIUM         |");
		if(pretName[x]==3)
	 		printf("BITES           |");
		if(pretName[x]==4)
	 		printf("COMBO           |");
		if(pretName[x]==5)
	 		printf("SAVORY          |");
			 	 	 	 	
	 	
	 		
        printf("%d                  |\n ", arrPret[x]);
        printf("_____________________________________|\n");     
    }
    
 int arrPretzel[31];
    arrPretzel[0] = quaSav[0];
    arrPretzel[1] = quaSav[1];
    arrPretzel[2] = quaSav[2];
    arrPretzel[3] = quaOri[0];
    arrPretzel[4] = quaOri[1];
    arrPretzel[5] = quaOri[2];
    arrPretzel[6] = quaOri[3];
    arrPretzel[7] = quaSpe[0];
    arrPretzel[8] = quaSpe[1];
    arrPretzel[9] = quaSpe[2];
    arrPretzel[10] = quaSpe[3];
    arrPretzel[11] = quaSpe[4];
    arrPretzel[12] = quaSpe[5];
    arrPretzel[13] = quaSpe[6];
    arrPretzel[14] = quaSpe[7];
    arrPretzel[15] = quaPre[0];
    arrPretzel[16] = quaPre[1];
    arrPretzel[17] = quaPre[2];
    arrPretzel[18] = quaPre[3];
    arrPretzel[19] = quaPre[4];
    arrPretzel[20] = quaBites[0];
    arrPretzel[21] = quaBites[1];
    arrPretzel[22] = quaBites[2];
    arrPretzel[23] = quaCombo[0];
    arrPretzel[24] = quaCombo[1];
    arrPretzel[25] = quaCombo[2];
    arrPretzel[26] = quaCombo[3];
    arrPretzel[27] = quaCombo[4];
    arrPretzel[28] = quaCombo[5];
    arrPretzel[29] = quaCombo[6];
    arrPretzel[30] = quaCombo[7]; 
	num = 31;
	int pretzName[31] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	printf("\nPRETZEL\n");
	

 for(int x = 0; x < num - 1; x++)
	{       
        for(int y = 0; y < num - x - 1; y++)
		{          
            if(arrPret[y] > arrPret[y + 1]){               

                temp = arrPret[y];
				tempname = pretzName[y];
                arrPret[y] = arrPret[y + 1];
                pretName[y] = pretzName[y + 1];

                arrPret[y + 1] = temp;
                pretzName[y + 1] = tempname;
            }
        }
    }

	printf("_____________________________________\n");
    for(int x = 30; x >= 0 ; x--){
    	
	 	if(pretName[x]==0)
	 		printf("Savory Jumbo Cheese Sausage  |");
	 	if(pretName[x]==1)
	 		printf("Savory Sausage Bites         |");
	 	if(pretName[x]==2)
	 		printf("Savory Cheese Nuggets        |");
		if(pretName[x]==3)
	 		printf("Original Plain               |");
		if(pretName[x]==4) 
	 		printf("Original Salt                |");
		if(pretName[x]==5)
	 		printf("Original Butter              |");
	 	if(pretName[x]==6)
	 		printf("Original Salt & Butter       |");
	 	if(pretName[x]==7)
	 		printf("Specialty Green Tea          |");
		if(pretName[x]==8)
	 		printf("Specialty Cinnamon Sugar     |");
		if(pretName[x]==9)
	 		printf("Specialty Sour Cream&Onion   |");
		if(pretName[x]==10)
	 		printf("Specialty Garlic             |");
	 	if(pretName[x]==11)
	 		printf("Specialty Chocolate Mint     |");
	 	if(pretName[x]==12)
	 		printf("Specialty Seaweed            |");
		if(pretName[x]==13)
	 		printf("Specialty Parmesan Cheese    |");
		if(pretName[x]==14)
	 		printf("Specialty Sesame Seeds       |");
		if(pretName[x]==15)
	 		printf("Premium Caramel Almond       |");
	 	if(pretName[x]==16)
	 		printf("Premium Jalapeno Cheese      |");
	 	if(pretName[x]==17)
	 		printf("Premium Cheezy Turkey        |");
		if(pretName[x]==18)
	 		printf("Premium Cinnamon Raisin      |");
		if(pretName[x]==19)
	 		printf("Premium Choco Eclairs        |");
	 	if(pretName[x]==20)
	 		printf("Bites Original               |");
	 	if(pretName[x]==21)
	 		printf("Bites Cinnamon Sugar         |");
	 	if(pretName[x]==22)
	 		printf("Bites Choco Eclairs          |");
		if(pretName[x]==23)
	 		printf("Combo Original Combo         |");
		if(pretName[x]==24)
	 		printf("Combo Specialty Combo        |");
		if(pretName[x]==25)
	 		printf("Combo Premium Combo          |");
	 	if(pretName[x]==26)
	 		printf("Combo Original Stix          |");
	 	if(pretName[x]==27)
	 		printf("Combo Cinnamon Stix          |");
		if(pretName[x]==28)
	 		printf("Combo Eclairs Stix           |");
		if(pretName[x]==29)
	 		printf("Combo Jumbo Cheese Sausage   |");
		if(pretName[x]==30)
	 		printf("Combo Pretzel Sausage Bites  |");
		

			 	 	 	 	
	 	
	 		
        printf("%d            |\n ", arrPret[x]);
        printf("_____________________________________|\n");

    }
    
    int arrBev[5];
    arrBev[0] = quaBev[0];
    arrBev[1] = quaBev[1];
    arrBev[2] = quaBev[2];
    arrBev[3] = quaBev[3];
    arrBev[4] = quaBev[4];
	num = 5;
	int Bevname[5] = {0,1,2,3,4};
	printf("\nBEVERAGES\n");
	

 for(int x = 0; x < num - 1; x++)
	{       
        for(int y = 0; y < num - x - 1; y++)
		{          
            if(arrBev[y] > arrBev[y + 1]){               

                temp = arrBev[y];
				tempname = Bevname[y];
                arrBev[y] = arrBev[y + 1];
                Bevname[y] = Bevname[y + 1];

                arrBev[y + 1] = temp;
                Bevname[y + 1] = tempname;
            }
        }
    }

	printf("_____________________________________\n");
    for(int x = 4; x >= 0 ; x--){
    	
	 	if(Bevname[x]==0)
	 		printf("LEMONADE(REGULAR)      |");
	 	if(Bevname[x]==1)
	 		printf("LEMONADE(MEDIUM)       |");
	 	if(Bevname[x]==2)
	 		printf("PASSIONFRUIT(REGULAR)  |");
		if(Bevname[x]==3)
	 		printf("PASSIONFRUIT(MEDIUM)   |");
		if(Bevname[x]==4)
	 		printf("MINERAL WATER          |");

	 		
        printf("%d            |\n ", arrBev[x]);
        printf("_____________________________________|\n");

    }

}

	
int original()
{
	printf(" ____________________________________________________________________\n");
	printf("|                            ORIGINAL                                | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-PLAIN ____________________________________________________(RM3.80)| \n");
	printf("|2-ADD-ON SALT_______________________________________________(RM3.80)| \n");
	printf("|3-ADD-ON BUTTER_____________________________________________(RM3.80)| \n"); 
	printf("|4-ADD-ON SALT & BUTTER______________________________________(RM3.80)| \n");
	printf("|____________________________________________________________________|\n");
	
	int choice, maxchoi=4;
	choice = inputVal(maxchoi);
	return choice;
}

int specialty()
{
	printf(" ______________________________________________________\n" );
	printf("|                    SPECIALTY                         |\n");
	printf("|------------TO SELECT PLEASE ENTER THE CODE-----------|\n");
	printf("|1- Green Tea_________________________________RM 4.90  |\n");
	printf("|2- Cinnamon Sugar____________________________RM 4.90  |\n");
	printf("|3- Sour Cream & Onion________________________RM 4.90  |\n");
	printf("|4- Garlic____________________________________RM 4.90  |\n");
	printf("|5- Chocolate Mint____________________________RM 4.90  |\n");
	printf("|6- Seaweed___________________________________RM 4.90  |\n");
	printf("|7- Parmesan Cheese___________________________RM 4.90  |\n");
	printf("|8- Sesame Seed_______________________________RM 4.90  |\n");
	printf("|______________________________________________________|\n");
						
	int choice,maxchoi=8;
	choice = inputVal(maxchoi);
	return choice;
}

int premium()
{
	printf(" ____________________________________________________________________\n");
	printf("|                              PREMIUM                               | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-CARAMEL ALMOND ___________________________________________(RM6.50)| \n");
	printf("|2-JALAPENO CHEESE___________________________________________(RM6.50)| \n");
	printf("|3-CHEEZY TURKEY_____________________________________________(RM6.50)| \n"); 
	printf("|4-CINNAMON RAISIN___________________________________________(RM6.50)| \n");
	printf("|5-CHOCO ECLAIRS_____________________________________________(RM6.50)| \n");
	printf("|____________________________________________________________________|\n");
					
	int choice,maxchoi=5;
	choice = inputVal(maxchoi);
	return choice;
}

int savory()
{
	printf(" ____________________________________________________________________\n");
	printf("|                    SAVORY(CHEESE DIP INCLUDED)                     | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-JUMBO CHEESE SAUSAGE ____________________________________(RM10.50)| \n");
	printf("|2-SAUSAGE BITES(6 pcs)______________________________________(RM9.50)| \n");
	printf("|3-CHEESE NUGGETS(8 pcs)_____________________________________(RM8.50)| \n"); 
	printf("|____________________________________________________________________|\n");
					
	int choice, maxchoi=3;
	choice = inputVal(maxchoi);
}

int bitesCat()
{
	printf(" ____________________________________________________________________\n");
	printf("|                              BITES                                 | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-ORIGINAL _________________________________________________(RM4.80)| \n");
	printf("|2-CINNAMON SUGAR____________________________________________(RM5.80)| \n");
	printf("|3-CHOCOLATE ECLAIRS_________________________________________(RM6.80)| \n"); 
	printf("|____________________________________________________________________|\n");
	
	int choice, maxchoi=3;
	choice = inputVal(maxchoi);
}

int comboCat()
{
	printf(" ____________________________________________________________________\n");
	printf("|                    COMBO (ANY ITEM + A DRINK)                      | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-ORIGINAL PRETZEL COMBO ___________________________________(RM7.50)| \n");
	printf("|2-SPECIALITY PRETZEL COMBO___________________________________(RM8.50)| \n");
	printf("|3-PREMIUM PRETZEL COMBO____________________________________(RM10.50)| \n"); 
	printf("|4-PRETZEL STIX COMBO________________________________(RM8.50-RM10.50)| \n");
	printf("|5-JUMBO CHEESE SAUSAGE COMBO ______________________________(RM14.10)| \n");
	printf("|6-PRETZEL SAUSAGE BITES COMBO _____________________________(RM13.50)| \n");
	printf("|____________________________________________________________________|\n");

	int choice,maxchoi=6;
	choice = inputVal(maxchoi);
	
	return choice;
}

int comboBev()
{
	printf(" ____________________________________________________________________\n");
	printf("|                       COMBO BEVERAGES                              | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-LEMONADE _________________________________________________________| \n");
	printf("|2-PASSION FRUIT_____________________________________________________| \n");
	printf("|____________________________________________________________________|\n");
	int choice,maxchoi=2;
	choice = inputVal(maxchoi);
	
	return choice;
}

int inputVal(int maximum)
{
	int choice,temp,status;
	while(choice>maximum || choice<1 )
	{
		
		status = scanf("%d", &choice);
		while(status!=1)
		{
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Invalid input. please enter a numberic value between 1 - %d: ", maximum);
		status = scanf("%d", &choice);
		}
		
		if(choice<=0)
			printf("invalid value. Value entered is less than 1, please enter 1 - %d: ",maximum);
		else if(choice>maximum)
			printf("invalid value. Value entered is more than %d, please enter 1 - %d: ",maximum,maximum);
	}
	
	return choice;
}

int quantity()
{
	int qua=0,status,temp;
	while(qua<1)
	{
	printf("Enter Quantity: ");
	status = scanf("%d", &qua);
	while(status!=1)
	{
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Invalid input. please enter a numberic value: ");
		status = scanf("%d", &qua);
	}
	if(qua<1)
		printf("Invalid value, amount can't be less than 1\n");

	}
	return qua;
}

int stixCat()
{
  printf(" ____________________________________________________________________\n");
  printf("|                          PRETZEL STIX                              | \n");
  printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
  printf("|1-ORIGINAL _________________________________________________________| \n");
  printf("|2-CINNAMON__________________________________________________________| \n");
  printf("|3-ECLAIRS___________________________________________________________| \n");
  printf("|____________________________________________________________________|\n");
  	int choice,maxchoi=3;
	choice = inputVal(maxchoi);
	
	return choice;
  
}
void bevSize()
{
	printf(" ____________________________________________________________________\n");
	printf("|                         BEVERAGE SIZE                              | \n");
	printf("|----------------TO SELECT PLEASE ENTER THE CODE---------------------|\n");
	printf("|1-REGULAR __________________________________________________(RM4.80)| \n");
	printf("|2-MEDIUM____________________________________________________(RM5.80)| \n"); 
	printf("|____________________________________________________________________|\n");

}
