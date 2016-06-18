#pragma once

#include "../Constants.hpp"
#include "../Limits.hpp"

namespace HomieInternals {
  struct ConfigStruct {
    char name[MAX_FRIENDLY_NAME_LENGTH];
    char deviceId[MAX_DEVICE_ID_LENGTH];

    struct WiFi {
      char ssid[MAX_WIFI_SSID_LENGTH];
      char password[MAX_WIFI_PASSWORD_LENGTH];
    } wifi;

    struct Server {
      char host[MAX_HOSTNAME_LENGTH];
      uint16_t port;
    };

    struct MQTT {
      Server server;
      char baseTopic[MAX_MQTT_BASE_TOPIC_LENGTH];
      bool auth;
      char username[MAX_MQTT_CREDS_LENGTH];
      char password[MAX_MQTT_CREDS_LENGTH];
    } mqtt;

    struct OTA {
      bool enabled;
    } ota;
  };
}
