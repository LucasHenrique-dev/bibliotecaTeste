build:
	easycython fib_cy.py
	python setup.py build_ext -if
	easycython *.pyx

clean:
	@echo "Passando a vassoura"
	rm -rf __pycache__
	rm -f *.so
	rm -f f*.c
	rm -rf build
	rm -f *.html
	rm -f prof*
	rm -f *.pyd