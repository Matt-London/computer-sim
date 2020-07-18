computer: buildAlert include/logicGates.h src/logic/logicGates.c build/logicGates.o
		gcc src/computer.c build/*.o -o bin/computer

buildAlert:
		@echo "🚧 Building..."

build/Chess.o: src/computer.c
		gcc -c src/computer.c -o build/computer.o

build/logicGates.o: include/logicGates.h src/logic/logicGates.c
		gcc -c src/logic/logicGates.c -o build/logicGates.o

run: computer clean
		@echo "🚀 Executing..."
			@echo ""
				@echo "====================="
					@echo ""
						@./bin/computer

clean:
		@echo "🧹 Cleaning..."
		rm build/*.o
