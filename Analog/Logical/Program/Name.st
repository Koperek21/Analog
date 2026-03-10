
(* TODO: Add your comment here *)
FUNCTION_BLOCK Name
	
	
	
	AnalogOUT := INT_TO_REAL( REAL_TO_INT(AnalogOUT*100))/100;(*Zaokr¹glenie wyjscia analogowego*)
	//AnalogOutSignal := Scale(0,Normalize(0,RAW,32768),20);

	AnalogOut10 := REAL_TO_INT(AnalogOUT*10);
	AnalogOut100 := REAL_TO_INT(AnalogOUT*100);
	CASE Config.Signal OF
		voltage0_10:
			AnalogOutSignal := INT_TO_REAL( REAL_TO_INT(Scale(0,Normalize(0,RAW,32768),10)*100)/100);
		milliamps0_20:
			AnalogOutSignal := INT_TO_REAL( REAL_TO_INT(Scale(0,Normalize(0,RAW,32768),20)*100)/100);		
		milliamps4_20:
			AnalogOutSignal := INT_TO_REAL( REAL_TO_INT(Scale(4,Normalize(0,RAW,32768),20)*100)/100);

	END_CASE;
	CASE Config.SensorType OF
		Pressure:
			AnalogOUT := Scale(Config.LSV, Normalize(0,RAW,32768),Config.HSV);
		Temp:
			AnalogOUT := Scale(Config.LSV, Normalize(0,RAW,32768),Config.HSV);
			AnalogOutKelvin := AnalogOUT + 273.15 ;
		Angle:
			AnalogOUT := Scale(0, Normalize(0,RAW,32768),360);

	END_CASE;
	
	IF Config.HSV = 0 THEN 
		Error := TRUE ;
	END_IF
	IF Error THEN
		AnalogOUT := 0;
		AnalogOut10 := 0;
		AnalogOut100 := 0;
		AnalogOutSignal := 0; 
		AnalogOutKelvin := 0;
	END_IF
	
END_FUNCTION_BLOCK

