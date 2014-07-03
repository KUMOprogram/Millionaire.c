#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int error_police (int epil)
{
				_Bool flagen=1;
				while (flagen)
				{
					if (epil!=1 && epil!=2 && epil!=3 && epil!=4)
					{
						printf("                              MAKE A VIABLE CHOICE.\n");
						printf("                                     Chose: ");
						scanf("%i",&epil);
					}else{
						flagen=0;
					}
				}
   return epil;
}

int print_eurw ()
{
       	printf("*******************************************************************************\n\n");
   		printf("                 1 RIGHT ANSWER --------------- 10.000 E\n");
   		printf("                 2 RIGHT ANSWERS -------------- 20.000 E\n");
   		printf("                 3 RIGHT ANSWERS -------------- 30.000 E\n");
   		printf("                 4 RIGHT ANSWERS -------------- 40.000 E\n");
   		printf("                 ================  PILLOW  =============\n");
   		printf("                 5 RIGHT ANSWERS -------------- 50.000 E\n");
   		printf("                 6 RIGHT ANSWERS -------------- 60.000 E\n");
   		printf("                 7 RIGHT ANSWERS -------------- 70.000 E\n");
   		printf("                 8 RIGHT ANSWERS -------------- 80.000 E\n");
   		printf("                 ================  PILLOW  =============\n");
   		printf("                 9 RIGHT ANSWERS -------------- 90.000 E\n");
   		printf("                 10 RIGHT ANSWERS ------------ 100.000 E\n\n");

		return 0;
}

int main (void)
{
	int i,j,choice,epil;
	
	int pillow=0;
	int count=0;
	int counttable[10];
	
	_Bool flagpaizei=1;
	_Bool flag1=1;
	_Bool flag2=1;
	_Bool flag3=1;
	_Bool flag4=1;
	_Bool flag5=1;
	_Bool flag6=1;
	_Bool flag7=1;
	_Bool flag8=1;
	_Bool flag9=1;
	_Bool flag10=1;
	while (flagpaizei && count<10)
	{
    system("cls");
	system("color f1");

		print_eurw();

   	 	printf("*******************************************************************************\n\n");
   	 	if (flag1)
   	 	{
   			printf("              DEATH NOTE -------------------------------- 1\n");
   	 	}

   	 	if (flag2)
   	 	{
            printf("              NARUTO ------------------------------------ 2\n");
   	 	}

   	 	if (flag3)
   	 	{
            printf("              CODE GEASS -------------------------------- 3\n");
   	 	}

   	 	if (flag4)
   	 	{
            printf("              CLAYMORE ---------------------------------- 4\n");
   	 	}

   	 	if (flag5)
   	 	{
            printf("              FULLMETAL ALCHEMIST ----------------------- 5\n");
   	 	}

   	 	if (flag6)
   	 	{
            printf("              EYESHIELD21 ------------------------------- 6\n");
   	 	}

   	 	if (flag7)
   	 	{
            printf("              HIGURASHI NO NAKU KORO NI ----------------- 7\n");
   	 	}

   	 	if (flag8)
   	 	{
            printf("              ONE PIECE --------------------------------- 8\n");
		}
		
   	 	if (flag9)
   	 	{
            printf("              BATTLE PROGRAMMER SHIRASE ----------------- 9\n");
   	 	}

   	 	if (flag10)
   	 	{
            printf("              FATE STAY NIGHT --------------------------- 10\n\n");
   	 	}
    	printf("*******************************************************************************\n");
    	printf("                                Choice: ");
    	scanf("%i",&choice);
    	printf("*******************************************************************************\n");

		_Bool flag=1;
		for (i=0; i<10; i++)    //periorismos ama exei 3anadwsei to noumero "choice"
		{
			if (choice==counttable[i])
			{
				flag=0;
			}
		}
		
		if (choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5 && choice!=6 && choice!=7 && choice!=8 && choice!=9 && choice!=10)
		{
			flag=0;  //periorismos ama to noumero p edwse dn einai apo 1 ws 10
		}

		if (flag)
		{
            counttable[count]=choice;   //o pinakas elenxou 3anadwsimatos gemizetai me thn do8ousa epilogh choice
			count++;     //o ari8mos twn erwthsewn paei +1 wste o pinakas "countable" na gemisei to epomeno keli KAI na exoume 10 erwthseis max
        
        	if (choice==1)
			{
			system("cls");
			system("color f5");

				flag1=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth
				
				printf("\n\n                           WHAT RYUKU LIKED TO EAT?\n\n");
				printf("                          1. PEACH          2. APPLES\n");
				printf("                          3. CHOCOLATE      4. HUMANS\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);
				
				epil=error_police(epil);
				
				if (epil==2)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (2) @@@\n");
					flagpaizei=0;
				}
			}
			
			if (choice==2)
			{
			system("cls");
			system("color f5");

				flag2=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                        WHAT DOES NOT BELONG TO NARUTO?\n\n");
				printf("                  1. RASHENGAN                 2. RASHEN SURIKEN\n");
				printf("                  3. REVERSE SEXY NO JUTSU     4. AMATERASU\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==4)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (4) @@@\n");
					flagpaizei=0;
				}
			}
			
		    if (choice==3)
			{
			system("cls");
			system("color f5");

				flag3=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                             ''I SWEAR I AM NOT...''\n\n");
				printf("                             1. ORANGE    2. PIZZA\n");
				printf("                             3. APPLE     4. POTATO\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==1)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (1) @@@\n");
					flagpaizei=0;
				}
			}
		
		    if (choice==4)
			{
			system("cls");
			system("color f5");

				flag4=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                           CLARE'S NUMBER IN ANIME WAS\n\n");
				printf("                              1. #2        2. #47\n");
				printf("                              3. #37       4. #33\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==2)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (2) @@@\n");
					flagpaizei=0;
				}
			}
		
		    if (choice==5)
			{
			system("cls");
			system("color f5");

				flag5=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n           IN FIRST FMA, WHAT WAS THE NAME OF THEIR HOMUNCULUS MOTHER?\n\n");
				printf("                             1. LUST          2. SLOTH\n");
				printf("                             3. ENVY          4. WRATH\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==2)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (2) @@@\n");
					flagpaizei=0;
				}
			}
		
		    if (choice==6)
			{
			system("cls");
			system("color f5");

				flag6=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                        WHERE TEAM DID WRITE THEIR NAMES\n\n");
				printf("                         1. OLD UNIFORM       2. OLD BALL\n");
				printf("                         3. OLD WALL          4. OLD TV\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==4)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (4) @@@\n");
					flagpaizei=0;
				}
			}
			
			if (choice==7)
			{
			system("cls");
			system("color f5");

				flag7=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                           WHO WAS TRAVELING IN TIME?\n\n");
				printf("                          1. MION            2. SHION\n");
				printf("                          3. RIKA            4. SONOKO\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==3)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (3) @@@\n");
					flagpaizei=0;
				}
			}
			
			if (choice==8)
			{
			system("cls");
			system("color f5");

				flag8=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                 IN WHAT FLOOR WAS ACE IMPRISONED IN IMPEL DOWN?\n\n");
				printf("                          1. lvl 5            2. lvl 6\n");
				printf("                          3. lvl 6.5          4. lvl 7\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==2)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (2) @@@\n");
					flagpaizei=0;
				}
			}
			
			if (choice==9)
			{
			system("cls");
			system("color f5");

				flag9=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                    ''JUST LIKE THAT POPULAR ACTRESS...''\n\n");
				printf("                  1. ANGELINA JOLIE         2. IRENE JANNETTE\n");
				printf("                  3. ISABELLA ADJANNE       4. ISMENE ANTONELLA\n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==3)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (3) @@@\n");
					flagpaizei=0;
				}
			}
			
			if (choice==10)
			{
			system("cls");
			system("color f5");

				flag10=0;  //wste na mhn 3anaginei h idia erwthsh sthn xrhsth

				printf("\n\n                            GILGAMESH' NOBLE PHANTASM\n\n");
				printf("                 1. GATE OF BABULON             2. RULE BREAKER\n");
				printf("                 3. UNLIMITED BLADE WORKS       4. EXCALIBUR \n\n");
				printf("                                     Chose: ");
				scanf("%i",&epil);

                epil=error_police(epil);

				if (epil==1)
				{
					printf("\n                                  !!! SWSTO !!!\n");
				}else{
					printf("\n                            @@@ SWSTO HTAN TO (1) @@@\n");
					flagpaizei=0;
				}
			}
			
		}else{
			printf("                      !!! DIALE3E SWSTH EPILOGH !!!\n");
		}
		
		if (count==5)
		{

			pillow=40000;
		}

		if (count==9)
		{
			pillow=80000;
		}
		
		system("PAUSE");
	}
	
	if (!flagpaizei)
	{
		printf("                          !!! LYPAMAI POLU XASATE !!!\n");
		printf("                          SUNOLIKO KERDOS : %i EURW\n", pillow);
	}else{
		printf("                        !!! EISTE O MEGALOS NIKHTHS !!!\n");
		printf("                        SUNOLIKO KERDOS : 100.000 EURW\n");
	}
	
	system("PAUSE");
	return 0;
}
