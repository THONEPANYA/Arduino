boolean num [10][7] = {0,0,0,0,0,0,1,
                      1,0,0,1,1,1,1,
                      0,0,1,0,0,1,0,
                      0,0,0,0,1,1,0,
                      1,0,0,1,1,0,0,
                      0,1,0,0,1,0,0,
                      0,1,0,0,0,0,0,
                      0,0,0,1,1,0,1,
                      0,0,0,0,0,0,0,
                      0,0,0,0,1,0,0
                      };

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  for (int x = 0; x <= 9; x++){
    show_num(x);
    digitalWrite(9, HIGH);
    delay(1500);
  }
}

void show_num(int a) {
  for(int i = 0; i <= 8; i++){
    digitalWrite(i, num [a][i-2]);
  }

}
