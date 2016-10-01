strtest: strfxns.c
	gcc strfxns.c -o strtest

clean:
	rm *~

run: strtest
	./strtest
