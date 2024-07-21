#include <Control_Surface.h>
// For the Arduino Leonardo?
// USBMIDI_Interface midi; 

HairlessMIDI_Interface midi;
// USBMIDI referenced in control surface library

// Controller Board: Raspberry Pi Pico

// Add class creation from MIDI CC List and library documentation
// Consider making new class for distance sensor? 

//Instantiate CCButton object
NoteButton button {
  // Referece pin number
  2, 
  // MIDI address 
  {MIDI_Notes::C[4], Channel_1}
};

void setup() {
  // Initialize control surface with all parameters and classes
  Control_Surface.begin();
}

void loop() {
  // Update control surface 
  Control_Surface.loop();
}
