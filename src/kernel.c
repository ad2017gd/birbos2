#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain(){
	isr_install();
	print("\n\n\n\n\n\n\n\n\n");
	print("Starting version 1.0-birbOS");
	print("\n\n");
	print("oooooo____oo__________oo_________oooo_____ooooo__\n");
	print("oo____oo______oo_ooo__oooooo___oo____oo__oo___oo_\n");
	print("oooooooo__oo__ooo___o_oo___oo_oo______oo__oo_____\n");
	print("oo____oo__oo__oo______oo___oo_oo______oo____oo___\n");
	print("oo____oo__oo__oo______oo___oo__oo____oo__oo___oo_\n");
	print("ooooooo__oooo_oo______oooooo_____oooo_____ooooo__\n");
	print("____________________________________________________\n");
	print("\n\nWelcome to birbOS (this build is broken and incomplete)\n");
	print("\nNovoBOT bot\n");
    	launch_shell(0);
}
