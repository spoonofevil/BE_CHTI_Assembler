

#include "DriverJeuLaser.h"

extern short Son;
extern int LongueurSon;
short* Cursor;

 

//void TestPlaySound() {
//	SortieSon = ((*Cursor+32768)*719)/(32768*2);
//	if(Cursor < (&Son+LongueurSon))
//		Cursor++;
//}

int main(void)
{

// ===========================================================================
// ============= INIT PERIPH (faites qu'une seule fois)  =====================
// ===========================================================================

// Après exécution : le coeur CPU est clocké à 72MHz ainsi que tous les timers
CLOCK_Configure();
	Timer_1234_Init_ff(TIM4,7200);
	extern void PlaySound();
	Active_IT_Debordement_Timer( TIM4, 2, PlaySound );

	GPIO_Configure(GPIOB, 1, OUTPUT, OUTPUT_PPULL);
	

	Cursor = &Son;
//============================================================================	
	
	
	
	
while	(1)
	{
	}
}
