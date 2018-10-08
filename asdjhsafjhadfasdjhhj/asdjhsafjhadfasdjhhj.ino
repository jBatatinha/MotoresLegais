int in1=2;
int in2=3;
int in3=4;
int in4=5;

void girarHorario() {
  digitalWrite (in1, HIGH);
  digitalWrite (in2, LOW);
  digitalWrite (in3, HIGH);
  digitalWrite (in4, LOW);
}

void girarAntiHorario() {
  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
  digitalWrite (in4, HIGH);
  digitalWrite (in3, LOW);
}
void HorarioAntiHorario() {
  digitalWrite (in2, LOW);
  digitalWrite (in1, HIGH);
  digitalWrite (in4, HIGH);
  digitalWrite (in3, LOW);
}
void AntiHorarioHorario() {
  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
  digitalWrite (in3, HIGH);
  digitalWrite (in4, LOW);
}

void parar() {
  digitalWrite (in1, HIGH);
  digitalWrite (in2, HIGH);
  digitalWrite (in3, HIGH);
  digitalWrite (in4, HIGH);  
}
void setup() {
  // put your setup code here, to run once:
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);

 
}

void loop() {
  // put your main code here, to run repeatedly
  parar ();
  delay (1000);
  girarHorario ();
  delay (5000);
  parar ();
  delay (1000);
  girarAntiHorario ();
  delay (5000);
  parar ();
  delay (1000);
  HorarioAntiHorario ();
  delay (5000);
  parar ();
  delay (1000);
  AntiHorarioHorario ();
  delay (5000);
  parar ();
  delay (1000);
}



