
(* TODO: Add your comment here *)
FUNCTION_BLOCK Name
	
	
	AnalogOUT := Scale(Config.LSV, Normalize(0,RAW,32768),Config.HSV);
	AnalogOUT := INT_TO_REAL( REAL_TO_INT(AnalogOUT*100))/100;(*Zaokr¹glenie wyjscia analogowego*)
	//AnalogOutSignal := Scale(0,Normalize(0,RAW,32768),20);

	AnalogOut10 := REAL_TO_INT(AnalogOUT*10);(*zaokr¹glenie wujscia INTx10*)
	AnalogOut100 := REAL_TO_INT(AnalogOUT*100);(*zaokraglenie wyjœcia INTx100*)
	CASE Config.Signal OF
		voltage0_10:
			AnalogOutSignal := INT_TO_REAL( REAL_TO_INT(Scale(0,RAW,32768)*10))/100;(*zaokr¹glenie analogowego sygna³u wyjœciowego*)
		milliamps0_20:
			AnalogOutSignal := INT_TO_REAL( REAL_TO_INT(Scale(0,RAW,32768)*20))/100;(*zaokr¹glenie analogowego sygna³u wyjœciowego*)			
		milliamps4_20:
		  	AnalogOutSignal := INT_TO_REAL( REAL_TO_INT(Scale(4,RAW,32768)*20))/100;(*zaokr¹glenie analogowego sygna³u wyjœciowego*)

	END_CASE;
	
END_FUNCTION_BLOCK

