Zadanie tak jak poprzednie bez uzycia PHP, wykonane w c,c,c

Kolejność odpalania:

w folderze "2"
cc -o calcserver calcserver.c soapC.c soapServer.c -lgsoap
./calcserver

w folderze "3"
cc -o calcclient2 calcclient2.c soapC.c soapClient.c -lgsoap

w folderze "1"
cc -o calcclient calcclient.c soapC.c soapClient.c -lgsoap
./calcclient