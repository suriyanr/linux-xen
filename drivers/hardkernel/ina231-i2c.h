//[*]--------------------------------------------------------------------------------------------------[*]
//
//
// 
//  I2C INA231(Sensor) driver
//  2013.07.17
// 
//
//[*]--------------------------------------------------------------------------------------------------[*]
#ifndef _INA231_I2C_H_
#define _INA231_I2C_H_

//[*]--------------------------------------------------------------------------------------------------[*]
// extern function define
//[*]--------------------------------------------------------------------------------------------------[*]
extern  void    ina231_i2c_enable   (struct ina231_sensor *sensor);
extern	int		ina231_i2c_read		(struct i2c_client *client, unsigned char *cmd, unsigned int cmd_len, unsigned char *data, unsigned int len);
extern	int		ina231_i2c_write	(struct i2c_client *client, unsigned char *cmd, unsigned int cmd_len, unsigned char *data, unsigned int len);

//[*]--------------------------------------------------------------------------------------------------[*]
#endif /* _INA231_I2C_H_ */

//[*]--------------------------------------------------------------------------------------------------[*]
//[*]--------------------------------------------------------------------------------------------------[*]
