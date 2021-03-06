/**
 ***************************************
 *
 * @file Touch.ino
 * @brief 触摸模块实验
 * 
 * 本次实验用于演示触摸模块的使用方法，程序中将会演示如何获取触摸按键的状态。
 *
 * @author gsh
 * @version 1.0
 * @date 2015.12.25
 *
 ***************************************
 */
 
int pin   = 3;  // 触摸模块的SIG引脚与D3端口相接
int value = 0;  // 定义一个int类型命名为value的变量用于暂存触摸状态

// 初始化
void setup()
{
	// 设置串口通讯波特率为9600
	Serial.begin(9600);
	
	// 设置端口模式
	pinMode(pin, OUTPUT);
}

// 主循环
void loop()
{
	// 读取D3端口电平状态
	value = digitalRead(pin);

	// 输出按钮状态
	// 低电平为常态，高电平为触摸状态
	Serial.print("Value = ");
	Serial.println(value);

	// 延时0.1秒（每0.1秒更获取一次状态）
	delay(100);
}

