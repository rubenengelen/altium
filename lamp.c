void loop() {
 // put your main code here, to run repeatedly:
 if (stringComplete)
 {
 	randomOn = false;
 	waveOn = false;
 	warningOn = false;
 	switch (inputString.charAt(0))
 	{
 		case 'r': //Red
 			inputString.remove(0, 1);
 			redValue = inputString.toInt();
 		break;
 		case 'g': //Green
 			inputString.remove(0, 1);
 			greenValue = inputString.toInt();
 		break;
 		case 'b': //Blue
 			inputString.remove(0, 1);
 			blueValue = inputString.toInt();
 		break;
 		case 'w': //White
 			inputString.remove(0, 1);
 			whiteValue = inputString.toInt();
 		break;
 		case 'q': //Random
 			randomOn = true;
		break;
 		case '~': //Wave
 			waveOn = true;
 		break;
 		case 'i': //warning
 			warningOn = true;
 		break;
 		case 'o': //Off
 			redValue = 0;
 			greenValue = 0;
 			blueValue = 0;
 			whiteValue = 0;
 		break;
 		default:
 		break;
 	}
 	//reset input data
 	inputString = "";
 	stringComplete = false;
 }
 