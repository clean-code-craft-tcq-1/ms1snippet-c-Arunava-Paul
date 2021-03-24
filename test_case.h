typedef struct
{
	double *value_arr;
	int arr_length;
	sensor_type_en sn_type;
}test_set_st;

#define Test(a,b,c)  validate_SensorParameterReadings(a,b,c)
