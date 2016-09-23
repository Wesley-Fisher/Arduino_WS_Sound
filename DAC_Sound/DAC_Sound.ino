#include <Arduino.h>
#include "Sound.h"

Sound sound;

void setup()
{
  
  
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
  
  sound = Sound();
}

void loop()
{
  delay(1000);
  //HappyBirthday();
  //Tetris();
  Mario();
}

void Mario()
{
  sound.SetBPM(90);
  
  sound.E3(sound.sixteenth);
  sound.E3(sound.eigth);
  sound.E3(sound.eigth);
  sound.C3(sound.sixteenth);
  sound.E3(sound.eigth);
  sound.G3(sound.eigth);
  sound.PlayNote(1, sound.eigth);
  sound.G2(sound.eigth);
  sound.PlayNote(1, sound.eigth);


  sound.C3(sound.doteigth);
  sound.G2(sound.doteigth);
  sound.E2(sound.eigth);
  sound.PlayNote(0, sound.sixteenth);
  sound.A2(sound.eigth);
  sound.B2(sound.eigth);
  sound.As2(sound.sixteenth);
  sound.A2(sound.eigth);

  sound.G2(sound.tripeigth);
  sound.E3(sound.tripeigth);
  sound.G3(sound.tripeigth);
  sound.A3(sound.eigth);
  sound.F3(sound.sixteenth);
  sound.G3(sound.eigth);
  sound.E3(sound.eigth);
  sound.C3(sound.sixteenth);
  sound.D3(sound.sixteenth);
  sound.B2(sound.eigth);


  sound.C3(sound.doteigth);
  sound.G2(sound.doteigth);
  sound.E2(sound.eigth);
  sound.PlayNote(0, sound.sixteenth);
  sound.A2(sound.eigth);
  sound.B2(sound.eigth);
  sound.As2(sound.sixteenth);
  sound.A2(sound.eigth);

  sound.G2(sound.tripeigth);
  sound.E3(sound.tripeigth);
  sound.G3(sound.tripeigth);
  sound.A3(sound.eigth);
  sound.F3(sound.sixteenth);
  sound.G3(sound.eigth);
  sound.E3(sound.eigth);
  sound.C3(sound.sixteenth);
  sound.D3(sound.sixteenth);
  sound.B2(sound.eigth);

  sound.PlayNote(0, sound.eigth);
  sound.G3(sound.sixteenth);
  sound.Fs3(sound.sixteenth);
  sound.F3(sound.sixteenth);
  sound.Ds3(sound.eigth);
  sound.E3(sound.doteigth);
  sound.G2(sound.sixteenth);
  sound.A2(sound.sixteenth);
  sound.C3(sound.eigth);
  sound.A2(sound.sixteenth);
  sound.C3(sound.sixteenth);
  sound.D3(sound.sixteenth);

  sound.PlayNote(0, sound.eigth);
  sound.G3(sound.sixteenth);
  sound.Fs3(sound.sixteenth);
  sound.F3(sound.sixteenth);
  sound.Ds3(sound.eigth);
  sound.E3(sound.eigth);
  sound.C4(sound.eigth);
  sound.C4(sound.sixteenth);
  sound.C4(sound.eigth);
  sound.PlayNote(0, sound.eigth);


  sound.PlayNote(0, sound.eigth);
  sound.G3(sound.sixteenth);
  sound.Fs3(sound.sixteenth);
  sound.F3(sound.sixteenth);
  sound.Ds3(sound.eigth);
  sound.E3(sound.doteigth);
  sound.G2(sound.sixteenth);
  sound.A2(sound.sixteenth);
  sound.C3(sound.eigth);
  sound.A2(sound.sixteenth);
  sound.C3(sound.sixteenth);
  sound.D3(sound.sixteenth);

  sound.PlayNote(0, sound.eigth);
  sound.Ds3(sound.eigth);
  sound.PlayNote(0, sound.sixteenth);
  sound.D3(sound.eigth);
  sound.PlayNote(0, sound.sixteenth);
  sound.C3(sound.eigth);
  sound.PlayNote(0, sound.eigth);
}

void Tetris()
{
  sound.SetBPM(144);
  
  sound.E3(sound.quarter);
  sound.B2(sound.eigth);
  sound.C3(sound.eigth);
  sound.D3(sound.quarter);
  sound.C3(sound.eigth);
  sound.B2(sound.eigth);
  
  sound.A2(sound.quarter);
  sound.A2(sound.eigth);
  sound.C3(sound.eigth);
  sound.E3(sound.quarter);
  sound.D3(sound.eigth);
  sound.C3(sound.eigth);
  
  sound.B2(sound.doteigth);
  sound.C3(sound.eigth);
  sound.D3(sound.quarter);
  sound.E3(sound.quarter);
  
  sound.C3(sound.quarter);
  sound.A2(sound.quarter);
  sound.A2(sound.eigth);
  sound.A2(sound.eigth);
  sound.B2(sound.eigth);
  sound.C3(sound.eigth);
  
  sound.D3(sound.doteigth);
  sound.F3(sound.eigth);
  sound.A3(sound.quarter);
  sound.G3(sound.eigth);
  sound.F3(sound.eigth);
  
  sound.E3(sound.doteigth);
  sound.C3(sound.eigth);
  sound.E3(sound.quarter);
  sound.D3(sound.eigth);
  sound.C3(sound.eigth);
  
  sound.B2(sound.quarter);
  sound.B2(sound.eigth);
  sound.C3(sound.eigth);
  sound.D3(sound.quarter);
  sound.E3(sound.quarter);
  
  sound.C3(sound.quarter);
  sound.A2(sound.quarter);
  sound.A2(sound.quarter);
  sound.PlayNote(0, sound.quarter);
}

void HappyBirthday()
{
  const int bpm = 100;
  const int n = 2;
  
  sound.SetBPM(bpm);
  
  sound.D2(sound.doteigth);
  sound.D2(sound.sixteenth);
  
  sound.E2(sound.quarter);
  sound.D2(sound.quarter);
  sound.G2(sound.quarter);
  
  sound.Fs2(sound.half);
  sound.D2(sound.doteigth);
  sound.D2(sound.sixteenth);
  
  sound.E2(sound.quarter);
  sound.D2(sound.quarter);
  sound.A2(sound.quarter);
  
  sound.G2(sound.half);
  sound.D2(sound.doteigth);
  sound.D2(sound.sixteenth);
  
  sound.D3(sound.quarter);
  sound.B2(sound.quarter);
  sound.G2(sound.quarter);
  
  sound.Fs2(sound.quarter);
  sound.E2(sound.quarter);
  sound.C3(sound.doteigth);
  sound.C3(sound.sixteenth);
  
  sound.B2(sound.quarter);
  sound.G2(sound.quarter);
  sound.A2(sound.quarter);
  
  sound.G2(sound.dothalf);
}



