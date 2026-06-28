// -------------------- Pin Definitions --------------------
const int relayPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};

const int INpin = 10;
const int OUTpin = 11;

// -------------------- Variables --------------------
int COUNT = 0;

int currentIN = HIGH;
int previousIN = HIGH;

int currentOUT = HIGH;
int previousOUT = HIGH;

// -------------------- Setup --------------------
void setup()
{
  Serial.begin(9600);

  pinMode(INpin, INPUT);
  pinMode(OUTpin, INPUT);

  for (int i = 0; i < 8; i++)
  {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], HIGH);   // Relay OFF (Active LOW)
  }

  Serial.println("Occupancy Monitoring System Started");
}

// -------------------- Loop --------------------
void loop()
{
  currentIN = digitalRead(INpin);
  currentOUT = digitalRead(OUTpin);

  // -------- Person Entered --------
  if (previousIN == HIGH && currentIN == LOW)
  {
    // Limit set to 8 to match the 8-channel relay module used in this prototype.
    if (COUNT < 8)
      COUNT++;

    Serial.println("------------------------");
    Serial.println("Person Entered");
    Serial.print("Occupancy = ");
    Serial.println(COUNT);

    updateRelays();

    delay(300);      // Debounce
  }

  // -------- Person Exited --------
  if (previousOUT == HIGH && currentOUT == LOW)
  {
    if (COUNT > 0)
      COUNT--;

    Serial.println("------------------------");
    Serial.println("Person Exited");
    Serial.print("Occupancy = ");
    Serial.println(COUNT);

    updateRelays();

    delay(300);      // Debounce
  }

  previousIN = currentIN;
  previousOUT = currentOUT;
}

// -------------------- Relay Control --------------------
void updateRelays()
{
  for (int i = 0; i < 8; i++)
  {
    if (i < COUNT)
      digitalWrite(relayPins[i], LOW);    // Relay ON
    else
      digitalWrite(relayPins[i], HIGH);   // Relay OFF
  }
}