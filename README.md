# LedBluetooth
Aplicación para encender y apagar un led vía Bluetooth.

## Instalación

Para poder replicar esta aplicación necesitas:


#### Hardware: 
* [Arduino](https://www.arduino.cc/en/Main/Software).
* [Modulo Bluetooth (HC-05/HC-06)](https://www.amazon.com/HC-05-Bluetooth-Pass-through-Wireless-Communication/dp/B01G9KSAF6/ref=sr_1_1?ie=UTF8&qid=1510103401&sr=8-1&keywords=hc05&dpID=514lQaYjuBL&preST=_SY300_QL70_&dpSrc=srch)
* [Led](https://www.amazon.com/Elegoo-Diffused-Assorted-Flashing-Arduino/dp/B0739RYXVC/ref=sr_1_3?s=electronics&ie=UTF8&qid=1510103463&sr=1-3&keywords=leds&dpID=51Vapd7eWML&preST=_SY300_QL70_&dpSrc=srch)

## Instrucciones
* Realizar la conexión como se indica en el Diagrama Esquemático.
* Cargar el programa que se encuentra en la carpeta LEDBluetooth en tu tarjeta.
* Instalar la app en tu dispositivo
* Hacer la vinculación del módulo con tu dispositivo android.
* Abrir la aplicación móvil.


## Capturas

Funcionamiento de la Aplicación

<img src="https://cloud.githubusercontent.com/assets/9124597/23526072/575ef11a-ff56-11e6-80a0-d95769f840cc.png" width="18%"></img> 
<img src="https://cloud.githubusercontent.com/assets/9124597/23526073/5760a758-ff56-11e6-813c-4a8f001232b5.png" width="18%"></img> 
<img src="https://cloud.githubusercontent.com/assets/9124597/23526071/575aaf1a-ff56-11e6-9f29-e7bb32f4b6bd.png" width="18%"></img> 
<img src="https://cloud.githubusercontent.com/assets/9124597/23526070/57528394-ff56-11e6-83a7-9c090e48e5cb.png" width="18%"></img> 
<img src="https://cloud.githubusercontent.com/assets/9124597/23526074/57611c1a-ff56-11e6-93af-f30aa86db465.png" width="18%"></img> 


## Diagrama de Conexión
Realizar la conexión de acuerdo al siguiente diagrama: 

Bluetooth:

    * vcc -> 5v/3.3v dependiendo del módulo.
    * gnd -> gnd
    * Tx -> Rx
    * Rx -> Tx
Led: 

    * Positivo del led (Más largo) -> pin 13 arduino
    * Negativo del led (Corto) -> gnd del arduino.
<img src="https://cloud.githubusercontent.com/assets/9124597/23526328/5166572a-ff57-11e6-9590-09765ff5e9bf.png" width="90%"></img> 

## Contribuciones

Por favor lee el archivo [CONTRIBUTING.md](https://gist.github.com/FernandaOchoa/a30e8d25fb89fa128730473b1ad44dbb) para más detalles sobre el código de conducta, y el proceso para enviarnos un pull request.

## Autores

* Esta aplicación esta basada del repositorio de RimpeyD, el diseño así como los esquemáticos y soluciones de bugs son contribuciones propias.
  * Fernanda Ochoa @imonsh [contributors] (https://github.com/FernandaOchoa/)
  * RimpeyD [contributors] (https://github.com/RimpeyD)

## License

This repository it's under Apache License.
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,  
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
