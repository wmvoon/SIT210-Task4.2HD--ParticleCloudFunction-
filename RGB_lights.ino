int redlight = D6;
int greenlight = D5;
int bluelight = D4;

void setup() {
    pinMode(redlight, OUTPUT);
    pinMode(greenlight, OUTPUT);
    pinMode(bluelight, OUTPUT);
    Particle.function("led", ledON);
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,LOW);
    digitalWrite(bluelight,LOW);

}

void loop() {

}

int ledON(String command){
    if (command =="red"){
        
    digitalWrite(redlight,HIGH);
    digitalWrite(greenlight,LOW);
    digitalWrite(bluelight,LOW);
    return 1;
    
    }
    else if (command =="green"){
        
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,HIGH);
    digitalWrite(bluelight,LOW);
    return 0;
    
    }
    else if (command =="blue"){
        
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,LOW);
    digitalWrite(bluelight,HIGH);
    return 0;
    
    }
    else if (command =="all"){
        
    digitalWrite(redlight,HIGH);
    digitalWrite(greenlight,HIGH);
    digitalWrite(bluelight,HIGH);
    return 0;
    
    }
    
    else if (command =="m1"){
       
    digitalWrite(redlight,HIGH);
    delay(300);
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,HIGH);
    delay(300);
    digitalWrite(greenlight,LOW);
    digitalWrite(bluelight,HIGH);
    delay(300);
    digitalWrite(bluelight,LOW);
    digitalWrite(redlight,HIGH);
    delay(200);
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,HIGH);
    delay(150);
    digitalWrite(bluelight,HIGH);
    digitalWrite(greenlight,LOW);
    delay(500);
    digitalWrite(bluelight,LOW);
    digitalWrite(redlight,HIGH);
    delay(250);
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,HIGH);
    delay(250);
    digitalWrite(greenlight,LOW);
    
    return 0;
    
    
    }
    
    else if (command =="off"){
        
    digitalWrite(redlight,LOW);
    digitalWrite(greenlight,LOW);
    digitalWrite(bluelight,LOW);
    return 0;
    
    }
    
    else {
        
        return -1;
        
    }
}
