#ifndef SOUND_H_
#define SOUND_H_
// http://www.phy.mtu.edu/~suits/notefreqs.html

#include <Arduino.h>

static const int num_pins = 6;
static const int pins[num_pins] = {2,3,4,5,6,7};
static const int steps = 20;

class Sound
{
  public:
  /* GENERAL USE */
  Sound();
  void PlayNote(float freq, float beat);
  void SetBPM(float b);
  
  void C0(float beat);
  void Cs0(float beat);
  void D0(float beat);
  void Ds0(float beat);
  void E0(float beat);
  void F0(float beat);
  void Fs0(float beat);
  void G0(float beat);
  void Gs0(float beat);
  void A0(float beat);
  void As0(float beat);
  void BB0(float beat); // Special Name
  void C1(float beat);
  void Cs1(float beat);
  void D1(float beat);
  void Ds1(float beat);
  void E1(float beat);
  void F1(float beat);
  void Fs1(float beat);
  void G1(float beat);
  void Gs1(float beat);
  void A1(float beat);
  void As1(float beat);
  void BB1(float beat); //Special name
  void C2(float beat);
  void Cs2(float beat);
  void D2(float beat);
  void Ds2(float beat);
  void E2(float beat);
  void F2(float beat);
  void Fs2(float beat);
  void G2(float beat);
  void Gs2(float beat);
  void A2(float beat);
  void As2(float beat);
  void B2(float beat);
  void C3(float beat);
  void Cs3(float beat);
  void D3(float beat);
  void Ds3(float beat);
  void E3(float beat);
  void F3(float beat);
  void Fs3(float beat);
  void G3(float beat);
  void Gs3(float beat);
  void A3(float beat);
  void As3(float beat);
  void B3(float beat);
  void C4(float beat);
  void Cs4(float beat);
  void D4(float beat);
  void Ds4(float beat);
  void E4(float beat);
  void F4(float beat);
  void Fs4(float beat);
  void G4(float beat);
  void Gs4(float beat);
  void A4(float beat);
  void As4(float beat);
  void B4(float beat);
  
  
 
  /* INNER CODE */
  public:
  static const float quarter = 1.0;
  static const float half = 2.0;
  static const float dothalf = 3.0;
  static const float whole = 4.0;
  static const float eigth = 0.5;
  static const float sixteenth = 0.25;
  static const float doteigth = 0.75;
  static const float tripeigth = 0.33;
 
  private:
  float bpm;
  byte outputs[steps]; 
  
 
  void FillNotes(float freq, float del);
  void WritePins(byte x);
  float FastSin(float x); // rad
  float Time(float bpm, float beat);
  void PlayBySemitone(int n, float beat);
};

#endif
