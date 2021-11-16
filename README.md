A feladat elfogadásának feltételei:

- hiba nélkül lefordul (warning sem lehet) és futásidejű hiba nélkül lefut,

- az elvárt eredményt állítja elő,

- a feladathoz illeszkedő algoritmust helyesen alkalmazza,

- nem használ globális változót,

- a kód tabulált, jól olvasható; a változónevek beszédesek,

- a kód megfelel a feladatleírásnak,

- ellenőrzött adatbeolvasásnál a beolvasás sikerességét és a beolvasott érték helyességét is ellenőrzi,

- a tömb méretét kifejező konstans csak a változó deklarációs részben szerepel,

- az elkülönülő feladatrészeket önálló függvényként valósítja meg, betartva a command-query separation elvet.

A feladat megoldásának szintindeje: 40 perc

Feladat:

Írjon C programot, amely beolvassa egy postahivatalban feladni kívánt 10 csomag súlyát (kg-ban, legyenek 1 és 25 kg között, egy tizedesjegy pontossággal) és azokat elhelyezi egy megfelelő tömb egymás utáni elemeiben.

Oldja meg az alábbi feladatokat:

1. Írjon egy függvényt, amely a paraméterében kapott súly alapján kiszámolja és visszaadja a csomag bérmentesítési díját, az alábbi szabályok alapján: 2 kg-ig 1630 Ft, 5 kg-ig 1850 Ft, 10 kg-ig 1960 Ft, 20 kg-ig 2180 Ft a bérmentesítés díja. 20 kg-nál súlyosabb csomagot nem vesz fel a posta, ilyenkor a bérmentesítési díj legyen 0.

2. A fenti függvény használatával írja ki minden csomagra a sorszámát és a bérmentesítési díjat.

3. Írja ki, hogy hány csomagot nem vett fel a posta.