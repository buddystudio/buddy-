/**
 ***************************************
 *
 * @file MatrixScanTest.ino
 * @brief LED阵列扫描闪灯案例
 * 
 * 实验程序为间歇闪灯，LED点亮一秒然后熄灭一秒，如此循环。
 * 
 * @author gsh
 * @version 1.0
 * @date 2016.9.28
 *
 ***************************************
 */

#include<BD.h>
#include<BD_LEDMatrix.h>

BD_LEDMatrix ledm;

byte img1[] = {0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};
byte img2[] = {0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};
byte img3[] = {0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0};
byte img4[] = {0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0};
byte img5[] = {0x0, 0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0};
byte img6[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x0, 0x0};
byte img7[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x0};
byte img8[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff};

void setup() 
{
  // DIO->D9, CLK->D6, LE->D5
  ledm.Init(D9, D6, D5);
}

void loop() 
{
  //ledm.Display(img1);
  //ledm.Display(img2);
  ledm.Display(img1, 500);
  ledm.Display(img2, 500);
  ledm.Display(img3, 500);
  ledm.Display(img4, 500);
  ledm.Display(img5, 500);
  ledm.Display(img6, 500);
  ledm.Display(img7, 500);
  ledm.Display(img8, 500);
}
