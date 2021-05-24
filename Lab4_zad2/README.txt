Nie mogłem połączyć C z php, zatem zrobiłem zadanie w wariancie c,c

w folderze "server"

cc -o calcserver calcserver.c soapC.c soapServer.c -lgsoap

./calcserver

w folderze "client"

cc -o calcclient calcclient.c soapC.c soapClient.c -lgsoap

./calcclient 

podac dane do zamienienia na hex 