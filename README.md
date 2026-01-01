# Hallo Welt – Arduino Nano ESP32

Dieses Projekt ist ein **absolutes Einsteiger-Projekt** ("Hallo Welt")
für den **Arduino Nano ESP32**.

Ziel dieses Projekts ist es:
- zu prüfen, ob die Entwicklungsumgebung korrekt eingerichtet ist
- Code zu kompilieren
- Code auf das Board hochzuladen
- eine sichtbare Reaktion (LED blinken) zu erhalten

Wenn das funktioniert, bist du **bereit für echte Projekte**.

---

## 🧠 Was macht dieses Projekt?

- Es nutzt die **eingebaute LED** des Arduino Nano ESP32
- Die LED wird regelmäßig **ein- und ausgeschaltet**
- Das ist das Mikrocontroller-Gegenstück zu "Hello World"

---

## 🧰 Voraussetzungen

### Hardware
- Arduino Nano ESP32
- USB-Datenkabel (kein reines Ladekabel)

### Software
- Windows / Linux / macOS
- Visual Studio Code
- PlatformIO Erweiterung für VS Code

---

## 📁 Projektstruktur (kurz erklärt)

```
HalloWelt/
│
├── .gitignore
├── platformio.ini
│
├── src/
│   └── main.cpp   ← HIER ist der eigentliche Code
│
├── include/       ← Für spätere Header-Dateien
├── lib/           ← Für spätere Bibliotheken
└── test/          ← Für Tests (jetzt leer)
```

👉 **Wichtig für Anfänger:**
Du arbeitest fast immer **nur in `src/main.cpp`**.

---

## ⚙️ platformio.ini – was steht hier drin?

Diese Datei sagt PlatformIO:
- welches Board benutzt wird
- welche Plattform
- welches Framework

Beispiel:

```ini
[env:arduino_nano_esp32]
platform = espressif32
board = arduino_nano_esp32
framework = arduino
```

---

## 🧩 main.cpp – der Code (einfach erklärt)

```cpp
#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```

---

## ▶️ Projekt bauen und hochladen

1. Arduino per USB anschließen
2. In VS Code unten links:
   - ✔️ **Build**
   - ➡️ **Upload**
3. LED auf dem Board blinkt

Wenn die LED blinkt: **Erfolg 🎉**

---

## 🛠️ Installation (von GitHub bis Arduino Nano ESP32)

### 1️⃣ Projekt von GitHub herunterladen

#### Variante A – mit Git
```bash
git clone https://github.com/DEIN_GITHUB_NAME/Hallo-Welt-Arduino-Nano-ESP32.git
```

#### Variante B – ohne Git (ZIP)
- GitHub → Code → Download ZIP
- ZIP entpacken

---

### 2️⃣ Projekt in VS Code öffnen
- VS Code → Datei → Ordner öffnen
- Projektordner auswählen

---

### 3️⃣ PlatformIO installieren
- VS Code → Extensions
- „PlatformIO IDE“ installieren
- VS Code neu starten

---

### 4️⃣ Arduino anschließen
- Arduino Nano ESP32 per USB anschließen

---

### 5️⃣ Build & Upload
- ✔️ Build
- ➡️ Upload

---

### 6️⃣ Ergebnis
- LED blinkt → **fertig** 🎉

---

## 🚀 Nächste Schritte

- Blink-Zeit ändern
- Serielle Ausgabe hinzufügen
- Sensoren anschließen
- WLAN-Funktionen nutzen

Dieses Projekt ist die **Basis für alles Weitere**.
