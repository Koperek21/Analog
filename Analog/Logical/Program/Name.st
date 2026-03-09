
(* TODO: Add your comment here *)
FUNCTION_BLOCK Name
	
	
	procent := Normalize(0,RAW,32768);
	AnalogOUT := Scale(LSV,procent,HSV);
	
	
	
	
END_FUNCTION_BLOCK

