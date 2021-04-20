int redlight = D5;
int greenlight = D4;
int bluelight = D6;

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
