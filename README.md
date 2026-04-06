# 🏥 LiverProTECHt Dashboard
**BMED 4602 | Capstone Project**

A real-time monitoring interface for ex-vivo liver perfusion. This system connects an ESP32 microcontroller to a web-based dashboard to track organ viability.

---

## 📂 Project Structure
* **/app**: Contains `index.html`. This is the visual "Frontend" of the project.
* **/firmware**: Contains the PlatformIO project.
    * `src/main.cpp`: The "Backend" logic (Wi-Fi setup, sensor reading, and web server).
    * `platformio.ini`: Configuration file and library dependencies.

---

## 🛠️ Setup Instructions

### 1. Visual Development (The App)
To edit the dashboard's look without needing the hardware:
1.  Open `/app/index.html` in VS Code.
2.  Right-click and select **"Open with Live Server"**.
3.  Any changes you save will refresh instantly in your browser.

### 2. Hardware Deployment (The Firmware)
To put the code on the ESP32:
1.  Open the `/firmware` folder in VS Code.
2.  Ensure the **PlatformIO** extension is installed.
3.  Connect your ESP32 via USB.
4.  Click the **Upload** icon (arrow) in the bottom blue bar.

---

## 📡 Wireless Connection
Once the ESP32 is powered on:
1.  Connect your device to Wi-Fi: **Liver-Monitor-A06**
2.  Password: **perfusion-tech**
3.  Open your browser and go to: `192.168.4.1`

---

## 📊 Monitored Parameters
| Parameter | Unit | Description |
| :--- | :--- | :--- |
| **Hepatic Pressure** | mmHg | Arterial inflow pressure |
| **Portal Pressure** | mmHg | Venous inflow pressure |
| **Oxygen** | % | Perfusate oxygen saturation |
| **Temperature** | °C | Internal liver temperature |
| **pH** | pH | Perfusate acidity/alkalinity |

---

## 🏗️ Technologies Used
* **C++ / Arduino**: Firmware logic.
* **HTML5 / CSS3 (Grid)**: Dashboard layout.
* **JavaScript**: Real-time data fetching (Asynchronous).
* **ESPAsyncWebServer**: Lightweight web hosting on ESP32.
* **ArduinoJson**: Data formatting.

---
*Note: This is a prototype developed for Georgia Tech BMED 4602. Not for clinical use.*
