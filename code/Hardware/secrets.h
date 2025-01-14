#include <pgmspace.h>
 
#define SECRET
 
const char WIFI_SSID[] = "Galaxy M21E6A1";               //Galaxy A50s06C7
const char WIFI_PASSWORD[] = "Hayanan300";           //harishanth@6

#define THINGNAME "hari"
 
int8_t TIME_ZONE = 5.5; //NYC(USA): -5 UTC
 
const char MQTT_HOST[] = "a2acc7p4itkz1x-ats.iot.eu-north-1.amazonaws.com";
 
 
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";
 
 
// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWjCCAkKgAwIBAgIVAMJWSTGMc0SA13ZbmZ0kdo9S22ASMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yNDAxMTMxMjE5
NTRaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCaAGplYGTSZ/BXO8Ad
YBv1f0oH2eiHnSZ03fKVqDi/FwuuTXwn+zFDvDCHECK5H3I80jvK1wHsrqWPNRjp
3mmc1nDfV1ADb3Qawd/GiDK9De80tY324rs/vmgyUGQcR4y3MTSPxWI750lj+4Yv
DrENZFgE/9oIk78p329SAnzmPMTqmJK/PPjlwEs1VSHPEwFvVBye3mDGtYIf1usD
ZwYFdhSlOoxPnyyqvhqsc7FCnfOkp1a/YzU5/bu0RGN2QjGU6eb7IDu6SHBsRV/d
Xdv/I6WMEx8rs4x3Z5lP3bxeJoDx0LZrsQN5xd21UUQwiZqPtVyk1lIBRqwSncXw
oFcFAgMBAAGjYDBeMB8GA1UdIwQYMBaAFAdx8Sn1S9G6o+DQNgHhLTxLTPZyMB0G
A1UdDgQWBBR+uOOMJSzadFZ8WmeGrE1Cs2YVMDAMBgNVHRMBAf8EAjAAMA4GA1Ud
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAaVt6iASDXhNw59JrhlqZpcXa
A65T8jawsjL7XjFHeiNtADbFd2wCWZI/RwzQPhzJlLpBXuDl8yj9szfTZCssTXFl
gZpaibCOcT6K2+XyBp54Msz5aCab4joPF0EjxCeqBPFvcuoabX9qo8a6p+l1ar/0
NDH8HWrxEARpWWidtIlHBwCo//p7Rj17L8tRU4CPoRZPsScCweQPgtpnHSeNvf4G
O9wHPiYEz0AfSnm0d6Y9PEDZECQn0IS5cwu7vLb/jmtfTirxSwGtKuJYbPXvS0AN
V8RQbHhcLvfrLKxuo7pQ57HBZkw13hodceMColeIZ9pxEZ04M1kj5/TaF6hekw==
-----END CERTIFICATE-----



)KEY";
 
 
// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEowIBAAKCAQEAmgBqZWBk0mfwVzvAHWAb9X9KB9noh50mdN3ylag4vxcLrk18
J/sxQ7wwhxAiuR9yPNI7ytcB7K6ljzUY6d5pnNZw31dQA290GsHfxogyvQ3vNLWN
9uK7P75oMlBkHEeMtzE0j8ViO+dJY/uGLw6xDWRYBP/aCJO/Kd9vUgJ85jzE6piS
vzz45cBLNVUhzxMBb1Qcnt5gxrWCH9brA2cGBXYUpTqMT58sqr4arHOxQp3zpKdW
v2M1Of27tERjdkIxlOnm+yA7ukhwbEVf3V3b/yOljBMfK7OMd2eZT928XiaA8dC2
a7EDecXdtVFEMImaj7VcpNZSAUasEp3F8KBXBQIDAQABAoIBADxhE1YB8CWqiMm6
7HzX9L5RFNZ1Mj0ReUVyy6yvkughAfxp9ta6Hrue6ivaQLLySFjeWIETwXZplxHJ
0KXJBQFv9jsqwX1HUm83OiRdu/7xmqrA0BNPG/lHDxVC/a00xFAC48fGrNgtu1GP
CTIkAXjtsbDsGzEntFiXeM7fmNavuxY2LZ8zI9Nhno64GW5nuDOoQRll8cFJbqix
kpM/2LeB9efxdvwYZeZRdCoxQ+JK/sj6s3h4WKFfTcwwNxZBTig33F0GjG62pE9Z
glLBZBTyqOGXVpUqyWCZicPEG+U+9uRt6NH2PuIsqUphq6SqS8KiYNqhlvlLWrAN
jGA9XGECgYEAxz8lq90sHRR/9ZY7XKz8jhU93SpEGZcOBy7cgcgAGA+5mvuWkLL8
PPZ2k7pWi4ANloZuMN2EDg9ZnZGyQXXpj6ltDchVv9+FDRHInYd9BxGNQuGd7x8W
HwQ0NqAae9a6PQLGNlaIDl2nXQsckXVgJ8lzy74GdP+RDJgfc+baZa0CgYEAxd4M
ZNoRYu5HdWj+sGUjKtZUzuL+GJtQFckS7WnOPxhkDyiqXCNXvtQT7wsB1oxi3KAJ
YXgviy2hciiHUff5Lr33aGXsDf1YGyGuEcSewjG3mpX4ulIz+TKSR5qh46Zt41F/
ZN/6CHvWp5Hvsall/9d1/JJrsu8YYvqbDLAJ8bkCgYEAxcTlRJlNfzPo60EKfSvr
p7Bn7o5UeD4am4ClOWDmzvtU1QQi6E/w1SYifvH3k5IwapfW6kQGHtqXrjJ/CEDc
609Vwtd2XfSkoVtkkRB6RrjiSV+fH0nw8CqBFTOH9iImTAbj7e2oMPI+/LjZy3wB
TJzGhpaA3EMMm76ngajEYSUCgYAod0f7nClwHSEaHvXvZ0+w5BKGGSA0MhdHzU6E
pV3bw4Y7H2rv2v6H9WF6QrsGgMF7M3OXrneytAtPiIBcQCWC7LDbdfS3y7coHVQ3
KAn71yUghUlP+Z3Neg02faZcI15X3gP6wl+lOoZk0NC/edB1aUAk/mDuQD2xiGUL
TDlMaQKBgGkTnNbFccLttlYgEGsCXktqmUKUHITdbbG2Gw+CPcL5LhZ083ETT675
ED6mdishuGmGNb3SoJGL/0E4tGILIlTD0HkToSUoNkR/pN4ysi8QxnYawHCOGDpx
zWTqn3AxsbE84aH9Akbld8nZvcLkQtkg0R5dmyhehMYuqDW9/2nA
-----END RSA PRIVATE KEY-----




)KEY";
