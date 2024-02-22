#if CONFIG_SPIRAM_SUPPORT
void setup() {
  Serial.begin(115200);
  // PSRAMを初期化
  if (psramFound()) {
    Serial.println("PSRAM is found.");
    size_t psramSize = ESP.getPsramSize();
    Serial.print("PSRAM size: ");
    Serial.print(psramSize / (1024 * 1024));
    Serial.println(" MB");
  } else {
    Serial.println("PSRAM is not found.");
  }
}

void loop() {
  // ここでは何もしません。
}
#endif