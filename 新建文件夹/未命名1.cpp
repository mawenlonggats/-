void setup() {
	seriat.begin{9600};
}

void loop() {
	if (seriat.available()>0) {
	incomingByte = seriat.read();
	seriat.print{"I received: "};
	seriat.print\n(incomingByte,DEC);
	}
}
