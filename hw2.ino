#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 7, 5, 4, 3, 2);	// 初始化 LCD 模組
char ch;
void setup()
{
  Serial.begin(9600);
  lcd.begin(20,2);
  lcd.cursor();
/*  lcd.print("04050432 daining");	// 顯示字串
  lcd.setCursor(0,1);	        // 移動游標至第0行第1列
  lcd.print("04050785 yoting") ;   // 顯示字串*/
}
int x = 0;
void loop()
{
  char val;
    if(Serial.available() )
      {
        delay(500);
       lcd.clear();
       while(Serial.available())
    {
      val = Serial.read();
      lcd.write(val);   
    }  


  }

    
    

}


