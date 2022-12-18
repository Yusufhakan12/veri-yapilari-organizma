all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Kuyruk.cpp -o ./lib/Kuyruk.o
	g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o	
	g++ -c -I "./include" ./src/DinamikDizi.cpp -o ./lib/DinamikDizi.o
	g++ -c -I "./include" ./src/Doku.cpp -o ./lib/Doku.o
	g++ -c -I "./include" ./src/hucre.cpp -o ./lib/Hucre.o
	g++ -c -I "./include" ./src/organ.cpp -o ./lib/organ.o
	g++ -c -I "./include" ./src/DokuDugum.cpp -o ./lib/DokuDugum.o
	g++ -c -I "./include" ./src/agacDugum.cpp -o ./lib/agacDugum.o
	g++ -c -I "./include" ./src/sistem.cpp -o ./lib/sistem.o
	g++ -c -I "./include" ./src/sistemDugum.cpp -o ./lib/sistemDugum.o
	g++ -c -I "./include" ./src/organizmaDugum.cpp -o ./lib/organizmaDugum.o
	g++ -c -I "./include" ./src/organizma.cpp -o ./lib/organizma.o
	g++ -c -I "./include" ./src/BagilAgacDugum.cpp -o ./lib/BagilAgacDugum.o
	g++ -c -I "./include" ./src/BagilAgac.cpp -o ./lib/BagilAgac.o
	g++ -c -I "./include" ./src/Yukseklik.cpp -o ./lib/Yukseklik.o


	

bagla:
	g++  ./lib/Radix.o ./lib/Kuyruk.o ./lib/main.o -o ./bin/program ./lib/Yukseklik.o  ./lib/DinamikDizi.o ./lib/Hucre.o ./lib/Doku.o ./lib/organ.o ./lib/agacDugum.o ./lib/DokuDugum.o  ./lib/sistemDugum.o   ./lib/sistem.o  ./lib/organizma.o ./lib/organizmaDugum.o  ./lib/BagilAgac.o  ./lib/BagilAgacDugum.o
calistir:
	./bin/program