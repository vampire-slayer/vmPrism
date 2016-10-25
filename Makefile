run:
	g++ vmPrism/FIFOPolicyRun.cpp vmPrism/FIFOPolicy.cpp -o vmPrismRun
	./vmPrismRun
	rm -rf ./vmPrismRun
