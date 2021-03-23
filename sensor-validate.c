#include "sensor-validate.h"

int isVariationInRange(double value, double nextValue, double maxDelta) {
  if(nextValue - value > maxDelta) {
    return 0;
  }
  return 1;
}
#if 0
int validateSOCreadings(double* values, int numOfValues) {
  int lastButOneIndex = numOfValues - 1;
  for(int i = 0; i < lastButOneIndex; i++) {
    if(!_give_me_a_good_name(values[i], values[i + 1], 0.05)) {
      return 0;
    }
  }
  return 1;
}

int validateCurrentreadings(double* values, int numOfValues) {
  int lastButOneIndex = numOfValues - 1;
  for(int i = 0; i < lastButOneIndex; i++) {
    if(!_give_me_a_good_name(values[i], values[i + 1], 0.1)) {
      return 0;
    }
  }
  return 1;
}
#endif

int validateParameterreadings(double* values,  int numOfValues , sensor_type_en sensor_type)
{
	bool retVal = 0;
	const sensor_eval_parameter_st sensor_eval_parameter[Max_count_sensor]={{0.05},{0.1}};
	int lastButOneIndex = numOfValues - 1;	
	for(int i = 0; i < lastButOneIndex; i++) 
	{
		if(isVariationInRange(values[i], values[i + 1], sensor_eval_parameter[sensor_type].max_allowed_delta)) 
		{
			retVal = 0;
		}
	}
	return retVal;
}
