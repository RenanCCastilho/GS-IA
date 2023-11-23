const int ledPin1R = 9;  
const int ledPin1G = 10; 
const int ledPin1B = 11; 

const int ledPin2R = 6;  
const int ledPin2G = 5; 
const int ledPin2B = 3;  

const int ledPin3R = 2;  
const int ledPin3G = 4;  
const int ledPin3B = 7;  


void setup() {
  pinMode(ledPin1R, OUTPUT);
  pinMode(ledPin1G, OUTPUT);
  pinMode(ledPin1B, OUTPUT);

  pinMode(ledPin2R, OUTPUT);
  pinMode(ledPin2G, OUTPUT);
  pinMode(ledPin2B, OUTPUT);

  pinMode(ledPin3R, OUTPUT);
  pinMode(ledPin3G, OUTPUT);
  pinMode(ledPin3B, OUTPUT);
}

void controlarLED(int pinoR, int pinoG, int pinoB, int valor, int verdeMin, int verdeMax, int vermelhoMax, int laranjaMin = 0, int laranjaMax = 0);

void loop() {
  controlarLED(ledPin1R, ledPin1G, ledPin1B, 80, 50, 100, 101);
  controlarLED(ledPin2R, ledPin2G, ledPin2B, 100, 85, 120, 121);
  controlarLED(ledPin3R, ledPin3G, ledPin3B, 110, 70, 100, 101, 119, 120);
}

 	int batimentos = 100;
  	int pressao = 120;
  	int glicose = 80;

void controlarLED(int pinoR, int pinoG, int pinoB, int valor, int verdeMin, int verdeMax, int vermelhoMax, int laranjaMin, int laranjaMax) {
 
  //GLICOSE
  if (glicose <= 100 && glicose >= 70) {
     // Piscar normalmente na cor verde
    piscarLED(ledPin3R, ledPin3G, ledPin3B, 500, 500, 0, 255, 0);
  } else if (glicose > 40 && glicose < 70) {
    // Piscar normalmente na cor Laranja
    piscarLED(ledPin3R, ledPin3G, ledPin3B, 500, 500, 255, 165, 0);
  } else if (glicose > 100 && glicose <= 125){
  	// Piscar normalmente na cor Laranja
    piscarLED(ledPin3R, ledPin3G, ledPin3B, 500, 500, 255, 165, 0);
  }else if (glicose < 40 || glicose > 125){
  	// Piscar normalmente na cor Vermelha
    piscarLED(ledPin3R, ledPin3G, ledPin3B, 250, 250, 255, 0, 0);
  }
  
  
  //PRESSÃO
  if (pressao <= 135 && pressao >= 85) {
     // Piscar normalmente na cor verde
    piscarLED(ledPin2R, ledPin2G, ledPin2B, 500, 500, 0, 255, 0);
  } else if (pressao > 45 && pressao < 84) {
    // Piscar normalmente na cor Laranja
    piscarLED(ledPin2R, ledPin2G, ledPin2B, 500, 500, 255, 165, 0);
  } else if (pressao > 135 && pressao <= 139){
  	// Piscar normalmente na cor Laranja
    piscarLED(ledPin2R, ledPin2G, ledPin2B, 500, 500, 255, 165, 0);
  }else if (pressao < 45 || pressao > 140){
  	// Piscar normalmente na cor Vermelha
    piscarLED(ledPin2R, ledPin2G, ledPin2B, 250, 250, 255, 0, 0);
  }
  
  //BATIMENTOS
  if (batimentos <= 100 && batimentos >= 50) {
     // Piscar normalmente na cor verde
    piscarLED(ledPin1R, ledPin1G, ledPin1B, 500, 500, 0, 255, 0);
  } else if (batimentos > 1 && batimentos < 48) {
    // Piscar normalmente na cor Laranja
    piscarLED(ledPin1R, ledPin1G, ledPin1B, 500, 500, 255, 165, 0);
  } else if (batimentos > 101 && batimentos <= 120){
  	// Piscar normalmente na cor Laranja
    piscarLED(ledPin1R, ledPin1G, ledPin1B, 500, 500, 255, 165, 0);
  }else if (batimentos == 0 || batimentos >= 121){
  	// Piscar normalmente na cor Vermelha
    piscarLED(ledPin1R, ledPin1G, ledPin1B, 250, 250, 255, 0, 0);
  }
}

void piscarLED(int pinoR, int pinoG, int pinoB, int tempoLigado, int tempoDesligado, int corR, int corG, int corB) {
  digitalWrite(pinoR, HIGH);
  digitalWrite(pinoG, HIGH); 
  digitalWrite(pinoB, HIGH); 
  analogWrite(pinoR, corR);
  analogWrite(pinoG, corG); 
  analogWrite(pinoB, corB); 
	
  //GLICOSE
   if (glicose < 40|| glicose > 125){
    delay(100);
   } else {
   	delay(150);
   }
  
  //PRESSÃO
   if (pressao < 45 || pressao > 140){
    delay(100);
  }else {
   	delay(150);
   }
  
  //BATIMENTOS
   if (batimentos == 0 || batimentos > 121){
    delay(100);
  }else {
   	delay(150);
   }
  
  digitalWrite(pinoR, LOW); 
  digitalWrite(pinoG, LOW); 
  digitalWrite(pinoB, LOW); 
  
}

