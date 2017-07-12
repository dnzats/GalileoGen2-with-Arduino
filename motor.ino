
int sagileri = 3;
int saggeri = 5;
int solileri = 6;
int solgeri = 9;

int deger = 0;
int toprak = 0;

  void ileri(){
    for(deger=0;deger<255;deger++){
    
      analogWrite(sagileri, deger);
      analogWrite(solileri, deger);
      analogWrite(saggeri, toprak);
      analogWrite(solgeri, toprak);
    } 
  }
   void geri(){
     for(deger=0;deger<255;deger++){
    
      analogWrite(sagileri, toprak);
      analogWrite(solileri, toprak);
      analogWrite(saggeri, deger);
      analogWrite(solgeri, deger);
    }   
  }
    void sol(){
      for(deger=0;deger<255;deger++){
    
        analogWrite(sagileri, deger);
        analogWrite(solileri, toprak);
        analogWrite(saggeri, toprak);
        analogWrite(solgeri, deger);
      }  
   }
    void sag(){
      for(deger=0;deger<255;deger++){
    
        analogWrite(sagileri, toprak);
        analogWrite(solileri, deger);
        analogWrite(saggeri, deger);
        analogWrite(solgeri, toprak);
      }
   }
   
     void dur(){
      for(deger=0;deger<255;deger++){
    
        analogWrite(sagileri, toprak);
        analogWrite(solileri, toprak);
        analogWrite(saggeri, toprak);
        analogWrite(solgeri, toprak);
      }
   }
   
   

void setup() {
  
  Serial.begin(9600);

  pinMode(sagileri, INPUT);
  pinMode(saggeri, INPUT);
  pinMode(solileri, INPUT);
  pinMode(solgeri, INPUT);
}

void loop() {
 
  char data = Serial.read();
  
  switch(data){
    
    case 'i':
        ileri();
        break;
    case 'g':
        geri();
        break;   
   case 'r':
        sag();
        break; 
   case 'l':
        sol();
        break; 
        
   case 'd':
        dur();
        break;      
        
  
  }  
}
