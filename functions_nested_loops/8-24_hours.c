#include "main.h"
/**
  * jack_bauer- Print hour
  * jack bauer: Print hour
  * dizaine_heure: [0]0:00
  * heure: 0[0]:00
  * dizaine_minute: 00:[0]0
  * minute: 00:0[0]
  **/



void jack_bauer(void)

{
	int dizaine_heure;
	int heure;
	int dizaine_minute;
	int minute;

		for (dizaine_heure = 0 ; dizaine_heure <= 2 ; dizaine_heure++)
		{
			for (heure = 0 ; heure <= 9 ; heure++)
			{
				if (dizaine_heure == 2 && heure == 4  && dizaine_minute > 5 && minute > 9)
				{
					break;
				}
				for (dizaine_minute = 0 ; dizaine_minute <= 5 ; dizaine_minute++)
				{
					for (minute = 0 ; minute <= 9 ; minute++)
					{
						_putchar(dizaine_heure + '0');
						_putchar(heure + '0');
						_putchar(':');
						_putchar(dizaine_minute + '0');
						_putchar(minute + '0');
						_putchar('\n');
					}
				}
			}
		}
}
