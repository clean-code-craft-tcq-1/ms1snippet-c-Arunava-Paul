typedef enum
{
	SOC_sensor=0,
	Current_sensor,
	Max_count_sensor
}sensor_type_en;

typedef struct
{
	double max_allowed_delta;
}sensor_eval_parameter_st;

int validate_SensorParameterReadings(double* values,  int numOfValues , sensor_type_en sensor_type);
int isVariationInRange(double value, double nextValue, double maxDelta);
