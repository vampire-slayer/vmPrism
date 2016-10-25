run:
	g++ vmPrism/FIFOPolicyRun.cpp vmPrism/FIFOPolicy.cpp -std=c++11 -o vmPrismRun
	./vmPrismRun
	rm -rf ./vmPrismRun
