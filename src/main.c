#include <stdio.h>

#include <emscripten/emscripten.h>
#include <emscripten/html5.h>

EM_JS(void, displayHelloWorld, (),{
	document.body.innerHTML = "Dzień dobry tutaj rakieta";
});

int main(void)
{
	
	printf("Dzień dobry tutaj rakieta\n");
	displayHelloWorld();
	return 0;
}
