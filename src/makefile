# Lista de todos os arquivos-fonte
SRC_FILES = ./main.cpp ./jogo.cpp ./ente.cpp ./fases/construtorfase.cpp ./fases/fase.cpp ./fases/florestaverde.cpp ./fases/florestavermelha.cpp ./gerenciadores/colisao.cpp ./gerenciadores/gerenciadoreventos.cpp ./gerenciadores/graficos.cpp ./gerenciadores/gerenciadorestados/construtorestado.cpp ./gerenciadores/gerenciadorestados/estado.cpp ./gerenciadores/gerenciadorestados/estadojogar.cpp ./gerenciadores/gerenciadorestados/gerenciadorestados.cpp

# Gera os nomes dos objetos correspondentes
OBJ_FILES = $(patsubst %.cpp, %.o, $(SRC_FILES))

# Nome do executável
EXECUTABLE = app

# Alvo principal para compilação e vinculação
all: $(EXECUTABLE)

# Compilação de cada arquivo-fonte
%.o: %.cpp
	g++ -c $< -o $@

# Vinculação de todos os objetos
$(EXECUTABLE): $(OBJ_FILES)
	g++ $^ -o $@ -lsfml-graphics -lsfml-window -lsfml-system

# Regra para rodar o programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Limpar objetos e executável
clean:
	rm -f $(OBJ_FILES) $(EXECUTABLE)
