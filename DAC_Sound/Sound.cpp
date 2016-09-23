#include "Sound.h"


Sound::Sound()
{
  for(int i =0; i < num_pins; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
}

void Sound::PlayNote(float freq, float beat)
{
  float time = Time(bpm, beat);
  int cycles = time * freq;  
  float period = 1.0/freq;
  
  float del = ((float)period / steps); //s
  int del_us = del * 1000000;
  
  float t1 = micros();
  WritePins(0);
  float t2 = micros();
  
  del_us = max(0, del_us - (t2 - t1));
  
  /*
  Serial.print("Time (s): ");
  Serial.println(time);
  Serial.print("Period (us): ");
  Serial.println(period*1000000);
  Serial.print("Delay(us): ");
  Serial.println(del * 1000000);
  Serial.print("Cycles :");
  Serial.println(cycles);
  */

  int limit_count = steps * cycles;
  FillNotes(freq, del);
  
  int i = 0;
  //Serial.print("Limit: ");
  //Serial.println(limit_count);
  for(int t = 0; t < limit_count; t++)
  {
    WritePins(outputs[i]);
    delayMicroseconds(del_us);
    i = (i + 1) % steps;
  }
  
  delay(10);
  //Serial.println();
}

void Sound::SetBPM(float b)
{
  bpm = b;
}

void Sound::FillNotes(float freq, float del)
{
  float const_term = del * 3.1415 * 2 * freq;
  for(int i = 0; i < steps; i++)
  {
    float t = i * const_term;
    byte note = (byte)((FastSin(t) + 1) * 127);
    outputs[i] = note;
    //Serial.println(note);
  }
}

void Sound::WritePins(byte x)
{
  boolean play;
  for(int i = 0; i < num_pins; i++)
  {
    play = ((1 << i) & x) != 0;
    
    if (play)
    {
      digitalWrite(pins[i], HIGH);
    }
    else
    {
      digitalWrite(pins[i], LOW);
    }
  }
}

float Sound::FastSin(float x) // rad
{
  long t1 = micros();
  float ret = sin(x);
  //x = x * 180 / 3.1415;
  //float ret = (short) 10000 * 4 * x * (180 - x) / (4050 - x * (180 - x));
  long t2 = micros();
  //Serial.println(t2 - t1);
  
  return ret;
}

float Sound::Time(float bpm, float beat)
{
  return (1/bpm) * 60 * beat;
}

void Sound::PlayBySemitone(int n, float beat)
{
  // http://www.phy.mtu.edu/~suits/NoteFreqCalcs.html
  PlayNote(440 *  pow(1.059463094359, n), beat);
}

/********************************/
void Sound::C0(float beat)
{
  PlayBySemitone(-57, beat);
}

void Sound::Cs0(float beat)
{
  PlayBySemitone(-56, beat);
}

void Sound::D0(float beat)
{
  PlayBySemitone(-55, beat);
}

void Sound::Ds0(float beat)
{
  PlayBySemitone(-54, beat);
}

void Sound::E0(float beat)
{
  PlayBySemitone(-53, beat);
}

void Sound::F0(float beat)
{
  PlayBySemitone(-52, beat);
}

void Sound::Fs0(float beat)
{
  PlayBySemitone(-51, beat);
}

void Sound::G0(float beat)
{
  PlayBySemitone(-50, beat);
}

void Sound::Gs0(float beat)
{
  PlayBySemitone(-49, beat);
}

void Sound::A0(float beat)
{
  PlayBySemitone(-48, beat);
}

void Sound::As0(float beat)
{
  PlayBySemitone(-47, beat);
}

void Sound::BB0(float beat)
{
  PlayBySemitone(-46, beat);
}

/********************************/
void Sound::C1(float beat)
{
  PlayBySemitone(-45, beat);
}

void Sound::Cs1(float beat)
{
  PlayBySemitone(-44, beat);
}

void Sound::D1(float beat)
{
  PlayBySemitone(-43, beat);
}

void Sound::Ds1(float beat)
{
  PlayBySemitone(-42, beat);
}

void Sound::E1(float beat)
{
  PlayBySemitone(-41, beat);
}

void Sound::F1(float beat)
{
  PlayBySemitone(-40, beat);
}

void Sound::Fs1(float beat)
{
  PlayBySemitone(-39, beat);
}

void Sound::G1(float beat)
{
  PlayBySemitone(-38, beat);
}

void Sound::Gs1(float beat)
{
  PlayBySemitone(-37, beat);
}

void Sound::A1(float beat)
{
  PlayBySemitone(-36, beat);
}

void Sound::As1(float beat)
{
  PlayBySemitone(-35, beat);
}

void Sound::BB1(float beat)
{
  PlayBySemitone(-34, beat);
}

/********************************/
void Sound::C2(float beat)
{
  PlayBySemitone(-33, beat);
}

void Sound::Cs2(float beat)
{
  PlayBySemitone(-32, beat);
}

void Sound::D2(float beat)
{
  PlayBySemitone(-31, beat);
}

void Sound::Ds2(float beat)
{
  PlayBySemitone(-30, beat);
}

void Sound::E2(float beat)
{
  PlayBySemitone(-29, beat);
}

void Sound::F2(float beat)
{
  PlayBySemitone(-28, beat);
}

void Sound::Fs2(float beat)
{
  PlayBySemitone(-27, beat);
}

void Sound::G2(float beat)
{
  PlayBySemitone(-26, beat);
}

void Sound::Gs2(float beat)
{
  PlayBySemitone(-25, beat);
}

void Sound::A2(float beat)
{
  PlayBySemitone(-24, beat);
}

void Sound::As2(float beat)
{
  PlayBySemitone(-23, beat);
}

void Sound::B2(float beat)
{
  PlayBySemitone(-22, beat);
}


/********************************/
void Sound::C3(float beat)
{
  PlayBySemitone(-21, beat);
}

void Sound::Cs3(float beat)
{
  PlayBySemitone(-20, beat);
}

void Sound::D3(float beat)
{
  PlayBySemitone(-19, beat);
}

void Sound::Ds3(float beat)
{
  PlayBySemitone(-18, beat);
}

void Sound::E3(float beat)
{
  PlayBySemitone(-17, beat);
}

void Sound::F3(float beat)
{
  PlayBySemitone(-16, beat);
}

void Sound::Fs3(float beat)
{
  PlayBySemitone(-15, beat);
}

void Sound::G3(float beat)
{
  PlayBySemitone(-14, beat);
}

void Sound::Gs3(float beat)
{
  PlayBySemitone(-13, beat);
}

void Sound::A3(float beat)
{
  PlayBySemitone(-12, beat);
}

void Sound::As3(float beat)
{
  PlayBySemitone(-11, beat);
}

void Sound::B3(float beat)
{
  PlayBySemitone(-10, beat);
}

/********************************/
void Sound::C4(float beat)
{
  PlayBySemitone(-9, beat);
}

void Sound::Cs4(float beat)
{
  PlayBySemitone(-8, beat);
}

void Sound::D4(float beat)
{
  PlayBySemitone(-7, beat);
}

void Sound::Ds4(float beat)
{
  PlayBySemitone(-6, beat);
}

void Sound::E4(float beat)
{
  PlayBySemitone(-5, beat);
}

void Sound::F4(float beat)
{
  PlayBySemitone(-4, beat);
}

void Sound::Fs4(float beat)
{
  PlayBySemitone(-3, beat);
}

void Sound::G4(float beat)
{
  PlayBySemitone(-2, beat);
}

void Sound::Gs4(float beat)
{
  PlayBySemitone(-1, beat);
}

void Sound::A4(float beat)
{
  PlayBySemitone(0, beat);
}

void Sound::As4(float beat)
{
  PlayBySemitone(1, beat);
}

void Sound::B4(float beat)
{
  PlayBySemitone(2, beat);
}
