
TYPE
	SensorsType : 
		(
		Pressure,
		Temp,
		Angle
		);
	SignalType : 
		(
		voltage0_10,
		milliamps0_20,
		milliamps4_20
		);
	Configuration : STRUCT 
		LSV : REAL;
		HSV : REAL;
		SensorType : SensorsType;
		Signal : SignalType;
		
END_STRUCT;
	
END_TYPE
