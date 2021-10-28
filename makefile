user_name = $(shell whoami)
output: forjs.cpp
	/Users/$(user_name)/Programs/emsdk/upstream/emscripten/emcc --bind forjs.cpp -s INITIAL_MEMORY=20971520 -s WASM=1 -o output.js -std=c++14
#パス通すのがめんどくさかった許して