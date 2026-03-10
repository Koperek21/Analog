
{REDUND_ERROR} FUNCTION_BLOCK Name (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		RAW : INT; (*dodanie wartoœci niobrobionej*)
		Config : Configuration; (*dodanie wartosci minimalnej*)
		(*HSV : REAL; (*dodanie wartosci maksymalnej*)
	END_VAR
	VAR_OUTPUT
		AnalogOUT : REAL;
		AnalogOut10 : INT;
		AnalogOut100 : INT;
		AnalogOutSignal : REAL;
		AnalogOutKelvin : REAL;
		Error : BOOL;
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION Scale : REAL (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		Minimum : REAL;
		Value : REAL;
		Maximum : REAL;
	END_VAR
END_FUNCTION

{REDUND_ERROR} FUNCTION Normalize : REAL (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		Minimum : REAL;
		Value : REAL;
		Maximum : REAL;
	END_VAR
END_FUNCTION

{REDUND_ERROR} FUNCTION INTx10 : INT (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
END_FUNCTION
