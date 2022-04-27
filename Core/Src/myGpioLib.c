/**
 * @file sys3046Template.c
 * @brief my short description for sys3046Template.c
 */   
//==========================================================
//Some usefull comments
//==========================================================

#define GPIO_PORTA_IN *((volatile unsigned long *) 0x50000010)
#define GPIO_PORTA_OUT *((volatile unsigned long *) 0x50000014)
#define LED2 0x00000020

#define GPIO_PORTC_IN *((volatile unsigned long *) 0x50000810)
#define GPIO_PORTC_OUT *((volatile unsigned long *)0x50000814)
#define B1 0x50000800


void init_GPIO()
{

	/**
	 * Initalisation des valeurs
	 * @param val_in récpuère la valeur de lecture des GPIO
	 * @param br permet d'interrompre la boucle de lecture
	 * @param FLAG permet de determiner s'il y a des erreurs
	 */
	int val_in = 0;
	int br = 1;
	int FLAG = 1;





	for(int i =0; i < 25; i++)
	{
		val_in = read_GPIO();
		if((GPIO_PORTA_IN & LED2) == LED2)
			{
				printf("lecture");
				FLAG++;
			}

		write_GPIO();
		val_in = read_GPIO();

		if((GPIO_PORTA_IN & LED2) != LED2)
			{
				printf("Ecriture");
				FLAG++;
			}

		write_GPIO();

	}

	if(FLAG != 0)
		printf("%d ERREURS\r\n",FLAG);

	while(br == 1)
	{

		val_in = read_B1();
		if(val_in == 0)
			br = 0;
	}

	printf("LECTURE B1 OK\r\n");

}



int read_GPIO()
{


}

/*
 * Lit l'entrée de la LED2.
 */

void write_GPIO()
{
	GPIO_PORTA_OUT= (GPIO_PORTA_IN ^ LED2);

}

/*
 * Lit l'entrée de B1
 */
int read_B1()
{
return GPIO_PORTC_IN;


}

//==========================================================
//Some usefull comments
//==========================================================

