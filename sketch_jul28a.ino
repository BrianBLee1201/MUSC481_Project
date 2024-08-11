#include <Control_Surface.h>

// Create a Selectable with 10 options (0 to 9)
Selectable<10> mySelectable;

// Create an IncrementButton connected to pin 9
IncrementButton myIncrementButton(9);

// Create an IncrementSelector that ties the Selectable and IncrementButton together
IncrementSelector myIncrementSelector(mySelectable, myIncrementButton);

void setup() {
    Serial.begin(9600); // Start serial communication

    // Print the initial selection
    Serial.print("Initial Selection: ");
    Serial.println(mySelectable.getSelection()); // Use public method to get selection

    // Setup button handler for the IncrementButton
    myIncrementButton.onPress([]() {
        mySelectable.increment(); // Use public method to increment selection
        Serial.print("Current Selection: ");
        Serial.println(mySelectable.getSelection()); // Use public method to get updated selection
    });
}

void loop() {
    Control_Surface.update(); // Update Control Surface library
}
