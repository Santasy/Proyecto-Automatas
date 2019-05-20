CC=g++
CFLAGS=-Wall -std=c++14

all: m_core
	@echo "Se ha generado programa: ./core"

# Después de los dos puntos, son archivos requisitos.
# (de no actualizarse, no compila de nuevo).
m_core: source/Core.cpp source/nodo.h
	@${CC} ${CFLAGS} -o core 'source/Core.cpp'

setup:
	@echo "Aun no se registran librerias adicionales"