
PROGRAM _INIT
	(* Insert code here *)
	 
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)
	fb_Analog(LSV := 0,RAW := auxTest,HSV := 20);
	analog := fb_Analog.AnalogOUT;
	
	
	
	
	fb_Analog_2.HSV := 100;
	fb_Analog_2.RAW := auxTest;
	fb_Analog_2.LSV := 0;
	fb_Analog_2();
	analog_2 := fb_Analog_2.AnalogOUT;
	
	
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

