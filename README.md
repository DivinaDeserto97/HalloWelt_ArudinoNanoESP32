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
├── .pio/            ← wird automatisch von PlatformIO erstellt
├── .vscode/         ← VS Code Einstellungen (optional)
├── include/         ← Für spätere Header-Dateien
│   └── README.md    ← Für Tests (jetzt leer) 
│
├── lib/             ← Für spätere Bibliotheken
│   └── README.md    ← Für Tests (jetzt leer) 
│
├── src/
│   └── main.cpp     ← HIER ist der eigentliche Code
│
├── scripts/
│   └── load_env.py  ← liest ".env" und gibt Werte an den Compiler weiter
│
├── test/            ← später für Tests
│   └── README.md
│
├── .env               ← DEINE lokalen Werte (nicht ins Git!)
├── .gitignore         ← sperrt z.B. .env
├── platformio.ini     ← PlatformIO Konfiguration
└── README.md          ← Für Tests (jetzt leer)
```


👉 **Wichtig für Anfänger:**  
Du arbeitest fast immer **nur in `src/main.cpp`** und in **`.env`**.

---

## 🔒 .env – Blink-Zeiten einstellen (ohne Code ändern)

Erstelle / bearbeite die Datei **`.env`** im Projekt-Root:

```env
LED_ON_MS=250
LED_OFF_MS=500
```

---

## ⚙️ platformio.ini – was steht hier drin?

⚙️ platformio.ini – was steht hier drin?

Diese Datei sagt PlatformIO:

welches Board benutzt wird

welche Plattform

welches Framework

wie hochgeladen wird

dass .env über ein Script geladen wird

Wichtig: Der Nano ESP32 kann beim Reset den COM-Port wechseln.
Darum ist es stabiler, wenn man über HWID (VID/PID) arbeitet.

Beispiel (verkürzt):

```ini
[env:arduino_nano_esp32]
platform = espressif32
board = arduino_nano_esp32
framework = arduino

upload_protocol = esptool
upload_port = HWID:2341:0070
monitor_port = HWID:2341:0070
monitor_speed = 115200

extra_scripts = pre:scripts/load_env.py
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
🔎 COM-Port / Upload-Probleme (kurz)

Wenn der Upload wegen COM/Port-Fehlern zickt:

1) Gerät anzeigen lassen (Windows)

Im VS Code Terminal:
```bash
C:\Users\tobia\.platformio\penv\Scripts\platformio.exe device list
```
2) Wichtig

- Serial Monitor schließen, bevor du uploadest

- anderes USB-Datenkabel probieren, wenn es wackelt

- anderer USB-Port am PC (hinten oft stabiler)
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
