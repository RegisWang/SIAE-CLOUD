#ifndef _SIMU_H_
#define _SIMU_H_
#ifndef BYTE
#define BYTE unsigned char
#endif

void InitSimu(); /* Initialise le simulateur, � appeler avant tout appel aux fonctions suivantes */
int ReadHLS(); /* Renvoie un bool�en donnant l'�tat de HLS */
int ReadLLS(); /* Renvoie un bool�en donnant l'�tat de LLS */
int ReadMS(); /* Renvoie un entier donnant le niveau de methane */
void CommandPump(int cmd); /* Applique la commande bool�enne cmd sur la pompe */
void CommandAlarm(int cmd); /* Applique la commande bool�enne cmd sur l'alarme */

#endif
