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

## ▶️ Projekt bauen und hochladen (Kurzfassung)

1. Arduino per USB anschließen
2. In VS Code unten links:
   - ✔️ **Build**
   - ➡️ **Upload**
3. LED auf dem Board blinkt

Wenn die LED blinkt: **Erfolg 🎉**

---

## 📥 Clonen oder Download des Projekts

### Variante A – Repository clonen (empfohlen)

```bash
git clone https://github.com/DEIN_GITHUB_NAME/Hallo-Welt-Arduino-Nano-ESP32.git
```

Danach den Ordner in VS Code öffnen.

---

### Variante B – Download als ZIP

1. GitHub-Repository im Browser öffnen
2. **Code → Download ZIP** klicken
3. ZIP-Datei entpacken
4. Ordner z. B. nach `HalloWelt` verschieben

---

## 🛠️ Installation Arduino Nano ESP32

### 1️⃣ Projekt in Visual Studio Code öffnen
- VS Code starten
- **Datei → Ordner öffnen**
- Projektordner auswählen

⏳ Beim ersten Öffnen installiert PlatformIO automatisch benötigte Dateien.

---

### 2️⃣ PlatformIO installieren (falls noch nicht vorhanden)
- VS Code → **Extensions**
- Nach **PlatformIO IDE** suchen
- Installieren
- VS Code neu starten

---

### 3️⃣ Arduino Nano ESP32 anschließen
- Board per **USB-Datenkabel** anschließen
- Betriebssystem erkennt das Gerät automatisch

---

### 4️⃣ Projekt bauen (Build)
- In VS Code unten links auf **✔ Build** klicken
- Warten bis **SUCCESS** erscheint

---

### 5️⃣ Projekt hochladen (Upload)
- In VS Code unten links auf **➡️ Upload** klicken
- Upload abwarten
- Board startet automatisch neu

---

### 6️⃣ Ergebnis prüfen
- Eingebaute LED blinkt im 1‑Sekunden‑Takt

🎉 **Installation erfolgreich abgeschlossen**

---

## 🚀 Nächste Schritte

- Blink-Zeit ändern (`delay(500)`)
- Serielle Ausgabe hinzufügen
- Sensoren anschließen
- WLAN-Funktionen nutzen

Dieses Projekt ist die **Basis für alle weiteren Arduino‑Nano‑ESP32‑Projekte**.
