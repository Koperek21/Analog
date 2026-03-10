
PROGRAM _INIT
	(* Insert code here *)
	analog1Config.HSV := 20;
	analog1Config.LSV := 0;
	analog1Config.SensorType := Pressure;
	analog1Config.Signal:= voltage0_10;
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)
	fb_Analog(Config := analog1Config,RAW := auxTest);
	analog := fb_Analog.AnalogOUT;
	
	
	
	
	fb_Analog_2.Config.HSV := 100;
	fb_Analog_2.RAW := auxTest;
	fb_Analog_2.Config.LSV := 0;
	fb_Analog_2();
	analog_2 := fb_Analog_2.AnalogOUT;
	
	
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

