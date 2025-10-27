#define A 11
#define B 10
#define C 9
#define D 8
int dtime=690;

 
#define NUMBER_OF_STEPS_PER_REV 2048

void setup(){
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
}

void write(int a,int b,int c,int d){
digitalWrite(A,a);
digitalWrite(B,b);
digitalWrite(C,c);
digitalWrite(D,d);
}

void onestep(){
write(1,0,0,1);
delayMicroseconds(dtime);
write(0,0,0,1);
delayMicroseconds(dtime);
write(0,0,1,1);
delayMicroseconds(dtime);
write(0,0,1,0);
delayMicroseconds(dtime);
write(0,1,1,0);
delayMicroseconds(dtime);
write(0,1,0,0);
delayMicroseconds(dtime);
write(1,1,0,0);
delayMicroseconds(dtime);
write(1,0,0,0);
delayMicroseconds(dtime);

}

void loop(){
int i;
i=0;
while(i<NUMBER_OF_STEPS_PER_REV){
onestep();
i++;
}
}
