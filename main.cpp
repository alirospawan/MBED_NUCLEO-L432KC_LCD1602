#include "mbed.h"
#include "TextLCD.h"


//TextLCD lcd(PA_6, PA_5, PA_4, PA_3, PA_1, PA_0, TextLCD::LCD16x2);
//TextLCD lcd(PB_3, PA_0, PB_4, PB_5, PA_2, PA_3, TextLCD::LCD16x2);
//TextLCD lcd(PA_5, PA_0, PA_7, PA_6, PA_2, PA_3, TextLCD::LCD16x2);
TextLCD lcd(PA_9, PA_0, PA_5, PA_1, PA_2, PA_3, TextLCD::LCD16x2);

int main() {
    
    lcd.locate(0,0);        lcd.printf("PROGRAMMABLE");
    lcd.locate(0,1);        lcd.printf("WAVE GENERATOR");
    
    
    while(1) 
    {
        
    }
}