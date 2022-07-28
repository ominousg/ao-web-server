# Argentum Online Web - Servidor
![License](https://img.shields.io/github/license/ominousg/ao-web-server) ![Issues](https://img.shields.io/github/issues/ominousg/ao-web-server.svg) [![Discord](https://badgen.net/badge/icon/discord?icon=discord&label)](https://discord.gg/)

Servidor para el AOWeb usando como base el [dakara-server](https://github.com/DakaraOnline/dakara-server) creado por AlejoLP (C++, Libevent, Boost) - es necesario agregarle los archivos del [ao-web-server-files](https://github.com/ominousg/aoweb-server-files) a la carpeta build como se muestra en el tutorial linkeado abajo. Este repositorio va de la mano con [ao-web-client](https://github.com/ominousg/ao-web-client).

[Tutorial sobre cómo conectar el cliente con el dakara-server en Ubuntu](https://www.youtube.com/watch?v=Xm2XIWiqPvs)

## Build

Se necesita CMake, Libevent2, y boost >= 1.49. ($ sudo apt install libevent-dev libboost-all-dev)

    mkdir build && cd build
    cmake ..
    make

