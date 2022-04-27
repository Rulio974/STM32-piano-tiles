/**
 * @file sys3046Template.h
 * @author  Name1
 * @author  Name2
 * @version 1.0.0
 * @brief my short description for sys3046Template.h
 * @details more details for this file
 */   
 
#ifndef SYS3046TEMPLATE_H_INCLUDE
#define SYS3046TEMPLATE_H_INCLUDE

#define GPIO_PORTA_IN *((volatile unsigned long *) 0x50000010)
#define GPIO_PORTA_OUT *((volatile unsigned long *) 0x50000014)
#define LED2 0x00000020

/**
 * Description of MYCONFIG_VALUE
 */
#define MYCONFIG_VALUE  0x1234


/**
 * Description of myStruct
 */
 struct myStruct 
 { 
   /** member1 documentation */
   int member1; 
   /** member2 documentation */
   char member2; 
 };


	/**
	 * Fonction de test permettant de vérifier le fonctionnement
	 * global du programme.
	 * @return Erreur si l'écriture ou la lecture ne fonctionne pas correctement.

 */ 
 void init_GPIO();

/**
 * Lit LED2
 */
 void read_GPIO();

/**
 * Ecrit sur LED2
 */
 void write_GPIO();


 /**
  * Lit l'entrée de B1
  */
 int read_B1();




#endif  //SYS3046TEMPLATE_H_INCLUDE
