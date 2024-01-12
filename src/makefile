# Lista de todos os arquivos-fonte
SRC_FILES = ./main.cpp ./jogo.cpp ./ente.cpp ./fases/fase.cpp ./fases/florestaverde.cpp ./fases/florestavermelha.cpp ./gerenciadores/colisao.cpp ./gerenciadores/gerenciadoreventos.cpp ./gerenciadores/graficos.cpp ./gerenciadores/gerenciadorestados/gerenciadorestados.cpp ./entidades/entidade.cpp ./entidades/fundo.cpp ./entidades/gosma.cpp ./entidades/obstaculos/agua.cpp ./entidades/obstaculos/espinho.cpp ./entidades/obstaculos/obstaculo.cpp ./entidades/obstaculos/pedra.cpp ./entidades/obstaculos/plataforma.cpp ./entidades/personagens/personagem.cpp ./entidades/personagens/inimigos/abelha.cpp ./entidades/personagens/inimigos/caracol.cpp ./entidades/personagens/inimigos/inimigo.cpp ./entidades/personagens/inimigos/javali.cpp ./entidades/personagens/jogadores/explorador.cpp ./entidades/personagens/jogadores/cacador.cpp ./entidades/personagens/jogadores/jogador.cpp ./listas/ListaEntidades.cpp ./menus/Menu.cpp ./menus/MenuEscolha.cpp ./menus/MenuInterno.cpp ./menus/MenuLeaderboard.cpp ./menus/MenuPrincipal.cpp 

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
