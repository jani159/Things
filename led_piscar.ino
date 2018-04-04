int piscar;
int i;
  
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  piscar = 3;
}

void loop()
{
if(piscar == 0){
    	digitalWrite(13, HIGH);
    	delay(1000); //  Wait for 1000 millisecond(s)
    	digitalWrite(13, LOW);
    	delay(1000); // Wait for 1000 millisecond(s)
    }
  
  else{
    
  		if(piscar == 1){
        	digitalWrite(12,HIGH);
    		delay(1000); //  Wait for 1000 millisecond(s)
    		digitalWrite(12,LOW);
    		delay(1000); // Wait for 1000 millisecond(s)
  		}
    
    else{
      if(piscar == 2){
        	digitalWrite(11, HIGH);
    		delay(1000); //  Wait for 1000 millisecond(s)
    		digitalWrite(11, LOW);
    		delay(1000); // Wait for 1000 millisecond(s)
      }
    else{
      if(piscar == 3){
      		while(i<5){
        
        	digitalWrite(13,HIGH);
    		delay(1000); //  Wait for 1000 millisecond(s)
    		digitalWrite(13, LOW);
    		delay(1000); // Wait for 1000 millisecond(s)
        	
        	digitalWrite(12, HIGH);
    		delay(1000); //  Wait for 1000 millisecond(s)
    		digitalWrite(12, LOW);
    		delay(1000); // Wait for 1000 millisecond(s)
        
        	digitalWrite(11, HIGH);
    		delay(1000); //  Wait for 1000 millisecond(s)
    		digitalWrite(11, LOW);
    		delay(1000); // Wait for 1000 millisecond(s)
        i= i +1;
        
      }
      }
    }
  }
 }
}
