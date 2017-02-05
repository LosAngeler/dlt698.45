/*
 * ParaDef.h
 *
 *  Created on: Jan 6, 2017
 *      Author: lhl
 */

#ifndef PARADEF_H_
#define PARADEF_H_

#define delay(A) usleep((A)*1000)
//////////////////////////////////////////////////////////////
#define _CFGDIR_ 			"/nor/config"
#define _ACSDIR_			"/nand/acs"
///////////////////////////////////////////////////////////////
/*
 * 	进程间通讯相关限值
 * */

#define ARGVMAXLEN			50					//参数最大长度
#define PRONAMEMAXLEN		50					//进程名称最大长度
#define	PROJECTCOUNT		10					//守护进程可以支持的最多进程数
#define ARGCMAX				4					//支持进程参数最大数
#define FRAMELEN 			2048
#define BUFLEN  			2048						//上行通道发送接收数组长度
#define REALDATA_LIST_LENGTH 	10				//实时数据请求缓存
#define PRO_WAIT_COUNT     		60

///////////////////////////////////////////////////////////////
/*
 * 	终端类相关容量及参数定义
 * */
#define MAX_POINT_NUM 			1200

///////////////////////////////////////////////////////////////
/*
 * 	DL/T698.45		规约结构限值
 * */
#define TSA_LEN					17
#define OCTET_STRING_LEN		16
#define COLLCLASS_MAXNUM		1024		//定义集合类最大元素个数

#define CLASS7_OAD_NUM			10			//关联对象属性表
#define MAX_PERIOD_RATE   		48      	//支持的最到终端费率时段数
////////////////////////////////////////////////////////////////

/*
 * 	GPIO硬件接口
 * */
//TODO:根据交采芯片决定ESAM打开那个设备，不用CCTT_II区分
#ifdef CCTT_II
 #define DEV_SPI_PATH   "/dev/spi1.0"
#else
  #define DEV_SPI_PATH   "/dev/spi0.0"
#endif

#define	ACS_SPI_DEV		"/dev/spi0.0"		//计量芯片使用的spi设备

//Esam与ATT7022E共用数据线,复位信号，各自独立片选，CS=0，可读写，
//因此不能同时读写ESAM与ATT7022E，必须互斥操作。

#define DEV_ESAM_RST   	"/dev/gpoESAM_RST"
#define DEV_ESAM_CS    	"/dev/gpoESAM_CS"
#define DEV_ESAM_PWR   	"/dev/gpoESAM_PWR"

#define	DEV_ATT_RST		"/dev/gpoATT_RST"
#define	DEV_ATT_CS		"/dev/gpoATT_CS"

//II型RN8209控制gpio，目前程序中未用
#define DEV_RN_RST 		"/dev/gpo8209_RST"
#define DEV_RN_CS 		"/dev/gpo8209_CS"
////////////////////////////////////////////////////////////////

/*
 * 	互斥信号量
 * */

#define SEMNAME_SPI0_0 "sem_spi0_0" //专变、I型集中器交采和esam的spi通信互斥信号量
////////////////////////////////////////////////////////////////

/*
 * 	交采计量
 * */
#define MAXVAL_RATENUM			4		//支持的最大费率数
#define MAXVAL_HARMONICWAVE     19       //支持的谐波检测最高谐波次数

////////////////////////////////////////////////////////////////
/*
 * 	串口定义
 * */
#define S4851   1
#define S4852   2
#define S4853   3

////////////////////////////////////////////////////////////////
#endif /* PARADEF_H_ */
