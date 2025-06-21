#include "main.h"



void jack_bauer(void)

{
	unsigned int dizaine_heure;
	unsigned int heure;
	unsigned int dizaine_minute;
	unsigned int minute;

	while (dizaine_heure <= 2 && heure <= 4 && dizaine_minute <= 5 && minute <= 9)
	{
		for (dizaine_heure = 0 ; dizaine_heure <= 2 ; dizaine_heure++)
		{
			for (heure = 0 ; heure <= 4 ; heure++)
			{
				for (dizaine_minute = 0 ; dizaine_minute <= 5 ; dizaine_minute++)
				{
					for (minute = 0 ; minute <= 9 ; minute++)
					{
						_putchar(dizaine_heure);
							_putchar(heure);
							_putchar(':');
							_putchar(dizaine_minute);
							_putchar(minute);
							_putchar('\n');
					}
				}
			}
		}
	}
}
